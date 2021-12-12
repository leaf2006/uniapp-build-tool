#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main() {
	cout << "uniapp-tool" << endl << "This tool can help you use uniapp in the vue-cli environment faster" << endl << "By Leafdeveloper" << endl << "" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "请确认你在使用前已经安装了nodejs，npm和vue-cli以及已经创建完成uniapp项目" << endl;
	cout << "请注意使用此程序时请不要在项目根目录中运行，保持在项目上一级目录中运行" << endl;
	cout << "一般来说，你的项目文件夹创建后名称都叫“my-project”，请保持该项目名称" << endl;
	cout << "" << endl;
	cout << "*****uniapp运行项目*****" << endl;
	cout << "" << endl;
	cout << "1.运行" << endl;
	cout << "2.发布为：h5" << endl;
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