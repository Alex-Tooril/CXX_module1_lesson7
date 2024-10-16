#include<iostream>

using namespace std;

int fibo(int n)
{
    // первые два члена в вычислениях не нуждаются
    // возвращаем как есть
    if(n < 2) return n;

    // вычисляем сумму двух предыдущих членов рекурсией
    return fibo(n-2) + fibo(n-1);
}

int main()
{
    // Выводим первые 5 чисел ряда Фибоначчи
    for(int i=0; i < 5; i++)
        cout << fibo(i) << endl;
    
    //Возвращаем код завершения программы
    return 0;
}