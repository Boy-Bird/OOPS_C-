// Allocating and deletig a pointer
#include <iostream>
int main(){
  using std::cout;
  int localVariable = 5;
  int *pLocal = &localVariable;
  int *pHeap = new int;
  *pHeap = 7;
  cout << "localVariable: " << localVariable <<"\n";
  cout << "*pLocal: " << *pLocal << "\n";
  cout << "*pHeap: " << *pHeap << "\n";
  delete pHeap;
  pHeap = new int;
  *pHeap = 9;
  cout << "*pHeap: " << *pHeap << "\n";
  delete pHeap;
  return 0;
}
