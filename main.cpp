#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main(){
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int flag = 0;
    int a;
	char c;
// �������� ����� � ������ ��� � ���������� c
	ifstream fin("data.txt");
	fin >> c;
	fin.close();
	
// ���� ��� ������ ��������
    do {
    	cout << "������� ����� 1 ����� �������� �� �������, ����� 2 ����� ���������� ���� ������ � ����� 8 ����� ����� �� ���������" << endl;
    	cin >> a;
		
		// ���� ������������ ������ ��������
		if (a == 1){
			int ans;
			
			// ���� ������������ ����� ��� ������� �� �������
			if (flag != 0) {
               cout << "\n�� ��� �������� �� ������� �����, ������ �������� ������? 1 - ���, 2 - ��" << endl;
               cin >> ans;
			}
			//���� ������������ �� ������� �� ������, ���� ������ �������� ������
			if (ans == 2 || flag == 0) {
				// ������������ �������� �� ����� ������ ��������
				int q;
				if (ans == 2){
				   cout << "����� ����� �� ������ ��������? (������� ����� �� 1 �� 8)." << endl;
				   cin >> q;
				}
				
				//������������ �������� �� �������
				int answ;
				
				//������ ������
				if (q == 1 || flag == 0){
                   �out << "\n1. ��� �� ������ �������������? \n1 - ���, 2 - ����" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<0));
				}
				
				//������ ������
				if (q == 2 || flag == 0){
                   �out << "\n2. ��� �������� ����� ��� ������? \n1 - �����, 2 - ������" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<1));
				}
				
				//������ ������
				if (q == 3 || flag == 0){
                   �out << "\n3. � ����� ����� ����� �� ����� ��������? \n1 - �����/����, 2 - ����/����" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<2));
				}
				}
				
				//�������� ������
				if (q == 4 || flag == 0){
                   �out << "\n4. ����� ���� �� ����������? \n1 - ������, 2 - �����" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<3));
				}
				
				//����� ������
				if (q == 5 || flag == 0){
                   �out << "\n5. �� ������� ������� �� �����? \n1 - ���, 2 - ��" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<4));
				}
				
				//������ ������
				if (q == 6 || flag == 0){
                   �out << "\n6. � ��� ���� ���������� ����� �� ��������� ���? \n1 - ���, 2 - ��" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<5));
				}
				
				//������� ������
				if (q == 7 || flag == 0){
                   �out << "\n7. �� ����������������? \n1 - ���, 2 - ��" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<6));
				}
				
				//������� ������
				if (q == 8 || flag == 0){
                   �out << "\n8.  �� ����� ����������� �����������? \n1 - ���, 2 - ��" << endl;
				   cin >> answ;
				   if (answ == 2) c = c | (1 << 0);
				   else c = c & (~(1<<0));
				}
				flag = 1;
			}
		}
		cout << endl;
		
		//���� ������������ ������ ���������� ������
		if (a == 2){
			//���� ������������ ����� ������� �� �������
			if (c != 0){
				cout << "\n1. ��� �� ������ �������������?" << endl;
				if ((c & (1<<0)) != 0) cout << "\n�� �������: ����" << endl;
				else cout << "\n�� �������: ���" << endl;
				cout << "\n2. ��� �������� ����� ��� ������?" << endl;
				if ((c & (1<<1)) == 0) cout << "\n�� �������: �����" << endl;
				else cout << "\n�� �������: ������" << endl;
				cout << "\n3. � ����� ����� ����� �� ����� ��������?" << endl;
				if ((c & (1<<2)) == 0) cout << "\n�� �������: �����/����" << endl;
				else cout << "\n�� �������: ����/����" << endl;
				cout << "\n4. ����� ���� �� ����������?" << endl;
				if ((c & (1<<3)) == 0) cout << "\n�� �������: ������" << endl;
				else cout << "\n�� �������: �����" << endl;
				cout << "\n5. �� ������� ������� �� �����?" << endl;
				if ((c & (1<<4)) == 0) cout << "\n�� �������: ���" << endl;
				else cout << "\n�� �������: ��" << endl;
				cout << "\n6. � ��� ���� ���������� ����� �� ��������� ���?" << endl;
				if ((c & (1<<5)) == 0) cout << "\n�� �������: ���" << endl;
				else cout << "\n�� �������: ��" << endl;
				cout << "\n7. �� ����������������?" << endl;
				if ((c & (1<<6)) == 0) cout << "\n�� �������: ���" << endl;
				else cout << "\n�� �������: ��" << endl;
				cout << "\n8.  �� ����� ����������� �����������?" << endl;
				if ((c & (1<<7)) == 0) cout << "\n�� �������: ���" << endl;
				else cout << "\n�� �������: ��" << endl;
				cout << endl;
			}
			//���� ������������ �� ������� �� �������
			else {
				cout << "\n�� �� �������� �� ������� �����." << endl;
				cout << endl;
			}
		}
		
	//�������� ����� ��� ������
	if (flag == 1){
		ofstream fout("data.txt");
		fout << c;
		fout.close();
	}
	//���� ������������ ������ ����� �� ���������
	} while(a != 8);
    system("pause");
    return 0;
}
