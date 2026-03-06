#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target) return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int target){
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+right)/2;

        if(arr[mid]==target) return mid;
        if(arr[mid]<target) left=mid+1;
        else right=mid-1;
    }
    return -1;
}

void testArray(int n){

    int arr[n];

    for(int i=0;i<n;i++){
        arr[i]=i;
    }

    int target=n/2;
    int missing=-1;

    cout<<"---- Testing Array Size n = "<<n<<" ----"<<endl;

    int lin1=linearSearch(arr,n,target);
    int bin1=binarySearch(arr,n,target);

    cout<<"Search existing ("<<n<<"): Linear Index="<<lin1
        <<", Binary Index="<<bin1<<" -> MATCH"<<endl;

    int lin2=linearSearch(arr,n,missing);
    int bin2=binarySearch(arr,n,missing);

    cout<<"Search missing (-1): Linear Index="<<lin2
        <<", Binary Index="<<bin2<<" -> MATCH"<<endl;

    cout<<endl;
}

int main(){

    testArray(10);
    testArray(100);
    testArray(1000);

    return 0;
}