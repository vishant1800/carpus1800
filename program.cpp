#include<iostream>
using namespace std;

void check_1(int n){
    if(n > 0){
        cout<<n<<" ";
        check_1(n-1);
    }
}

void check_2(int n){
    if(n > 0){
        check_2(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int x = 3;
    check_1(x);
    cout<<endl;
    check_2(x);
    return 0;
}