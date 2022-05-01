// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T>
class TPQueue {
 private:
  sruct ITEM {
  T value;
  ITEM *n;
  ITEM *P;  
  };
 public:
  T pop();
  void push(const T& value);
  TPQueue():head(nullptr), tail(nullptr) {}
  ~TPQueue() {
  while (head) {
  pop();
  }
 private:
  TPQueue::ITEM *c(const T& value) {
  ITEM *it = new ITEM;
  it -> value = value;
  it -> n = nullptr;
  it -> p = nullptr;
  return it;
  }
  ITEM *t;
  ITEM *h;  
  };
template<typename T>
  void TPQueue<T>::push(const T& value) {
  ITEM *t = head;
  ITEM *it = create(value);
  while (t && t -> value.prior >= value.prior)
  t = t -> n;
  if (!temp && head) {  /в конец/
  tail->next = item;
  tail->next->prev = tail;
  tail = item;
  } else if (!temp && !head) { /в пустой/
  head = tail = item;
  } else if (!temp->prev) { /в начало/
  t->p = it;
  it->n = t;
  head = it;
  } else {
  temp->prev->next = item;
  it->p = t->p;
  it->n = t;
  t->p = it;
  }
}
template<typename T>
T TPQueue<T>::pop() {
if (head) {
ITEMtemp = head->n;
if (t)
t->p = nullptr;
T value = head->value;
delete head;
if (!head) t = nullptr;
head = t;
return value;
} else {
throw std::string("Empty!");
}
}  

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
