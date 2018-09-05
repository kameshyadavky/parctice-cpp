#ifndef KY_LINK_LIST_H
#define KY_LINK_LIST_H

namespace ky{
  template <class T>
  class LinkedList{
  public:
    explicit LinkedList(): head_(nullptr){}
    ~LinkedList();
    LinkedList(const LinkedList &) = delete;
    LinkedList &operator = (const LinkedList &) = delete;

    int size() const;  //does not want function to accidently change value
    void push_front(T value);
    void print_list() const;

  private:
    Node<T> *head_;
  };
}// namespace ky

#endif
