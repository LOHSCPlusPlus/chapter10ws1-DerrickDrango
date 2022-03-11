#include "Point.h"

class Line {
  public:
    Line();
    Line(Point s, Point e);
    void Print();
    double lineLength();
    void pLineLength();
      
  private:
    Point start;
    Point end;
    
};