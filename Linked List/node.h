#ifndef KY_NODE_H
#define KY_NODE_H

//class should be defined in a header file
//used Templates which are same as generics in Java
/*
  can use different data types by defining Templates
*/

namespace ky{
  template <class T>
  class Node{
  public:
    //using all features of constructor except overloading
    //edit: there is one more called move constructor but I surely dont
    //understand it yet so not going to try it for now.
    Node(const T &value): next_(nullptr), data_(value){
       //nothing to do here
    }
    //destructor
    ~Node(){}
    //do not want a copy of node so disabling copy constructor
    Node(const Node &) = delete;
    //it is a copy assignment constructor
    /*
      Node n1, n2;
      n2 = n1; copy assignment constructor is called
      Node n3 = n1;  copy constructor is called
    */
    Node &operator = (const Node &) = default;

    //const at the end of the function restrict function to change class
    //variables or variable should be 'mutable'
    //return-by-refrence allows function to be used on left side of statement
    //GetData(2) = 5;
    //undertsanding return by refrence:
    /*
      int& string;
      int* string;
      &returns a refrence that is not the pointer or adress of but a refrence
      which can actually be modified as a simple value
      We can do that with pointe but have to use a special syntax( * and -> )
      Secondly pointer can be null but refrence can not so reader will not be confused
    */

    const T &GetData() const{
      return data_;
    }

    //can not return refrence as pointer is required to class object
    Node<T> *GetNext() const { return next_; }
    void SetData(const T &data) { data_ = data; }
    void SetNext(Node<T> *elem) { next_ = elem; }

  private:
    Node<T> *next_;
    T data_;
  };

}//namespace ky

#endif
