// Constructors and destructors called.

#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal{
public:
  Mammal();
  ~Mammal();

  int GetAge() const {  return itsAge;  }
  void SetAge(int age)  { itsAge = age; }
  int GetWeight() const { return itsWeight; }
  void SetWeight(int weight)  { itsWeight = weight; }

  void Speak() const { std::cout << "Mammal sound!" << '\n';}
  void Sleep() const { std::cout << "shh. I'm sleeping." << '\n';}

protected:
  int itsAge;
  int itsWeight;
};

class Dog : public Mammal{
public:
  Dog();
  ~Dog();

  BREED GetBreed() const { return itsBreed; }
  void SetBreed(BREED breed) {  itsBreed = breed; }

  void WagTail() const {std::cout << "Tail wagging..." << '\n';}
  void BegForFood() const { std::cout << "Begging for food..." << '\n';}
private:
  BREED itsBreed;
};

Mammal::Mammal():
itsAge(1),
itsWeight(5){
  std::cout << "Mammal constructor..." << '\n';
}

Mammal::~Mammal(){
  std::cout << "Mammal destructor..." << '\n';
}

Dog::Dog():
itsBreed(GOLDEN){
  std::cout << "Dog Constructor..." << '\n';
}

Dog::~Dog(){
  std::cout << "Dog destructor..." << '\n';
}

int main(){
  Dog fido;
  fido.Speak();
  fido.WagTail();
  std::cout << "Fido is " << fido.GetAge()<< " years old" << '\n';
  return 0;
}
