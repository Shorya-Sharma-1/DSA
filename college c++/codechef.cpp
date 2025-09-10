#include <iostream>
using namespace std;


void insertusingarray(int num[],int n,int a){
    num[n+1]=0;
    int b=0;
    for(int i=n;i>=0;i--){
        if(num[i]>a){
            num[i+1]=num[i];
        }
        else{
            b=i+1;
            break;
        }
    }
    num[b]=a;
}


int main(){
    int n=7;
    int a;
    cin>>a;
    int arr[n]={1,2,3,5,7,8,11};
    insertusingarray(arr,n,a);
    for(auto w:arr){
        cout<<w<<" ";
    }
    cout<<endl;
    return 0;
}

