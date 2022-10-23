/*
#include<iostream>
using namespace std;
int main(){
    float a,b;
    char operation;

    cout<<" Enter first number: ";
    cin>>a;

    cout<<" Enter operation (+,-,*,/ : ";
    cin>>operation;

    cout<<" Enter second number: ";
    cin>>b;

    switch(operation){
        case '+':
         cout<<" Result = "<<a+b;
         break;
         case '-':
         cout<<" Result = "<<a-b;
         break;
         case '*':
         cout<<" Result = "<<a*b;
         break;
         case '/':
         cout<<" Result = "<<a/b;
         break;
         default:
         cout<<" Invalid operation please enter the right operation: "<<endl;
    }
}
*/
#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;

        }
        else if(key>arr[mid]){ 
            s = mid+1;

        }
        else if(key<arr[mid]){
            e = mid-1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[5] = {1,2,3,3,5};
    cout<<" First occurance of 3 at index is: "<<firstOcc(even, 5, 3)<<endl;
    return 0;
}