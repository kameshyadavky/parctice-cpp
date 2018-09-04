#ifndef KY_ARRAY_H
#define KY_ARRAY_H


/*
Functions to add
  int GetSize() const;
  bool IsEmpty() const;
  // Returns the capacity of the vector.
  int GetCapacity() const;
  // Prints out public information about the vector.
  void DebugString() const;
  int Pop();
  // Inserts the given value at the given index, shifting
  // current and trailing items to the right.
  void Insert(int index, int value);
  // Prepends the given value to the vector, shifting trailing
  // items to the right.
  void Prepend(int value);
  // Deletes item at index, shifting all trailing elements left.
  void Delete(int index);
  // Removes all instances of value from the vector.
  void Remove(int value);
  // Looks for value and returns first index with that value, -1 if not found.
  int Find(int value) const;


  private Functions
  // Determines the array size (in terms of power of growth factor)
  // required to accommodate the given capacity
  int DetermineCapacity(int capacity) const;
  // Checks to see if resizing is required for the given capacity
  // and grows or shrinks the vector as needed.
  void ResizeForSize(int candidate_size);
  // Increases the capacity of the vector.
  void IncreaseSize();
  // Decreases the capacity of the vector.
  void DecreaseSize();
*/

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
}   //namespace ky

#endif  //KY_ARRAY_H
