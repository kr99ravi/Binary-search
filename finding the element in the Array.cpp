#include<iostream>
using namespace std;
int BinarySearch(int *arr,int key,int length){
    int low=0;
    int high=length-1;
    int middle;
    while(low<=high){
        middle=(low+high)/2;
        if(key==arr[middle])
          return middle;
        else if(key<arr[middle])
          high=middle-1;
        else if(key > arr[middle])
          low=middle+1;
    }
    return -1;
}

int main()
{
  int A[10]={1,2,3,4,5,6,7,8,9,10};
  int index =-1 ;
    index=BinarySearch(A,5,10);
  if(index==-1)
    cout<<"Not found";
  else
    cout<<"Found at index:"<<index;
    return 0;  
}
