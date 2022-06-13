#pragma once
#include "paper.h"
#include <QVector>
// media_sizes
Paper double_demy(23.00, 36.00, "Double Demy\t[ 23x36 ]");
Paper half_demy(18.00, 23.00, "Half Demy\t[ 18x23 ]");

QVector<Paper> medias = { double_demy, half_demy };
