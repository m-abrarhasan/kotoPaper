#pragma once
#include <iostream>

void clear() {
#ifdef _WIN32
  system("cls");
#endif

#ifdef linux
  system("clear");
#endif

#ifdef __APPLE__
  system("clear");
#endif
}
