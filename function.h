#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h> // нужен для вызова функций rand(), srand()
#include <time.h> // нужен для вызова функции time()
#include <ctime>
#include <windows.h>

using namespace std;


void menu();//вывод меню
void fill_out(vector<int>& mas);//заполнение массива
unsigned int sort(vector<int>& mas);//сортировка массива
void print(vector<int>& mas, unsigned int search_time);//выворд массива и времени 
void print(vector<int>& mas);//выворд массива