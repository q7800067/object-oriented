#pragma once 
#include<iostream>
using namespace std;
#include "worker.h"

//员工类
class employee :public worker
{
public:

	//构造函数
	employee(int id, string name, int did);

	//显示个人信息
	virtual void showinfo();

	//获取职工岗位名称
	virtual string getdeptname();
};