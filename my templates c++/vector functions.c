/*
to insert
v.push_back()
to instialise vector of value 3 with size 10
vector <int> v(10,3);
we can copy vectors
vector<int> v1=v; //by value
vector<int> &v2=v; //by reference


vector iterator (can also use auto keyword)
vector <int> ::iterator it=v.begin();

*it //value at it
it++ //next iterator

if container is vector of pair
vector <pair <int,int>> v;
vector <pair <int,int>> ::iterator it;
it=v.begin();
for (){
  *(it).first // access first value of pair using iterator
  it->second /access second value of pair using iterator
}


iteration tactics
for(int value:v ){
    cout<<value<<endl; //copy by value
}
for(int &value:v ){
    cout<<value<<endl; //copy by refernce
}



begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)


Capacity
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.

Modifiers:

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector


limits:

continuous memory allocation limit
local declaration -> 1e5
global declaration -> 1e7


*/
