#include <iostream>

using namespace std;

int main() {
    int arr[9] = {9, 1, 6, 5, 2, 8, 0, 4, 3};

    for (int i=0; i<9-1 ;i++)
    {
        for (int j=0;j<9-1-i ;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < 9;k++)
    {
        cout << arr[k] << endl;
    }

    system("pause");
    return 0;
}