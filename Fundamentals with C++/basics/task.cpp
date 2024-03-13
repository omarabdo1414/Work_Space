#include <iostream>

void triangle(int rows)
{
	int i, j;

	for(i = 1; i < rows; i++)
	{
		for(j = 1; j < rows * 2 -1; j++)
		{ 
			if(j >= rows - (i - 1) && j <= rows + (i - 1))
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

}
int main()
{
	int rows;
	std::cin >> rows;

	triangle(rows);
	
	return 0;
}