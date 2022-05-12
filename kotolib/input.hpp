#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include "paper.hpp"

using namespace std;

int getOption(vector<string> nameList, char &border)
{
    int vPad = {1 * 2};
    int hPad = {2 * 2};

    int rows = 7 + vPad + nameList.size();

    // this probably uses lambda, idk yet ;)
    auto result = std::max_element(nameList.begin(), nameList.end(),
                                   [](const auto &a, const auto &b)
                                   {
                                       return a.size() < b.size();
                                   });
    int index = distance(nameList.begin(), result);
    string::size_type cols = 1 + nameList[index].size() + hPad;

    // invariant: written r number of rows so far
    for (int r = 0; r != rows; ++r)
    {
        // invariant: written c number cols so far
        string::size_type c = 0;
        while (c != cols)
        {
            if (r == 0 || r == 2 || r == rows - 4 || r == rows - 2 || (c == cols - 1 && r != rows - 1))
            {
                std::cout << border;
                ++c;
            }
            else
            {
                cout << " ";
                ++c;
            }
        }
        if (rows != (rows - 1))
        {
            std::cout << "\n";
        }
    }

    int option = {0};
    cin >> option;
    // validate option

    return option;
}