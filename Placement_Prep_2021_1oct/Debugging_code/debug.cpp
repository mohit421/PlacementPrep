
#include<bits/stdc++.h>
using namespace std;

int findBinary(int decimal){
    if(decimal==0){
        return 0;
    }
    return 10*findBinary(decimal/2) + decimal%2;
}
int main(){
    int decimal;
    cin>>decimal;
    cout<<findBinary(decimal);
    return 0;
}