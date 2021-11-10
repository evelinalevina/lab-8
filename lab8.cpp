#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    std::cout << "Задание 2" << std::endl;
    int i, j, k, n, x1, x2, p1, p2, b1, b2;
    std::cout << "Введите количество чисел в последовательности: ";
    std::cin >> n;
    std::cout << "Введите последовательность чисел: ";
    int* arr = new int[n];;
    for (i = 0; i < n; i++)
        std::cin >> arr[i];

    for (i = 0; i < (n - 1); i++)
    {
        for (j = i + 1; j < n; j++)
        {
            x1 = arr[i];
            while (x1 >= 10)
                x1 /= 10;
            x2 = arr[j];
            while (x2 >= 10)
                x2 /= 10;
            if (x1 > x2)
            {
                std::swap(arr[i], arr[j]);
            }

            if (x1 == x2)
            {
                p1 = p2 = 1;
                b1 = arr[i];
                b2 = arr[j];
                while (b1 != 0)
                {
                    p1 *= b1 % 10;
                    b1 /= 10;
                }
                while (b2 != 0)
                {
                    p2 *= b2 % 10;
                    b2 /= 10;
                }
                if (p1 > p2)
                {
                    std::swap(arr[i], arr[j]);
                }

                if (p1 == p2)
                {
                    if (arr[i] > arr[j])
                    {
                        std::swap(arr[i], arr[j]);
                    }
                }
            }
        }
    }
    std::cout << "Результат: " << std::endl;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    delete[] arr;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    std::cout << "Задание 3" << std::endl;
    int i, j, n, m, k, sum = 0, min_sum = 101;
    std::cout<<"Введите количество строк и столбцов: ";
    std::cin>>n>>m;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[m];

    std::cout<<"Матрица: "<< std::endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            std::cin>>arr[i][j];
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        if (sum < min_sum)
        {
            k = j;
            min_sum = sum;
        }
        sum = 0;
    }
    for (i = 0; i < n; i++)
        arr[i][k] += 3;

    std::cout<<"Итоговая матрица: "<<std::endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            std::cout<<arr[i][j]<<" ";
        std::cout<<std::endl;
    }
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;

}

