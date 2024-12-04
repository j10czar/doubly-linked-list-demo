#pragma once

template <typename T>
class LinkedList{

private:

  struct Node{
    T data;
    Node* next;
    Node* prev;
  }

  int size;


public:

  LinkedList<T>T()


  class Iterator{
    private:
      Node* cur;


    public:
      T operator*() const;
      Iterator& operator++();
      Iterator& operator--();
      bool operator==(Iterator const& rhs);
      bool operator!=(Iterator const& rhs);
  }


  Iterator begin() const;
  Iterator tail() const;
  Iterator end() const;
  bool isEmpty() const;
  T getFront() const;
  T getBack() const;
  bool containts(T element) const;
  void enqueue(T element);
  void dequeue();
  void pop();
  void clear();
  void remove(T element);



};
