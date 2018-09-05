#include "node.h"
#include <stdlib.h>
#include <iostream>
#include "link_list.h"
#include <memory.h>

namespace ky{
  template <class T>
  LinkedList<T>::~LinkedList(){

  }

  template <class T>
  int LinkedList<T>::size() const{
    int size =0;
    Node<T> *current = head_;
    while(current){
      size++;
      current = current->GetNext();
    }
    return size;
  }

  template <class T>
  void LinkedList<T>::push_front(T value){
    auto *node = new Node<T>(value);
    node->SetNext(head_);
    head_ = node;
  }

  template <class T>
  void LinkedList<T>::print_list() const{
    Node<T> *current = head_;
    while(current!= nullptr){
      std::cout << current->GetData() << " --> ";
      current = current->GetNext();
    }

    //endl flush out previous output stack
    std::cout<<std::endl;
  }
}
