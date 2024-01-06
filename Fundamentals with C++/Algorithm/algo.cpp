#include <iostream>

/*
 5 6 swap

algorithm swap(a, b)
begin
temp = a --> one unit of time 1
a = b    --> one unit of time 1
b = temp --> one unit of time 1
end

Time Complexity
f(n) = 8 units of time

Big O notaion
O(1)

===================================

Algorithm of finding sum of all elements in an array

alogorithm sum(A, n)
{
    s = 0 --> one unit of time 1
    for(i = 0; i < n; i++) --> n + 1
    {
        s = s + A[i]; --> n times
    }
    retutn s; --> one unit of time 1
}

f(n) = 2n + 3

O(n)

===================================

Algorithm of finding sum of all elements in two matrixes

algorithm Add(A, B, n)
{
    for(i = 0; i < n; i++) --> n + 1
    {
        for(j = 0; j<n; j++) n * n + 1
        {
            C[i, j] = A[i, j] + B[i,j]; n * n
        }
    }
}

time comp -> f(n) = 2n^2 + 2n + 1

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
*/

int main()
{

    return 0;
}