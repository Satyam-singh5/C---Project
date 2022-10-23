/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*

#include<iostream>
using namespace std;
int main(){
     int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"i";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
        cout<<n-j+1;
        j=j+1;
        }
    cout<<endl;
    i=i+1;
    }

}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    
    }

}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1,toprint=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<toprint<<" ";
            toprint=toprint+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
*/
/*

#include<iostream>
using namespace std;
int main(){
    int n=10;
    int i=1;
    for(int i=1;i<=n;i++){
        int j=1;
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/**************************************
 * Pattern no. 1
 * ************************************/
/*
    #include<iostream>
    using namespace std;
    int main(){
         int n;
         cout<<"Enter the Number: ";
         cin>>n;
         // Print row value....
         for(int i=1;i<=n;i++){
        // Print coloumn value...
            for(int j=1;j<=i;j++){
                cout<<" "<<j;
            }
            cout<<endl;
         }
    }
    */
/*****************************************
 * pyramid pattern....
 * ***************************************/
/*
#include<iostream>
using namespace std;

 int main()
  {
   int row,i,j,k;
   cout<<"Enter the number: ";
   cin>>row;

   cout<<endl;

    for(i=1;i<=row;i++)
     {
       for(j=1;j<=row-i;j++)
	   cout<<" ";

       for(k=1; k<=i*2-1; k++)
	   cout<<k;

       cout<<endl;
     }

   
 }
*/
/*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
         i++;
    }
}
*/
/**************************************
 * Alphabetical pattern
 * ************************************/
/*

#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            // Here we use typecasting.... 
            char ch ='A'+i-1;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/**************************************
 * Alphabateical patter.....
 * ***********************************/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            //Typecasting....
            char ch='A'+ j-1; 
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/**********************************
 * A B C d E F | Pattren....
 * *******************************/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Name: ";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}
*/
/*********************************************
 * A B C    |
 * B C D    | Pattern Question...
 * C D E    |
 * ********************************************/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter the Number: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        //Typecasting......
    char ch= 'A' +i+j-2;
    cout<<ch<<" ";
    j++;
    
       }
       cout<<endl;
       i++;

    }

}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter the Number: ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        char ch='A'+i-1;
        cout<<ch<<" ";
         
         }
         cout<<endl;
         
         
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  Number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}*/
/*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
         char start = 'A'+n-i;
        while(j<=i){
            cout<<start<<" ";
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/************************************************
 * Reverse Alphabetical pattern......
 * **********************************************/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  Number: ";
    cin>>n;;
    for(int i=1;i<=n;i++){
         char start = 'A'+n-i;
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start=start+1;
        }
        cout<<endl;
    }
}
*/
/*
/*********************************
 Space pattern program....,Using  While loop...
 ********************************/
/*
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the Number: ";
     cin>>n;
     int i=1;
     while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
     }
}
*/
/*******************************************
 * Space pattern program....,Using  For loop...
 * *******************************************/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/
/********************************************
 * Filling the space by printing X.....
 * *****************************************/
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"X";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;


}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1, space=1;
        while(space<i){
            cout<<" ";
            space = space +1;
        }
        while(j<=n-i+1){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
*/

/*****************************************
 * pyramid pattern....
 * ***************************************/
/*
#include<iostream>
using namespace std;

 int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        //Print (1st triangle.)
        int space=n-i;
        while(space){
            cout<<" ";
            space = space-1;
        }
        //print(2nd triangle).....
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        // Print (3rd Triangle)...
        int start =i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i=i+1;
    }
 }
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";

        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
