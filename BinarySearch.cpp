#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
       int start = 0;
       int end = n-1;

       int mid = start + (end-start)/2;
       while(start<=ends){
           if(arr[mid]==key){
             return mid;
           }
           if(arr[mid]<key){
              start = mid+1;
           }
           else{
              start = mid-1;
           }
          mid = start + (end-start)/2;
       }
    return -1;
}

int main(){
     int even[6]={2,4,6,8,12,18};
     int odd[5]={3,8,11,14,16};

     int evenIndex = binarySeach(even,6,12);
     cout<<"Index of 12 is"<<evenIndex<<endl;

     int oddIndex = binarySearch(odd,5,11);
     cout<<"Index of 11 is"<<oddIndex<<endl;

     return 0;
}
