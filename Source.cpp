#include<iostream>
#include<cstdlib>
#include<ctime>
//Функции - продолжение
//ARGUMENTSandPARAMETRS

void mult_x5(int num) {//num - переметр функции(переменная копирующая в себя аргумент функции)
	num *= 5;
}

void arr_x5(int arr[]) {
	arr[0] *= 5;
}


//Задача1.
void fill_arr(int arr[], const int length, int left, int right) {//ф-ия заполняющая массив arr длиною в length случайными числами от left до right(границы диапазона случайных чисел
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}
//функция выводящая массив в консоль
void print_arr(int arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b}\n";
}

void positive_arr_el(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}
//задача 3.
int two_arr_max(int arr1[], const int length1, int arr2[], const int length2) {
	int max = arr1[0];
	for (int i = 1; i < length1; i++)
		if (arr1[i] > max)
			max = arr1[i];
	for (int i = 0; i < length2; i++)
		max = arr2[i] > max ? arr2[i] : max;
	return max;
}



int main() {
	system("chcp 1251>nul");
	int n, m;
	//аргументы и параметры функции
	/*
	n = 10;
	std::cout << "n = " << n << std::endl;//n = 10
	mult_x5(n);//n - аргумент функции(значение которое в нее передается)
	std::cout << "n = " << n << std::endl;//n = 10, т.к. параметры это лишь копии исходных данных*/
	
	//Аргументы и параметры при работе с массивом
	/*int my_arr[3]{7, 14, 6};
	std::cout << "my_arr[0] = " << my_arr[0] << std::endl;//7
	arr_x5(my_arr);
	std::cout << "my_arr[0] = " << my_arr[0] << std::endl;//35, т.к. ф-ия сохраняет изменения совершаемые над массивами*/

	//Задача 1. Индексы положительных элементов
	/*std::cout << "Задача 1.\n Массив:\n";
	const int size1 = 10;
	int arr1[size1];
	fill_arr(arr1, size1, -10, 11);//[-10....10]шаг 1 - заполнить массив
	print_arr(arr1, size1);//шаг2 - вывести массив

	std::cout << "Индексы положительных элементов:\n";
	positive_arr_el(arr1, size1);
	std::cout << std::endl;*/

	//Задача 3. Два массива из них максимальный элемент
	std::cout << "Задача 3\nМассив 1:\n";
	const int size3_1 = 8;
	int arr3_1[size3_1];
	fill_arr(arr3_1, size3_1, 10, 21);//[10...21]
	print_arr(arr3_1, size3_1);

	std::cout << "Массив 2:\n";
	const int size3_2 = 6;
	int arr3_2[size3_2];
	fill_arr(arr3_2, size3_2, 11, 20);//[11.....19]
	print_arr(arr3_2, size3_2);


	std::cout << "Максимальный элемент из обоих массивов -> " << two_arr_max(arr3_1, size3_2, arr3_2, size3_2) << "\n\n";




	return 0;
}