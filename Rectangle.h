#include "Line.h"

class Rectangle {
  public:
    Rectangle();
    Rectangle(Line nLength, Line nHeight);
    void rPrint();
    double calcArea();
    void pcalcArea();
      
  private:
    Line length;
    Line height;
    
};