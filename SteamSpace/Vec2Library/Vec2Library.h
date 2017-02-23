#pragma once
class Vec2 {
private:
	float x;
	float y;
public:

	float posX;
	float posY;
	float GetPosX() { return posX; }
	float GetPosY() { return posY; }

	float GetX() { return x; }
	float GetY() { return y; }
	void SetX(float X) { x = X; }
	void SetY(float Y) { y = Y; }

	Vec2(float positionX, float positionY);
	~Vec2();

};