#pragma once
class Vector2
{
public:
	Vector2() = default;
	Vector2(int x, int y) : x(x), y(y){}

	~Vector2() = default;

public:
	int operator +(const Vector2& vec2) const;

	int operator -(const Vector2& vec2) const;

	int operator ==(const Vector2& vec2) const;

	int operator <<(const Vector2& vec2) const;

public:
	int x = 0;
	int y = 0;
};

