#include "Rectangle.h"

int main() {  
  Point s(0,0);
  Point e(0,5);
  Point x(0,5);
  Point r(5,5);
  Line a(s,e);
  Line b(x,r);
  Rectangle t(a,b);
  t.rPrint();
  t.pcalcArea();
  return 0;
}
