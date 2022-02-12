//                                  Date:- 25 Dec,2021
//                                      
//                                   2D-Array

/*

Declaration:-
int arr[n][m];
float arr[n][m];
bool arr[n][m];
char arr[n][m];


Taking input:-

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}



Printing Output:-

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}


*/
// Code
/*
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
    cout<<"\n Matrix is: \n";
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}
*/

//                              Searching Element in a matrix
/*
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
    cout<<"\n Matrix is: \n";
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
int x;
cin>>x;
bool flag=false;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==x){
            cout<<i<<" "<<j<<"\n";
            flag=true;
        }
    }
}
if(flag){
    cout<<"Element is found\n";
}
else{
    cout<<"Element is not found\n";
}
return 0;
}
*/




//                      Spiral order matrix Traversal


// Code:-
/*
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int row_start = 0,row_end=n-1,column_start=0,column_end=m-1;
    while(row_start<=row_end && column_start<=column_end){
        // for row start
        for(int col=column_start;col<=column_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        
        // for column_end 
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][column_end]<<" ";
        }
        column_end--;
        // for row_end
        for(int col=column_end;col>=column_start;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        
        // for column_start
        for(int row = row_end;row>=row_start;row--){
            cout<<a[row][column_start]<<" ";
        }
        column_start++;
    }
    return 0;

}

*/


//                              Transpose a Matrix
/*
#include<iostream>
using namespace std;

int main(){
    int A[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    // Print Transpose Matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

*/


//                              Matrix Multiplication
/*

#include<iostream>
using namespace std;

int main(){
    int n,m,p;
    cin>>n>>m>>p;
    int A[n][m],B[m][p],C[n][p];
    cout<<"Enter Matrix A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter Matrix A:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cin>>B[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            C[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<m;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    cout<<"Print Matrix Multiplication:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
*/



//                                      Matrix Search

/*
Write an algorithm to find that the given value exists in the matrix or not
Integers in each row are sorted in ascending
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int r=0,c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(mat[r][c] == target){
            found = true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element Found!";
    }
    else{
        cout<<"Element does not exist";
    }
    return 0;
}
*/


