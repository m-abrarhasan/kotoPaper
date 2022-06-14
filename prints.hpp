#pragma once
#include "paper.h"
#include <vector>

// print_sizes
Paper one_4 ( 09.00, 11.50, "One Four   [ 9.00 x 11.5 ]" );
Paper one_8 ( 5.75, 09.00,  "One Eight  [ 5.75 x 9.00 ]" );

std::vector<Paper> prints = { one_4,
                              one_8
                            };
// kate: indent-mode cstyle; indent-width 5; replace-tabs on; 
