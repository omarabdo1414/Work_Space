#include <iostream>

/*
program checks if the number that Entered by user is Even or Odd
*/

/*
        *     *  
       ***    **
      *****   ***       

    i = rows                           if rows = 1 then columns = 1
    j = columns                        if rows = 2 then columns = 3
       **                              if rows = 3 then columns = 5
       **                              if rows = 4 then columns = 7 

                                        columns = 2 * rows - 1              

        n-1 n n+1
      nested for loop
    
*/


int main() {
    int rows;

    std::cout << "Please, Enter Number of rows you want : ";
    std::cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= 2 * rows - 1; j++)
        {
            if(j >= rows-(i-1) && j <= rows+(i-1))
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    
    return 0;
}
