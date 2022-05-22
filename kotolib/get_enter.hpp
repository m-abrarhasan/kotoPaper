#pragma once
#include <iostream>

bool get_enter(std::string _prompt = "")
{
  std::cout << "\n"
            << _prompt;
  getchar();
  char enter = getchar();

  if (enter == '\n')
    return true;
  else
    return false;
}
