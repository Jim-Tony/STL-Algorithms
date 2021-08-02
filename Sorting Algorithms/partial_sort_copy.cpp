#include<bits/stdc++.h>
using namespace std;
void disp(vector<int> &f){
    for(auto i:f){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v{44,1,3,8,9,10,19,34,12};
    vector<int> new_vec; //we need only first 5 small elements
    partial_sort_copy(begin(v),end(v),begin(new_vec),end(new_vec)); 
    disp(new_vec);
    return 0;
}