#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i = 2 ; i<n ; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){

    int num;
    cin >> num;

    if(isprime(num)){
        cout << "THE NUMBER IS PRIME" << endl;
    }
    else{
        cout << "THE NUMBER IS NOT PRIME" << endl;
    }


    return 0;
}