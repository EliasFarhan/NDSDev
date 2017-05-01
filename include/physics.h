/*
 * physics.h
 *
 *  Created on: Mar 28, 2017
 *      Author: efarhan
 */

#ifndef INCLUDE_PHYSICS_H_
#define INCLUDE_PHYSICS_H_

#include <nds.h>

struct Fixed
{
	int number;
	unsigned int bits;
	int fixed_number;

	Fixed(int number, unsigned bits):number(number), bits(bits)
	{
		fixed_number = intToFixed(number, bits);
	}

	Fixed operator+(struct Fixed f);
	Fixed operator-(struct Fixed f);
	Fixed operator*(struct Fixed f);
	Fixed operator/(struct Fixed f);


};
class Vector2;
class Point2;

class Point2
{
	//pixel positions
public:
	Point2(int x, int y);
	Vector2 GetVector2();
private:
	int x,y;
};

class Vector2
{
	//physics position
	Vector2(Fixed x, Fixed y);
	Point2 GetPoint2();
private:
	Fixed x,y;

};

class Rigidbody
{
public:
	Point2 GetPixelsPosition();
private:
	Vector2 position;
};

class Box
{
private:
	Vector2 offset;
};

class Circle
{
private:
	Vector2 offset;
};

#endif /* INCLUDE_PHYSICS_H_ */
