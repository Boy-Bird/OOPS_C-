// Converting from Counter to unsigned short()
// allows to do implicit conversions to built in types.

#include <iostream>
class Counter{
public:
  Counter();
  Counter(int val);
  ~Counter(){}
  int GetItsVal() const { return itsVal; }
  void SetItsVal(int x) { itsVal = x; }
  operator unsigned short();
private:
  int itsVal;
};

Counter::Counter():
itsVal(0)
{}

Counter::Counter(int val):
itsVal(val)
{}

Counter::operator unsigned short(){
  return ( int(itsVal));
}

int main(){
  Counter ctr(5);
  int theShort = ctr;
  std::cout << "theShort: " << theShort << std::endl;
  return 0;
}
