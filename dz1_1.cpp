/*
1_1. Даны два массива целых чисел одинаковой длины A[0..n-1] и B[0..n-1]. 
Необходимо найти первую пару индексов i0 и j0, i0 ≤ j0, такую что A[i0] + B[j0] = max {A[i] + B[j], где 0 <= i < n, 0 <= j < n, i <= j}. 
Требования: Время работы - O(n).
n ≤ 100000.

*/

#include <iostream>

using namespace std;

void solution(int* A, int * B, int n){
    int max = A[0] + B[0];
    int indA = 0;
    int indB = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(A[i] + B[j] > max){
                max = A[i] + B[j];
                indA = i;
                indB = j;
            }
        }
    }
    cout << indA << " " << indB << endl;
}

int main(){
    int n;
    cin >> n;

    int* arrayA = new int[n]; 
    int* arrayB = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arrayA[i];  
    }
    for(int i = 0; i < n; i++){
        cin >> arrayB[i];
    }

    solution(arrayA, arrayB, n); 

    return 0;
}