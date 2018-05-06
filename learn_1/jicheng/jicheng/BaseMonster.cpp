#include "stdafx.h"
#include "BaseMonster.h"
#include <iostream>
#include <string>
#include <locale>

using namespace std;



BaseMonster::BaseMonster(string _name)
{
	this->name = _name;
	hp = 0;
}

BaseMonster::~BaseMonster()
{

}

void BaseMonster::Hert(BaseMonster * target)
{
	cout << this->name + "  受伤了  " << endl;
}

void BaseMonster::Attack(BaseMonster * target)
{
	cout << this->name + "   攻击了   " + target->name << endl;
}

void BaseMonster::Dead()
{
	cout << this->name + "   is   Dead"<<endl;
}

void BaseMonster::Born()
{
	printf("%s  is born \n", this->name.c_str());
}

string BaseMonster::GetName()
{
	return string(name);
}

