#include "rectangle.h"

bool Shapes::Rectangle::isIn(int x, int y) const {
    return x >= from.x_ && y >= from.y_ && x <= to.x_ && y <= to.y_;
}
