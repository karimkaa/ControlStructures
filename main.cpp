#include <iostream>

int main()
{
    using namespace std;

    int numRows;
    cout << "Введите количество строк треугольника Паскаля: ";
    cin >> numRows;

    for (int i = 0; i < numRows; i++)
    {
        int coef = 1;
        for (int space = 1; space <= numRows - i; space++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            cout << coef << "   ";
        }
        cout << endl;
    }
}
