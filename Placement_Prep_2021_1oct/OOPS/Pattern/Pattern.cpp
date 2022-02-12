                            // Pattern
            
// Question 1) Rectangle Pattern

// Code
/*
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// Question 2) Hollow rectangle Pattern
// Code
/*
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row){
                cout<<"*";
            }
            else if(j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

//  Question 3) Inverted Half 
/*
                    *****
                    ****
                    ***
                    **
                    *
*/
// Code
/*
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

// Question- 4 --> half Pyramid with 180 degree rotation
/*
    *
   **
  ***
 ****
*****

*/

/*
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){  
            if(j<=row-i)
                cout<<"  ";
            else
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

*/


// Question- 5 ---> Half Pyramid Using Numbers

/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/



//Qustion-6---Floyd's Triangle

// Code
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}

*/

// Question-7 --->Butterfly Pattern

// Code
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
}
for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
}
return 0;
}

*/


//Question 8) Inverted Pattern

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/

// Question 9: 0-1 pattern
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

// Question 10: Rhombus Pattern

/*
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *  
 

*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


// Question 11: 
/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    
    
    }
    return 0;
}
*/


// Question 12: Number Pattern
/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    
    
    }
    return 0;
}

*/



// Question 13: Palindromic Pattern

/*

        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5 

*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/





// Question 14: Star Pattern
/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

/*

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=2*i-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

*/



// Question 14: Zig-Zag Pattern
/*

  *   *   *   *   *  
 * * * * * * * * * * 
*   *   *   *   *   *

*/


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0)  || (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}



*/



// Question 15: Pattern

/*

        *
      *
    *
  *
*
*    
  *
    *
      * 
        *

*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            if((i+j)==6){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            if((i+j)==6){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        
        cout<<endl;
    }
    return 0;
}



*/


// Question 16: Pattern


/*


* 
* *
* * * 
* * * *
* * * * * 
* * * *
* * * 
* *
*

*/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/



// Question 17: Pattern --> Inverted half pyramid

/*



*****
****
***
**
*


*/


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

*/
/*

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==j || i==1 || j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


*/