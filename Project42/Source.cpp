#include <iostream>
using namespace std;

class Sorting {
public:
    static void gnome_sort(int* arr, int size)
    {
        int iterations = 0;
        if (arr != nullptr && size > 0)
        {
            int i = 0;
            while (i < size - 1)
            {
                iterations++;
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                    if (i == 0)
                    {
                        i++;
                    }
                    else
                    {
                        i--;
                    }
                }
                else
                {
                    i++;
                }
            }
        }
        cout << "Iterations for Gnome: " << iterations << endl;
    }

    static void stupid_sort(int* arr, int size)
    {
        int iterations = 0;
        if (arr != nullptr && size > 0)
        {
            int i = 0;
            while (i < size - 1)
            {
                iterations++;
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                    if (i == 0)
                    {
                        i++;
                    }
                    else
                    {
                        i = 0;
                    }
                }
                else
                {
                    i++;
                }
            }
        }
        cout << "Iterations for Stupid: " << iterations << endl;
    }

    static void bubble_sort(int* arr, int size)
    {
        int iterations = 0;
        if (arr != nullptr && size > 0)
        {
            for (int i = 0; i < size - 1; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    iterations++;
                    if (arr[j] > arr[j + 1])
                    {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
        }
        cout << "Iterations for Bubble: " << iterations << endl;
    }
};

int main()
{
    srand(time(0));

    const int N = 1000;
    int arr1[N], arr2[N], arr3[N];

    for (int i = 0; i < N; i++)
    {
        int random = rand() % 1000;
        arr1[i] = random;
        arr2[i] = random;
		arr3[i] = random;
    }

    Sorting::gnome_sort(arr1, N);
    Sorting::stupid_sort(arr2, N);
    Sorting::bubble_sort(arr3, N);

    return 0;
}