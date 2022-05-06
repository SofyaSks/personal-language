#pragma once


#define шаблон_вывод_массива template <typename T> void ShowArr(T arr[], int length) { cout << "Массив: \n["; for (int i = 0; i < length; i++) cout << arr[i] << ", "; cout << "\b\b]\n"; }
#define поиск_первого_элемента_массива int SearchIndex(int arr[], int length, int n, int begin = 0) { for (int i = begin; i < length; i++) if (arr[i] == n) { 	cout << "Первое вхождение элемента \"" << n << "\" под индексом -> "; return i; } return -1; }
#define поиск_последнего_элемента_массива int SearchLastIndex(int arr[], int length, int n, int begin = 0) { for (int i = length - 1; i > 0; i--) if (arr[i] == n) { cout << "Последнее вхождение элемента \"" << n << "\" под индексом -> "; return i; } return -1; }
#define поиск_максимального_элемента int MaxEl(int arr[], int length) { cout << "Максимальное число массива = "; int max = arr[0]; for (int i = 0; i < length; i++) { if (arr[i] > max) max = arr[i]; } return max; }
#define поиск_минимального_элемента int MinEl(int arr[], int length) { cout << "Минимальное число массива = "; int min = arr[0]; for (int i = 0; i < length; i++) { if (arr[i] < min) min = arr[i]; } return min; }
#define среднее_арифметическое_массива int MeanValue(int arr[], int length) { int mean = 0; for (int i = 0; i < length; i++) mean += arr[i]; cout << "Среднее арифметическое массива = "; return mean / length; }
#define диапазон_элементов void Range(int arr[], int length, int begin, int end) { cout << "Элементы в диапазоне от " << begin << " до " << end << ": "; for (int i = 0; i < length; i++) if (arr[i] >= begin && arr[i] <= end) cout << arr[i] << ", "; cout << "\b\b."; }
#define счётчик_вхождений_элемента int Counter(int arr[], int length, int n) { int count = 0; cout << "Количество вхождений элемента " << n << " в массив = "; for (int i = 0; i < length; i++) if (arr[i] == n) count++; return count; }