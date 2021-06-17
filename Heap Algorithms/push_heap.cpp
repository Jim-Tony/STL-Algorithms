//Algo 2 *push_heap*
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{4,5,6,1,2,3,9};
    sort(begin(v),end(v));
    make_heap(begin(v),end(v));
    //thus heap is made
    v.push_back(7); //We are pushing a new element 
    //arranging the pushed element in heap
    push_heap(begin(v),end(v));
    cout<<"In Heap form: ";
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}