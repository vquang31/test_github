#include <bits/stdc++.h>

/*

-- tim kiem nhi phan
-- tim kiem tam phan
-- tim kiem noi suy (interpolution search)

mid =low + 

-- tim liem fibonacci search
// chat casc diem giua theo so fibo




*/

// tim kiem nhi phan
// 


int BinarySearch(int a[],int k, int n){
    int l=0 , r =n-1;
    int mid =  l + ( r - l ) / 2;
    while( l < r){
        mid = l + ( r - l ) / 2;        
        if(mid < k ) {
            l=mid+1;
        }
        else if( k < mid ){
            r= mid - 1 ;
        }
        else return mid ;
    }
    return -1;
}



using namespace std;

int main (){
    int n , k ;
    cin  >> n >> k;
    for (int i = 0 ; i < n ;i++ ){

    } 
}