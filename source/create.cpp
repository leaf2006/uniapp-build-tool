#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	cout << "uniapp-tool" << endl << "This tool can help you use uniapp in the vue-cli environment faster" << endl << "By Leafdeveloper" << endl << "" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "��ȷ������ʹ��ǰ�Ѿ���װ��nodejs��npm��vue-cli" << endl;  //Please make sure you have installed nodejs, npm and vue-cli before using
	cout << "" << endl;

	cout << "*****uniapp������Ŀ*****" << endl;
	cout << "" << endl;
	cout << "1.������ʽ�棨��ӦHBuilderX������ʽ�棩" << endl;
	cout << "2.����alpha�棨��ӦHBuilderX����alpha�棩" << endl;
	cout << "3.����Vue3/Vite�棺��javascript �����Ĺ���" << endl;
	cout << "4.����Vue3/Vite�棺��typescript �����Ĺ���" << endl;
	int options;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cin >> options;

	if (options == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "����ģ����Ŀ����� Github�����ڹ������绷�����⣬��������ʧ�ܣ������ѧ����" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("vue create -p dcloudio/uni-preset-vue my-project");
	}

	if (options == 2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "����ģ����Ŀ����� Github�����ڹ������绷�����⣬��������ʧ�ܣ������ѧ����" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("vue create -p dcloudio/uni-preset-vue#alpha my-alpha-project");
	}

	if (options == 3) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "����ģ����Ŀ����� Github�����ڹ������绷�����⣬��������ʧ�ܣ������ѧ����" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("npx degit dcloudio/uni-preset-vue#vite my-vue3-project");
	}

	if (options == 4) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "����ģ����Ŀ����� Github�����ڹ������绷�����⣬��������ʧ�ܣ������ѧ����" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("npx degit dcloudio/uni-preset-vue#vite-ts my-vue3-project");
	}

	system("pause");
	return 0;
}