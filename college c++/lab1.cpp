#include <iostream>
using namespace std;

void printarray(int arr[10],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0) continue;
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

void insertionarray(int *arr,int n,int a,int x){
    if (n>=10) {   
        cout<<"Array full"<<endl;
        return;
    }
    if (a<0||a>n) { 
        cout<<"Invalid position"<<endl;
        return;
    }
    for (int i=n;i>a;i--) {
        arr[i]=arr[i-1];
    }
    arr[a]=x; + 
    n++;          
}

void deletion(int *arr,int n,int a){
    if(n <= 0) {
        cout<<"Array empty"<<endl;
        return;
    }
    if(a<0 || a>=n) {
        cout<<"Invalid position"<<endl;
        return;
    }
    for(int i=a;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Original array : ";
    printarray(arr,n);
    int a,x;
    cout<<"Enter the position :";
    cin>>a;
    cout<<"Enter the element : ";
    cin>>x;
    insertionarray(arr,n+1,a,x);
    cout<<"New array after insertion : ";
    printarray(arr,n+1);
    cout<<endl;

    int b;
    cout<<"Enter position you want to delete: ";
    cin>>b;
    deletion(arr,n,b);
    cout<<"New array after insertion : ";
    printarray(arr,n);
    return 0;
}