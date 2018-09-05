#include "linklist.cpp"
#include <iostream>

using namespace ky;

//yet to include tests

int main(int argc, char *argv[]){
  LinkedList<int> tester{};
  tester.push_front(6);
  std::cout<<tester.size();
}
