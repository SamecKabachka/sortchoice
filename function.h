#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h> // ����� ��� ������ ������� rand(), srand()
#include <time.h> // ����� ��� ������ ������� time()
using namespace std;


void menu();//����� ����
void fill_out(vector<int>& mas);//���������� �������
void sort(vector<int>& mas);//���������� �������
void print(vector<int>& mas);//������ �������