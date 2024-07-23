#include <iostream>

/*
Characteristics of Algorithms

1 - Input : 0 or more
2 - output : atleast one output
3 - Definitieness : should be known and meaningfull
4 - finitesness : Should Stop at some point
5 - Effectiveness : you should not have unnessary statements
*/

/*
Analysis

 5 6 swap

algorithm swap(a, b)
begin
temp = a    --> one unit of time 1
a    = b    --> one unit of time 1
b    = temp --> one unit of time 1
end

Time Complexity
f(n) = 3 units of time

Big O notaion
O(1)

Space Complexity
a = 1 
b = 1
temp = 1

space(n) = 3 words
O(1)

===================================

Algorithm for finding sum of all elements in an array

alogorithm sum(A, n) n = 5
{
    s = 0 --> one unit of time
    for(i = 1; i <= n; i++) n + 1
    {
        s = s + A[i]; n
    }
    retutn s; --> one unit of time 
}

f(n) = 2n + 3

Time Complexity
O(n)

Space Complexity
A = n
s = 1
n = 1
i = 1

O(n)
===================================
arr = {1,2,3,4,5,6,7,8,9}
best case = O(1)
avarage case = O(sum of elements / number of elements)
worst case = O(n)
===================================

Algorithm of finding sum of all elements in two matrixes

algorithm Add(A, B, n)
{
    for(i = 0; i < n; i++) n + 1
    {
        for(j = 0; j < n; j++) n * (n + 1)
        {
            C[i, j] = A[i, j] + B[i,j]; n * n
        }
    }
}

time comp -> f(n) = 2n^2 + 2n + 1
O(n^2)

space -> A ,  B,    n , i, j,  C
         n^2,n^2 ,  1,  1, 1, n^2
f(n) = 3n^2 + 3
O(n^2)
===================================

for(i = 1; i < n; i = i*2)
{
    statment;
}

assume i >= n

i 
-------
1
1 * 2
2^1 * 2
2^2 * 2
2^3 * 2

2^k times

2^k >= n

2^k = n

k = log n

O(log n)
Binary Search
*/

int main()
{

    return 0;
}