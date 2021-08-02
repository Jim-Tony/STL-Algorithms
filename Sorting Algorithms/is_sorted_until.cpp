// Returns an iterator to the first element of the container which does not follow an ascending order.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v{1,2,5,9,3};
    auto it = is_sorted_until(begin(v),end(v)); //returns an iterator
    cout<<*it<<" element collapses the sorted order "; 

    return 0;
}