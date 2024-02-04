#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int org_n=n;
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if (sum==org_n){
        cout<<"IT is a ARMSTRONG no";
    }
    else {
        cout<<"IT is NOT ARMSTRONG";
    }
    return 0;
}