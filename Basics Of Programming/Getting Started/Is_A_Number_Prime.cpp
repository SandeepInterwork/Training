#include <iostream>
using namespace std;

bool isPrime(int n){
    
    int count = 0;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            count++;
            break;
        }
    }
    return count;
}

int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    while(t--){
        int n;
        cin >> n;

        if(isPrime(n) == 0)
            cout << "prime" << endl;
        else 
            cout << "not prime" << endl;
    }
    
}