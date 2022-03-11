#include <iostream>
#include "Line.h"
using namespace std;
Line::Line(Point s, Point e) {
start = s;
end = e;
}

void Line::Print(){
  cout << "Start: ";
  start.print();
  cout << "End: ";
  end.print();
}

double Line::lineLength(){
  return start.calcDistance(end);
}

void Line::pLineLength(){
  cout << lineLength() << endl;
}