//this is needed so that the header content is included only once.
//#pragma once is not supported by all compilers. If it is not supported
//use #ifndef..
#pragma once 
//#ifndef RECTANGLE_H
//#define RECTANGLE_H
enum Colors { Red, Green, Blue, Yellow };

class Rectangle
{
public:
	Rectangle();
	Rectangle(int width, int height);
	Rectangle(int width, int height, Colors color);
	Rectangle(const Rectangle& rec);
	int GetArea();
	int GetPerimeter();

private:
	int m_width, m_height;
	int m_area;
	Colors m_color;
};

//#endif