#include "paper.h"
#include <fstream>
#include <iostream>

// misc
void clear();
bool get_enter();

// input functions
int getui_op(std::string txtpath);
int getui_num(std::string txtpath);

// output funtions
void putui(double total_sheet, double total_cost, std::string txtpath);