#include<iostream>

using namespace std;

void rightShiftElements(int array[], int N, int M){
  for(int i=0;i<M;i++){
          int temp=0;

         if(N>0){
           temp=array[N-1];
          }

        for(int j=N-1;j>0;j--){
          array[j]=array[j-1];
         }
         if(N>0){
           array[0]=temp;
         }

    }

}

int main() {

   int arr[] = {1, 2, 3};

   int size = sizeof(arr)/sizeof(arr[0]);

   rightShiftElements(arr, size, 1);
   return 0;

}
