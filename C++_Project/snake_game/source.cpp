// snake_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool gameOver;
const int hieght = 20;
const int width = 20;
int x, y, fruitX, fruitY, score;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN,
};

eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = hieght / 2;
    y = width / 2;
    fruitX = rand() % width;
    fruitY = rand() % hieght;
    score = 0;
}

void Draw()
{
    system("cls");
    for (int i = 0; i < width; i++)
        std::cout << "#";
    cout << endl;

    for (int i = 1; i <= hieght; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (i == 1 || i == hieght)
            {
                std::cout << "-";
            }
            else if (i > 1 && i < hieght)
            {
                if (j > 1 && j < width)
                    std::cout << " ";
                else
                    std::cout << "-";
            }
            else
            {
                std::cout << " ";
            }

        }
        std::cout << std::endl;
    }

    for (int i = 0; i < width; i++)
        std::cout << "#";
    cout << endl;
}

void Input()
{

}

void Logic()
{

}

int main()
{
    Setup();
        while (!gameOver)
        {
            Draw();
            Input();
            Logic();
        }
    std::cout << "Hello World!\n";
}