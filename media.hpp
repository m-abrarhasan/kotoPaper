#pragma once
#include "paper.h"
#include <vector>
// media_sizes
Paper double_demy(23.00, 36.00, "Double Demy [ 23.00 x 36.00 ]");
Paper half_demy(18.00, 23.00, "Half Demy [ 18.00 x 23.00 ]");

std::vector<Paper> mediaStore = { double_demy, half_demy };
