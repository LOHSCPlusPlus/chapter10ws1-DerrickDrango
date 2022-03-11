#include "Line.h"

int main() {
  Point s(1,1);
  Point e(5,5);
  Line a(s,e);
  a.Print();
  a.lineLength();
  a.pLineLength();
    return 0;
}
