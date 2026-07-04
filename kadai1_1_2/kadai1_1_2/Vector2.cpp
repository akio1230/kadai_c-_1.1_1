#include "Vector2.h"

Vector2 Vector2::operator +(const Vector2& vec2) const
{
	int x = x + vec2.x;
	int y = y + vec2.y;

	return Vector2(x, y);
}