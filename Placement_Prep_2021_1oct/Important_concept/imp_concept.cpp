//                  Date:- Sieve of erathosthenes

/*
-We use this to print all the prime number in a given range
-It gives a better approach for finding prime number in a given range 
*/

// Code
/*
#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n){
    int prime[n+1] =  {0};
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            for(int j= i*i;j<=n;j+=i){
                prime[j] = 1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    sieveOfEratosthenes(n);
    return 0;
}
*/


//      Prime factorization using sieve 

// code
/*
#include<iostream>
using namespace std;

void primeFactor(int n){
    int spf[100] = {0};
    for(int i=2;i<=n;i++){
        spf[i] = i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}
int main(){
    int n;cin>>n;

    primeFactor(n);
    return 0;
}
*/




//                          Inclusion-Exclusion Principle

/*
How many number between 1 and 100 are divisible by 5 or 7

-- Some number divisible by 5   ----> n1
-- some pf them is divisible by 7  --->n2
-- and some divisible by both  ---->n3

number divisible by 5 or 7 are --> n1 + n2 - n3


*/

/*
#include<iostream>
using namespace std;

int divisible(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return c1+c2-c3;

}
int main(){
    int n,a,b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b);
    return 0;
}

*/



//          Euclid algorithm to find GCD
/*
#include<iostream>
using namespace std;

int euclidGCD(int a,int b){
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<euclidGCD(a,b);
    return 0;
}
*/