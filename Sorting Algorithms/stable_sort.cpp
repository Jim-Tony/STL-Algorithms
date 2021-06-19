#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    return a<b;
}
void disp(vector<double> &g){
    for(auto i:g){
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<double> d{1.2, 4.3, 7.8, 9.1, 1.1, 1.6};
    cout<<"Before sorting ";
    disp(d);
    stable_sort(begin(d),end(d),comp);//here are sorting the values only according to the integer part
    //The relative order is preserved
    cout<<"After sorting the integral part ";
    disp(d); 
    return 0;
}