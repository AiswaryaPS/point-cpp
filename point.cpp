#include "Point.h"
#include <cmath>
#include <iostream>
Point::Point():m_a(0),m_b(0)
{
}
Point::Point(int a, int b):m_a(a),m_b(b)
{
}
Point::Point(const Point& ref):m_a(ref.m_a), m_b(ref.m_b)
{
}
Quadrant Point::quadrant() const
{
    if(m_a >0 && m_b >0)
        return Q1;
    else if(m_a <0 && m_b >0)
        return Q2;
    else if(m_a <0 && m_b <0)
        return Q3;
    else
        return Q4;   
}
double Point::distanceFromOrigin()  const
{
    return sqrt((m_a*m_a)+(m_b*m_b));
}
bool Point::isOrigin() const{
	if(m_a==0 && m_b==0)
		return true;
    else    
	    return false;
}

bool Point::isOnXAxis() const{
	if((m_a>0 || m_a<0) && m_b==0)
		return true;
    else   
	    return false;
}

bool Point::isOnYAxis() const{ 
	if((m_b>0 || m_b<0) && m_b==0)
		return true;
    else    
	    return false;
}

void Point::display() const 
{
    std::cout << "x-axis" << m_a;
              << "y-axis" << m_b;
}










