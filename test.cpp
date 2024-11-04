#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main(){
    pair<int,char>pair1;
    pair1.first=100;
    pair1.second='A';
    cout<<pair1.first<<" "<<pair1.second<<endl;

    pair<int,char>pair2(12,'b');
    cout<<pair2.first<<" ";
    cout<<pair2.second<<endl;

    pair<int,char>pair3;
    pair3=make_pair(1,'s');
    cout<<pair3.first<<" ";
    cout<<pair3.second<<endl;

    return 0;
}
