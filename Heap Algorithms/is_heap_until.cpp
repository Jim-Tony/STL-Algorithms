//To check if a elements in a container is a heap until a certain position
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v { 3, 1, 4, 1, 5, 9 };
 
    make_heap(v.begin(), v.end());
 
    // probably mess up the heap
    v.push_back(2);
    v.push_back(6);
 
    auto heap_end = is_heap_until(v.begin(), v.end());
 
    cout << "all elements in v: ";
    for (auto i : v) cout << i << ' ';
    cout << '\n';
 
    cout << "only elements which are in heap form: ";
    for (auto i = v.begin(); i != heap_end; ++i) cout << *i << ' ';
    cout << '\n';
}