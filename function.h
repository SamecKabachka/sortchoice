#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h> // ����� ��� ������ ������� rand(), srand()
#include <time.h> // ����� ��� ������ ������� time()
#include <ctime>
#include <windows.h>

using namespace std;


void menu(); // ����� ����
void fill_out(vector<int>& mas); // ���������� �������
unsigned int bidirectional_sort(vector<int>& mas); // ��������������� ���������� �������
unsigned int unidirectional_sort(vector<int>& mas); // ���������������� ���������� �������
void print(vector<int>& mas, unsigned int search_time); // ������ ������� � ������� 
void print(vector<int>& mas); // ������ �������