ifndef __POINT_H
#define __POINT_H

enum Quadrant {
  Q1=1,
  Q2=2,
  Q3=3,
  Q4=4
};

class Point {
  int m_a;
  int m_b;
  public:
  Point();
  Point(int,int);
  Point(const Point&);
  double distanceFromOrigin()  const;
  Quadrant quadrant() const;
  bool isOrigin() const;
  bool isOnXAxis() const;
  bool isOnYAxis() const;
  void display() const;
};

#endif
	


