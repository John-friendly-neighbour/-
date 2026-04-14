/*
Напишите программу, которая определяет и инициализирует массив первыми 20 нечетными числами. 
Выведите числа из массива на консоль по пять в строку. 
Для вывода определите указатель, который указывает на массив. 
С помощью инкремента (++) указателя выведите элементы в прямом порядке. 
А с потом в отдельном цикле с помощью декремента указателя выведите элементы массива в обратном порядке.
*/

#include <iostream>
using namespace std;

int main(){
    const unsigned short length = 20;

    unsigned short array[length];
    for (unsigned i {}; i < length; i++){
        array[i] = i * 2 + 1;       
    }

    const unsigned short perline = 5;
    unsigned short *ptr = array;
    
    for (unsigned short i{}; i <= length - 1; i++){
        std::cout << *ptr++ << "\t";

        if ((i + 1) % perline == 0){
            std::cout << std::endl;
        }
    }

    ptr = &array[length - 1];
    for (short i {length - 1}; i >= 0; --i){
        std::cout << *ptr-- << std::endl;

        if (i % perline == 0){
            std::cout << std::endl;
        }
    }

    return 0;
}