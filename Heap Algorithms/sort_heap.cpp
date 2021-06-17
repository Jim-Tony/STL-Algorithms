//This is used to sort the elements in the heap
#include<bits/stdc++.h>
using namespace std;
void disp(vector<int> h){
    for(auto i:h){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(int argc, char const *argv[])
{
    vector<int> v = {9,1,2,3,5,7,6,11};
    //Let's make a heap
    make_heap(begin(v),end(v));
    // Now we r gonna push a element;
    v.push_back(8);
    push_heap(begin(v),end(v));
    cout<<"Before sorting ";
    disp(v);
    sort_heap(begin(v),end(v)); //This will sort the heap elements
    cout<<"After sorting ";
    disp(v);
    return 0;
}