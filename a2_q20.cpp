#include<iostream>
using namespace std;

int main() 
{
    int num;
    cout << "enter a number";
    cin >> num;

    for (int i = 0; i < num; i++)
      {
        for (int j = 0; j < num; j++) 
        {
            if (j == 0 || j == num - 1 || (i >= num / 2 && (i == j || i + j == num - 1))) 
            {
                cout << "* ";
            } else 
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
