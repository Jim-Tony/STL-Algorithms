#include<bits/stdc++.h>
using namespace std;
#define all(x) begin(x),end(x)
int main(int argc, char const *argv[])
{
    vector<int> v = {4,5,6,10,2,3,9,1};
    (is_heap(all(v))) ? cout<<"Yes it is ": cout<<"No it is not a heap ";
    //After making it to a heap;
    make_heap(all(v));
    cout<<"\n";
    (is_heap(all(v))) ? cout<<"Yes it is ": cout<<"No it is not a heap ";
    return 0;
}