#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	cout << "uniapp-tool" << endl << "This tool can help you use uniapp in the vue-cli environment faster" << "By Leafdeveloper" <<endl;
	cout << "" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "��ȷ�����Ѿ���װ��nodejs��npm��" << endl; //Please make sure you have installed nodejs and npm!
	cout << "" << endl;
	cout << "*****uniapp��Ҫ����ʹ��ǰ��װ*****" << endl; //*****Install Before Using Uniapp*****
	cout << "" << endl;
	cout << "1.ȫ�ְ�װvue-cli����Ҫ������" << endl;  //1.Install vue-cli globally (required condition)
	cout << "2.ȫ������Ϊ�Ա�Դ�������װ�ٶȹ�������ѡ��" << endl;
	cout << "" << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	int options;
	//options = _getch(); //It is not possible to compile with g++ here! (I don't like msvc!!!),If you want to compile with g++, you need to write"options = getch();"
	cin >> options;

	if (options == 1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "��װ�ٶ�ȡ����������ٺ����npmԴ���ã�" << endl; //Installation speed depends on your network speed and npm source!
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("npm install -g @vue/cli");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "��װ����ɣ�" << endl; //The installation is complete!
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}

	if (options == 2){
		system("npm config set registry https://registry.npm.taobao.org/");
		cout << "����һ������ȷ���Ƿ��Ѿ��л�" << endl;
		system("npm config get registry");
	}

	system("pause");
	return 0;
}