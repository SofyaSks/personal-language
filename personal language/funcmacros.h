#pragma once


#define ������_�����_������� template <typename T> void ShowArr(T arr[], int length) { cout << "������: \n["; for (int i = 0; i < length; i++) cout << arr[i] << ", "; cout << "\b\b]\n"; }
#define �����_�������_��������_������� int SearchIndex(int arr[], int length, int n, int begin = 0) { for (int i = begin; i < length; i++) if (arr[i] == n) { 	cout << "������ ��������� �������� \"" << n << "\" ��� �������� -> "; return i; } return -1; }
#define �����_����������_��������_������� int SearchLastIndex(int arr[], int length, int n, int begin = 0) { for (int i = length - 1; i > 0; i--) if (arr[i] == n) { cout << "��������� ��������� �������� \"" << n << "\" ��� �������� -> "; return i; } return -1; }
#define �����_�������������_�������� int MaxEl(int arr[], int length) { cout << "������������ ����� ������� = "; int max = arr[0]; for (int i = 0; i < length; i++) { if (arr[i] > max) max = arr[i]; } return max; }
#define �����_������������_�������� int MinEl(int arr[], int length) { cout << "����������� ����� ������� = "; int min = arr[0]; for (int i = 0; i < length; i++) { if (arr[i] < min) min = arr[i]; } return min; }
#define �������_��������������_������� int MeanValue(int arr[], int length) { int mean = 0; for (int i = 0; i < length; i++) mean += arr[i]; cout << "������� �������������� ������� = "; return mean / length; }
#define ��������_��������� void Range(int arr[], int length, int begin, int end) { cout << "�������� � ��������� �� " << begin << " �� " << end << ": "; for (int i = 0; i < length; i++) if (arr[i] >= begin && arr[i] <= end) cout << arr[i] << ", "; cout << "\b\b."; }
#define �������_���������_�������� int Counter(int arr[], int length, int n) { int count = 0; cout << "���������� ��������� �������� " << n << " � ������ = "; for (int i = 0; i < length; i++) if (arr[i] == n) count++; return count; }