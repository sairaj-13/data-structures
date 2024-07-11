#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot= arr[s];
    int c=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<= pivot){
            c++;
        }
    }
    //placing pivot at right position
    int pivotindex=s+c;
    swap(arr[pivotindex], arr[0]);
    //left and right part ,me all elements less and more than pivot respectively
    int i=0, j=e;
    while(i<pivotindex and j>pivotindex){
        if(arr[i]>)nums[i]
        i++;
        k++;
        else if (arr[i]<nums[i]){

        }

}


void quicksort(int arr[], int s, int e){
// base case
if(s>=e){
    return;
}

int p= partition(arr, s,e);
//left part
quicksort(arr, s, p-1);
//right part sort
quicksort(arr, p+1, e);

}



int main(){
    int arr[]={9,4, 2,1};
    int n=sizeof(arr)/sizeof(int);
cout<<" sab sahi chal raha hai"<<endl;
   quicksort(arr, 0, n-1);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    cout<<endl;
}



}
