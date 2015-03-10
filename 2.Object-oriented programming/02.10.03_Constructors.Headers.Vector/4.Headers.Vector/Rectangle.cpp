#include"Rectangle.h"

Rectangle::Rectangle()
{
	m_width = 6;
	m_height = 3;
}

Rectangle::Rectangle(int width, int height)
{
	m_width = width;
	m_height = height;
}

Rectangle::Rectangle(int width, int height, Colors color)
{
	Rectangle();
	m_width = width;
	m_height = height;
	m_color = color;
}

Rectangle::Rectangle(const Rectangle& rec)
{
	m_width = rec.m_width;
	m_height = rec.m_height;
	m_area = rec.m_area;
	m_color = rec.m_color;
}

int Rectangle::GetArea()
{
	return m_width*m_height;
}

int Rectangle::GetPerimeter()
{
	return 2 * m_width + 2 * m_height;
}
