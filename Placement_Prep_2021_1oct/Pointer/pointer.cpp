//                                  Pointer

/*
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr;
    aptr = &a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    return 0;
}

*/

/*

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr;
    aptr = &a;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    char *cptr= &ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<*cptr<<endl;
    return 0;
}

*/




//         Character Arrays and Pointers
//              1.
/*
#include<iostream>
using namespace std;

int main(){
    char C[8];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    cout<<C;
    return 0;
}
*/



//              2.
/*
#include<iostream>
using namespace std;

int main(){
    char C[8];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    cout<<C;
    return 0;
}
*/


//                  3.
/*
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char C[8];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    int len = strlen(C);

    cout<<C<<endl<<"length of char array: "<<len;
    return 0;
}

*/


//                  4.

/*
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char C[]="JOHN";
    char C[8]="JOHN";
    cout<<"size in bytes = "<<sizeof(C)<<endl;
    int len = strlen(C);

    cout<<C<<endl<<"length of char array: "<<len;
    return 0;
}

*/

//              5.

/*
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char C[]="JOHN";
    // char C[8]="JOHN";
    char C[5] = {'J','O','H','N','\0'};
    cout<<"size in bytes = "<<sizeof(C)<<endl;
    int len = strlen(C);

    cout<<C<<endl<<"length of char array: "<<len;
    return 0;
}

*/


//          6.

/*
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char c1[6] = "Hello";
    char* c2;
    c2 = c1;
    cout<<c2[1];
    c2[0] = 'A';

    cout<<endl<<c1;
    return 0;
}

*/