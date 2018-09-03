#include <iostream>
#include <memory>
#include "array.cpp"


int main(int argc, char *argv[]) {
  ky:: KyArray tester(3);
  tester.Push(1);
  std::cout<<tester.GetValueAt(0);  
}
