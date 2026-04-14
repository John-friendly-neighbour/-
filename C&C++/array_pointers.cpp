/*
Напишите программу, которая определяет и инициализирует массив первыми 20 нечетными числами. 
Выведите числа из массива на консоль по пять в строку. Для вывода используйте нотацию указателей (имя массива в качестве указателя). 
Подобным образом с помощью указателя выведите элементы массива в обратном порядке.
*/
#include <iostream>
using namespace std;

int main() {
	const short length = 20;
	short array[length];
	
	for (short i {0}; i < length; i++){
	    array[i] = i * 2 + 1;
	}
	
	const unsigned perline = 5;
	for (unsigned i {}; i < length; i++){
	    std::cout << *(array + i) << "\t";
	    
	    if ((i + 1) % perline == 0){
	        std::cout << std::endl;
	    }
	}
	
	std::cout << std::endl;
	
	for (unsigned i {length - 1}; i >= 0; --i){
	    std::cout << *(array + i) << "\t";
	    
	    if (i % perline == 0){
	        std::cout << std::endl;
	        
	    }
	}
	
	return 0;
}