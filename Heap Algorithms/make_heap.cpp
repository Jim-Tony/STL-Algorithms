// Algo 1 *make_heap()*
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{0,1,2,3,4,5,6,7,8,9};
    //Re-arranging in the heap form
    make_heap(begin(v),end(v));
    
    //Printing the values in Heap
    cout<<"In Heap form: ";
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
    /* code */
    return 0;
}
