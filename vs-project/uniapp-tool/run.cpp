#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main() {
	cout << "uniapp-tool" << endl << "This tool can help you use uniapp in the vue-cli environment faster" << endl << "By Leafdeveloper" << endl << "" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "��ȷ������ʹ��ǰ�Ѿ���װ��nodejs��npm��vue-cli�Լ��Ѿ��������uniapp��Ŀ" << endl;
	cout << "��ע��ʹ�ô˳���ʱ�벻Ҫ����Ŀ��Ŀ¼�����У���������Ŀ��һ��Ŀ¼������" << endl;
	cout << "һ����˵�������Ŀ�ļ��д��������ƶ��С�my-project�����뱣�ָ���Ŀ����" << endl;
	cout << "" << endl;
	cout << "*****uniapp������Ŀ*****" << endl;
	cout << "" << endl;
	cout << "1.����" << endl;
	cout << "2.����Ϊ��h5" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	int options;
	cin >> options;

	if (options == 1) {
		system("cd my-project & npm run serve ");
	}

	if (options == 2) {
		system("cd my-project & npm run build:h5");
	}
	system("pause");
	return 0;
}