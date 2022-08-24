/*
1)- begin() – Returns an iterator pointing to the first element in the vector
2)- end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3)- size() – Returns the number of elements in the vector.
4)- max_size() – Returns the maximum number of elements that the vector can hold.
5)- capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
6)- resize(n) – Resizes the container so that it contains ‘n’ elements.
7)- empty() – Returns whether the container is empty.
8)- reserve() – Requests that the vector capacity be at least enough to contain n elements.
9)- front() – Returns a reference to the first element in the vector
10)- back() – Returns a reference to the last element in the vector
11)- assign() – It assigns new value to the vector elements by replacing old ones
12)- push_back() – It push the elements into a vector from the back
13)- pop_back() – It is used to pop or remove elements from a vector from the back.
14)- insert() – It inserts new elements before the element at the specified position
15)- erase() – It is used to remove elements from a container from the specified position or range.
16)- swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
17)- clear() – It is used to remove all the elements of the vector container

The time complexity for doing various operations on vectors is-
* Random access – constant O(1)
* Insertion or removal of elements at the end – constant O(1)
* Insertion or removal of elements – linear in the distance to the end of the vector O(N)
* Knowing the size – constant O(1)
* Resizing the vector- Linear O(N)
*/