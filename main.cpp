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
//Сколько весит файл
	ifstream file("data.txt");
	int size;
    file.seekg (0, std::ios::end);
    size = file.tellg();
    file.close();
    if (size > 0) flag = 1;
// Открытие файла и запись его в переменную c
	ifstream fin("data.txt");
	fin >> c;
	fin.close();
	
// Цикл для выбора операции
    do {
    	do {
    		cout << "Нажмите цифру 1 чтобы ответить на вопросы, цифру 2 чтобы посмотреть свои ответы и цифру 8 чтобы выйти из программы" << endl;
	    	cin >> a;
			if (cin.fail()) {
				cout << "\nНеизвестная операция." << endl;
				cout << endl;
				cin.clear();
				cin.ignore();
			}
			else {
				if (a != 2 & a != 1 & a != 8) {
				cout << "\nНеизвестная операция." << endl;
				cout << endl;
				}
			}
		}
		while ((a != 2 & a != 1 & a != 8) || cin.fail());
		
		// Если пользователь выбрал ответить
		if (a == 1){
			int ans;
			
			// Если пользователь ранее уже отвечал на вопросы
			if (flag != 0) {
				do {
					cout << "\nВы уже отвечали на вопросы ранее, хотите изменить ответы? 1 - нет, 2 - да" << endl;
					cin >> ans;
					if (cin.fail()) {
						cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
						cin.clear();
						cin.ignore();
					}
					else {
						if (ans < 1 || ans > 2) {
						cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
						cout << endl;
						}
					}
				}
				while((ans < 1 || ans > 2) || cin.fail());
			}
			
			//Если пользователь не отвечал на вопрос, либо выбрал ответить заново
			if (ans == 2 || flag == 0) {
				// Пользователь выбирает на какой вопрос ответить
				int q;
				if (ans == 2){
					do {
						cout << "Какой ответ вы хотите изменить? (Введите цифру от 1 до 8)." << endl;
						cin >> q;
						if (cin.fail()) {
						cout << "\nНеккоректные данные, введите цифру от 1 до 8." << endl;
						cout << endl;
						cin.clear();
						cin.ignore();
						}
						else {
							if (q < 1 || q > 8) {
							cout << "\nНеккоректные данные, введите цифру от 1 до 8." << endl;
							cout << endl;
							}
						}
					}
					while((q < 1 || q > 8) || cin.fail());
				}
				
				//Пользователь отвечает на вопросы
				int answ;
				
				//Первый вопрос
				if (q == 1 || flag == 0){
					do {
						cout << "\n1. Что вы больше предпочитаете? \n1 - чай, 2 - кофе" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 0);
					else c = c & (~(1<<0));
				}
				
				//Второй вопрос
				if (q == 2 || flag == 0){
					do {
						cout << "\n2. Вам нравятся кошки или собаки? \n1 - кошки, 2 - собаки" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
							cout << endl;
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 1);
					else c = c & (~(1<<1));
				}
				
				//Третий вопрос
				if (q == 3 || flag == 0){
					do {
						cout << "\n3. В какое время суток Вы более активный? \n1 - вечер/ночь, 2 - утро/день" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
							cout << endl;
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 2);
					else c = c & (~(1<<2));
				}
				
				//Четвёртый вопрос
				if (q == 4 || flag == 0){
					do {
						cout << "\n4. Какой цвет вы предпочтёте? \n1 - чёрный, 2 - белый" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
							cout << endl;
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 3);
					else c = c & (~(1<<3));
				}
				
				//Пятый вопрос
				if (q == 5 || flag == 0){
					do {
						cout << "\n5. Вы делаете зарядку по утрам? \n1 - нет, 2 - да" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
							cout << endl;
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 4);
					else c = c & (~(1<<4));
				}
				
				//Шестой вопрос
				if (q == 6 || flag == 0){
					do {
						cout << "\n6. У вас есть глобальные планы на следующий год? \n1 - нет, 2 - да" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
							cout << endl;
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 5);
					else c = c & (~(1<<5));
				}
				
				//Седьмой вопрос
				if (q == 7 || flag == 0){
					do {
						cout << "\n7. Вы совершеннолетний? \n1 - нет, 2 - да" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
							cout << endl;
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 6);
					else c = c & (~(1<<6));
				}
				
				//Восьмой вопрос
				if (q == 8 || flag == 0){
					do {
						cout << "\n8.  Вы часто пользуетесь компьютером? \n1 - нет, 2 - да" << endl;
						cin >> answ;
						if (cin.fail()) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cin.clear();
							cin.ignore();
							cout << endl;
						}
						else {
							if (answ < 1 || answ > 2) {
							cout << "\nНеккоректные данные, введите цифру 1 либо цифру 2." << endl;
							cout << endl;
							}
						}
					}
					while((answ < 1 || answ > 2) || cin.fail());
					if (answ == 2) c = c | (1 << 7);
					else c = c & (~(1<<7));
				}
				flag = 1;
			}
		}
		cout << endl;
		
		//Если пользователь выбрал посмотреть ответы
		if (a == 2){
			//Если пользователь ранее отвечал на вопросы
			if (c != 0){
				cout << "\n1. Что вы больше предпочитаете?" << endl;
				if ((c & (1<<0)) != 0) cout << "\nВы выбрали: кофе" << endl;
				else cout << "\nВы выбрали: чай" << endl;
				cout << "\n2. Вам нравятся кошки или собаки?" << endl;
				if ((c & (1<<1)) == 0) cout << "\nВы выбрали: кошки" << endl;
				else cout << "\nВы выбрали: собаки" << endl;
				cout << "\n3. В какое время суток Вы более активный?" << endl;
				if ((c & (1<<2)) == 0) cout << "\nВы выбрали: вечер/ночь" << endl;
				else cout << "\nВы выбрали: утро/день" << endl;
				cout << "\n4. Какой цвет вы предпочтёте?" << endl;
				if ((c & (1<<3)) == 0) cout << "\nВы выбрали: чёрный" << endl;
				else cout << "\nВы выбрали: белый" << endl;
				cout << "\n5. Вы делаете зарядку по утрам?" << endl;
				if ((c & (1<<4)) == 0) cout << "\nВы выбрали: нет" << endl;
				else cout << "\nВы выбрали: да" << endl;
				cout << "\n6. У вас есть глобальные планы на следующий год?" << endl;
				if ((c & (1<<5)) == 0) cout << "\nВы выбрали: нет" << endl;
				else cout << "\nВы выбрали: да" << endl;
				cout << "\n7. Вы совершеннолетний?" << endl;
				if ((c & (1<<6)) == 0) cout << "\nВы выбрали: нет" << endl;
				else cout << "\nВы выбрали: да" << endl;
				cout << "\n8.  Вы часто пользуетесь компьютером?" << endl;
				if ((c & (1<<7)) == 0) cout << "\nВы выбрали: нет" << endl;
				else cout << "\nВы выбрали: да" << endl;
				cout << endl;
			}
			//Если пользователь не отвечал на вопросы
			else {
				cout << "\nВы не отвечали на вопросы ранее." << endl;
				cout << endl;
			}
		}
		
	//Открытие файла для записи
	if (flag == 1){
		ofstream fout("data.txt");
		fout << c;
		fout.close();
	}
	//Если пользователь выбрал выйти из программы
	} while(a != 8);
    system("pause");
    return 0;
}
