#ifndef KY_ARRAY_H
#define KY_ARRAY_H

namespace ky{
  class KyArray{
  public:
    KyArray(int capacity);
    void Push(int value);
    int GetValueAt(int index) const;
  private:
    int capacity;
    int size_{0};
    std::unique_ptr<int[]> data_;
  };
}   //namespacen ky

#endif  //KY_ARRAY_H
