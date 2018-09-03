#include "array.h"
#include <iostream>

namespace ky{
  KyArray::KyArray(int capacity) : size_(0){
    if(capacity < 1){
      std::cout << "Can not make array of that size"<< std::endl;
      exit(EXIT_FAILURE);
    }
    data_ = std::make_unique<int[]>(capacity);
  }

  void KyArray::Push(int value){
    data_[size_] = value;
    ++size_;
  }


  int KyArray::GetValueAt(int index) const {
    if (index < 0 or index >= size_) {
      std::cout << "Index out of bounds." << std::endl;
      exit(EXIT_FAILURE);
    }

    return data_[index];
  }
}
