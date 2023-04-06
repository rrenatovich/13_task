// task13_HW_NN.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
using namespace std;

float Criteria_value(int* arr1, int* arr2, int size) {
    float count_positive = 0;
    float criteria_value = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr1[i] == arr2[j]) {
                arr2[j] = -1;
                count_positive++;
                break;
            }
        }
    }

    criteria_value = (size - count_positive) / (size);
    return criteria_value;
}

int main()
{
    int* array_1, * array_2, array_size;
    float crit_value;

    cin >> array_size;
    array_1 = new int[array_size];
    array_2 = new int[array_size];

    for (int i = 0; i < array_size; i++) {
        array_1[i] = rand() ;
        array_2[i] = rand() ;
    }

    //int array_3[5] = { 1,2,3,4,5 };
    //int array_4[5] = {1,2,2,3,4 };
    crit_value = Criteria_value(array_1, array_2, sizeof(array_1)/sizeof(*array_1));
    // Критерий принимает значение от 0 до 1, где 0 = масссивы полностью совпадают 
    cout  << " " << crit_value;
    return 0;
}
