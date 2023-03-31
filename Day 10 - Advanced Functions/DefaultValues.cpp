// Default values in memeber functions

#include <iostream>
using namespace std;

class Rectangle{
public:
  // Constructors
  Rectangle(int width, int height);
  ~Rectangle(){}
  void DrawShape(int aWidth, int aHeight, bool UseCurrentVals = false) const;

private:
  int itsWidth;
  int itsHeight;
};

// Constructor implementation
Rectangle::Rectangle(int width, int height):
itsWidth(width),
itsHeight(height)
{}

void Rectangle::DrawShape(int width, int height, bool UseCurrentValue) const {
  int printWidth;
  int printHeight;

  if(UseCurrentValue == true){
    printWidth = itsWidth;
    printHeight = itsHeight;
  }
  else {
    printWidth = width;
    printHeight = height;
  }

  for(int i=0; i<printHeight; i++){
    for(int j=0; j<printWidth; j++){
      cout << "*";
    }
    cout << "\n";
  }
}

int main(){
  Rectangle theRect(30,5);
  cout << "DrawShape(0,0,true)...\n";
  theRect.DrawShape(0,0,true);
  cout << "DrawShape(40,2)...\n";
  theRect.DrawShape(40,2);
  return 0;
}
