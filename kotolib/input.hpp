#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include "paper.hpp"

using namespace std;

int getOption(vector<paper> list, char &border, string header1)
{
    // get vector of name from list
    vector<string> nameList;
    // need to learn how transform works
    transform(
        list.begin(), list.end(), std::back_inserter(nameList),
        [](const paper &v)
        { return v.name; });

    // build header-1 & header-2
    string h1 = ":: ==> Select " + header1;
    string h2 = ":: ==> Select Option   [0-" + to_string((nameList.size() - 1)) + "]";
    int vPad = {1};
    int hPad = {6};

    int rows = 6 + (vPad * 2) + nameList.size();

    // this probably uses lambda, idk yet ;)
    auto result = std::max_element(nameList.begin(), nameList.end(),
                                   [](const auto &a, const auto &b)
                                   {
                                       return a.size() < b.size();
                                   });
    int index = distance(nameList.begin(), result);

    // get the size of largest string to calculate cols
    auto Lstring = max({nameList[index].size(), h1.size(), h2.size()});

    // invariant: written r number of rows so far
    for (int r = 0; r != rows; ++r)
    {
        string::size_type cols = 1 + Lstring + (hPad * 2);

        // invariant: written c number cols so far
        string::size_type c = 0;
        while (c != cols)
        {
            if (r == 0 || r == 2 || r == rows - 3 || r == rows - 1 || c == cols - 1)
            {
                std::cout << border;
                ++c;
            }
            else if (r == vPad + 3 && c == hPad)
            {
                cout << "hello";
                c += 5;
            }
            else
            {
                cout << " ";
                ++c;
            }
        }
        std::cout << "\n";
    }

    for (int i = 0; i < list.size(); i++)
    {
        std::cout << i
                  << " -> "
                  << list[i].name
                  << "\n";
    }

    int option = {0};
    cout << "> ";
    // cin >> option;
    // validate option

    return option;
}