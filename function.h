#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h> // нужен для вызова функций rand(), srand()
#include <time.h> // нужен для вызова функции time()
using namespace std;


void menu();//вывод меню
void fill_out(vector<int>& mas);//заполнение массива
void sort(vector<int>& mas);//сортировка массива
void print(vector<int>& mas);//выворд массива