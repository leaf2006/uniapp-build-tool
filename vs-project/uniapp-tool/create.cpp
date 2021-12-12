#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	cout << "uniapp-tool" << endl << "This tool can help you use uniapp in the vue-cli environment faster" << endl << "By Leafdeveloper" << endl << "" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "请确认你在使用前已经安装了nodejs，npm和vue-cli" << endl;  //Please make sure you have installed nodejs, npm and vue-cli before using
	cout << "" << endl;

	cout << "*****uniapp创建项目*****" << endl;
	cout << "" << endl;
	cout << "1.创建正式版（对应HBuilderX最新正式版）" << endl;
	cout << "2.创建alpha版（对应HBuilderX最新alpha版）" << endl;
	cout << "3.创建Vue3/Vite版：以javascript 开发的工程" << endl;
	cout << "4.创建Vue3/Vite版：以typescript 开发的工程" << endl;
	int options;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cin >> options;

	if (options == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "由于模板项目存放于 Github，由于国内网络环境问题，可能下载失败，建议科学上网" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("vue create -p dcloudio/uni-preset-vue my-project");
	}

	if (options == 2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "由于模板项目存放于 Github，由于国内网络环境问题，可能下载失败，建议科学上网" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("vue create -p dcloudio/uni-preset-vue#alpha my-alpha-project");
	}

	if (options == 3) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "由于模板项目存放于 Github，由于国内网络环境问题，可能下载失败，建议科学上网" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("npx degit dcloudio/uni-preset-vue#vite my-vue3-project");
	}

	if (options == 4) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "由于模板项目存放于 Github，由于国内网络环境问题，可能下载失败，建议科学上网" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		system("npx degit dcloudio/uni-preset-vue#vite-ts my-vue3-project");
	}

	system("pause");
	return 0;
}