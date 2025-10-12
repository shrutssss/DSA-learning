#  C++ STL Notes
> Reference: [Striver's A2Z DSA](https://takeuforward.org/) and [GeeksforGeeks](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)

---

## Table of Contents

- [STL Overview](#-stl-overview)
- [Sequence Containers](#-sequence-containers)
  - [Vector](#vector)
  - [Deque](#deque)
  - [List](#list)
- [Container Adapters](#-container-adapters)
  - [Stack](#stack)
  - [Queue](#queue)
  - [Priority Queue](#priority-queue)
- [Associative Containers](#-associative-containers)
  - [Set](#set)
  - [Map](#map)
- [Unordered Containers](#-unordered-containers)
  - [Unordered Set](#unordered-set)
  - [Unordered Map](#unordered-map)
- [ Iterators](#-iterators)
- [ Algorithms & Utility Functions](#️-algorithms--utility-functions)
- [ auto Keyword](#-auto-keyword)
- [Time Complexity Table](#-time-complexity-table)

---

##  STL Overview

- **STL = Containers + Iterators + Algorithms + Functions**
- Helps in solving problems faster using pre-defined data structures and functions.

---

## Sequence Containers

### Pairs
- container combining 2 elements of same or different datatypes into a single unit.
- header file : utility.
- can be nested.
```cpp
pair<dtype1,dtype2> p = {element1, element2}
cout<<p.first;   //o/p: element1
cout<<p.second; //o/p: element2
```
### Vector

- Dynamic array, supports random access, resizes automatically.
- stores collection of elements of SAME datatype in CONTIGUOUS memory.
- Functions: push_back, pop_back, size, clear, begin, end
- Time Complexity: Access O(1), Insert O(1) (end), Middle Insert O(n)

```cpp
vector<int> v = {1, 2, 3};
v.push_back(4);     // Add at end
cout << v[2];       // Access by index
```

### Deque
- Double-ended queue: insert/delete from both front and back.
- Functions: push_front, push_back, pop_front, pop_back, at
- Time Complexity: Access O(1), Insert/Delete ends O(1)
```cpp
deque<int> dq = {1, 2, 3};
dq.push_front(0);
dq.push_back(4);
```
### List
- Doubly linked list. No random access. Efficient insert/erase anywhere with iterator.
- Functions: push_front, push_back, insert, erase
- Time Complexity: Insert/Erase O(1), Traverse O(n)
```cpp
list<int> lst = {1, 2, 3};
auto it = lst.begin();
lst.insert(it, 0);
```

## Container Adapters
### Stack
- LIFO structure (Last In First Out)
- Uses deque internally.
- Functions: push, pop, top, empty, size
- Time Complexity: All O(1)

```cpp
stack<int> st;
st.push(1);
st.pop();
cout << st.top();
```
### Queue
- FIFO structure (First In First Out)
- Uses deque internally.
- Functions: push, pop, front, back, empty, size
- Time Complexity: All O(1)
```cpp
queue<int> q;
q.push(1);
q.pop();
cout << q.front();
```
### Priority Queue
- First element: always greatest of all elements
- Rest of the elements: decreasing order.
- Functions: push, pop, top, size, empty.
- Time Complexity: push/pop O(log n), top O(1)
- Max-heap by default. Use greater<> for min-heap.

```cpp
priority_queue<int> pq;  // Max-heap
pq.push(10);
pq.push(2);
pq.pop();
cout << pq.top();
```

- Min Heap:

```cpp
priority_queue<int, vector<int>, greater<int>> minpq;
```

## Associative Containers
### Set
- Stores sorted unique elements.
- Functions: insert, erase, find, count
- Time Complexity: O(log n)
```cpp

set<int> s = {3, 1, 2};
s.insert(5);
s.erase(3);
```

### Map
- Stores sorted key-value pairs with unique keys.
- Functions: insert, erase, find, [], count
- Time Complexity: O(log n)
```cpp
map<string, int> m;
m["apple"] = 3;
```

## Unordered Containers
### Unordered Set
- Stores unique elements, no order, uses hashing.
- Functions: insert, erase, find, count
- Time Complexity: Avg O(1), Worst O(n)
```cpp
unordered_set<int> us;
us.insert(10);
us.erase(5);
```

### Unordered Map
- Stores key-value pairs, no order.
- Functions: insert, erase, find, [], count
- Time Complexity: Avg O(1), Worst O(n)
```cpp
unordered_map<string, int> um;
um["key"] = 1;
```


##  Iterators
- pointer-like object that points to an element inside some container.
- use them to iterate over a container.
- help you manipulate the data stored inside a container and connect algorithms to containers.
- are analogous to using the cursor while typing some text. You can shift them to any position you want.

```cpp
vector<int> v = {1, 2, 3};
for (auto it = v.begin(); it != v.end(); ++it)
    cout << *it;
```
Types: begin(), end(), rbegin(), rend()
Tip: Use auto to simplify syntax.