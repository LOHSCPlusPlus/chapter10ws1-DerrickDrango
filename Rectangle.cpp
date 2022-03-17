#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(Line nLength, Line nHeight){
  length = nLength;
  height = nHeight;
}

void Rectangle::rPrint(){
  cout << "Length: ";
  length.Print();
  cout << "Height: ";
  height.Print();
}

double Rectangle::calcArea(){
  return length.lineLength() * height.lineLength();
}

void Rectangle::pcalcArea(){
  cout << "Area: " << length.lineLength() * height.lineLength() << endl;
}