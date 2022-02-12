//                                             Date - 12 oct,2021
// From today i started revision basic and learning intermediate to advanced topic from various sources 
// And practice coding question  all code inn c++ only

/*
Revision Basic coding question in c++
*/

/*
1. Find maximum of three given number 
*/
/*
#include<iostream>

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    if(a>b)
        if(a>c)
            std::cout<<a<<std::endl;
        else
            std::cout<<c<<std::endl;
    else    
        if(b>c)
            std::cout<<b<<std::endl;
        else
            std::cout<<c;
    return 0;
}
*/
/*
Using ternary operator
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    a>b?((a>c)?cout<<a:cout<<c):((b>c)?cout<<b:cout<<c);
    return 0;
}
*/


// Find if a given number is prime or not ?
// Using While loop in c++
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int  ans = 0;
    int div = 2;
    while(div<n){
        if(n%div==0){
            ans = 1 ;
            break;
        }
        else
            div += 1;
    }
    if(ans==0)
        cout<<"Prime";
    else
        cout<<"Not Prime";
    
    return 0;
}
*/

// Using for loop above question
/*
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            ans =1;
            break;
        }
    }
    if(n<=1){
        ans = 1;
    }
    if(ans == 0){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";    }
    return 0;
}
*/










//                                              Date 24 Nov, 2021

// Check if a number is prime or not

/*
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag = 0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime-No.";
    }
    return 0;
}

*/





// Reverse a given number n


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    cout<<reverse;
    return 0;
}

*/



// Check if a given no. is armstrong number or not


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int originalNum = n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
    }
    if(originalNum==sum){
        cout<<"Armstrong Num"<<endl;
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}

