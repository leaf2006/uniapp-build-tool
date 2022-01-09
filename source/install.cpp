#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	cout << "uniapp-tool" << endl << "This tool can help you use uniapp in the vue-cli environment faster" << "By Leafdeveloper" <<endl;
	cout << "" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "请确认你已经安装了nodejs和npm！" << endl; //Please make sure you have installed nodejs and npm!
	cout << "" << endl;
	cout << "*****uniapp必要部件使用前安装*****" << endl; //*****Install Before Using Uniapp*****
	cout << "" << endl;
	cout << "1.全局安装vue-cli（必要条件）" << endl;  //1.Install vue-cli globally (required condition)
	cout << "2.全局设置为淘宝源（如果安装速度过慢可以选择）" << endl;
	cout << "" << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	int options;
	//options = _getch(); //It is not possible to compile with g++ here! (I don't like msvc!!!),If you want to compile with g++, you need to write"options = getch();"
	cin >> options;

	if (options == 1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "安装速度取决于你的网速和你的npm源设置！" << endl; //Installation speed depends on your network speed and npm source!
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("npm install -g @vue/cli");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "安装已完成！" << endl; //The installation is complete!
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}

	if (options == 2){
		system("npm config set registry https://registry.npm.taobao.org/");
		cout << "请检查一下数据确认是否已经切换" << endl;
		system("npm config get registry");
	}

	system("pause");
	return 0;
}