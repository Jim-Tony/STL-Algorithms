//Algo 3 *pop_heap*
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{4,5,6,1,2,3,9,7};
    sort(begin(v),end(v));
    make_heap(begin(v),end(v));
    //thus a heap is made
    //the top element to be removed in the heap should made last
    pop_heap(begin(v),end(v));
    v.pop_back(); //the last element is popped out


    //Printing the values in Heap
    cout<<"In Heap form: ";
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    /* code */
    return 0;
}