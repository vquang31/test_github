#include <bits/stdc++.h>

using namespace std;

int giaithua(int n){
    if( n == 0 ) return 1;
    return giaithua(n-1) * n;
}


/*

    if(suy biến){
        <giải quyết trường hợp suy biến>
    }
    else {
        <tiền xử lý đệ quy>
        <đệ quy>
        <hậu xử lý đệ quy>
    }

Đệ quy tuyến tính   ex: bài toán giai thừa
Đệ quy nhị phân
 --- đệ quy fibo  fibo(n)=fibo(n-1)+fibo(n-2) không phải đệ quy nhị phân
    bởi 2 lần đệ quy không tách rời nhau
    ->> dẫn đến giải thuật chia và trị
Đệ quy phi tuyến
    - quay lui vét cạn
    - nhánh cận







*/

int main(){
    
}