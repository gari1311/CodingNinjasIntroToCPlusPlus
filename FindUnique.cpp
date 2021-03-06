/*
Given an integer array of size 2N + 1. In this given array, N numbers are present twice and one number is present only once in the array.
You need to find and return that number which is unique in the array.
Note : Given array will always contain odd number of elements.


Input format :
Line 1 : Array size i.e. 2N+1
Line 2 : Array elements (separated by space)
Output Format :
Unique element present in the array
Constraints :
1 <= N <= 10^4 + 1
Sample Input 1:
7
2 3 1 6 3 6 2
Sample Output 1:
1
Sample Input 2:
5
2 4 7 2 7
Sample Output 2:
4
*/

#include<iostream>
#include <algorithm>
#include "solution.h"
using namespace std;

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}

int FindUnique(int * arr, int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int res = 0; 
    for (int i = 0; i < size; i++) 
        res = res ^ arr[i]; 
    return res; 
}

