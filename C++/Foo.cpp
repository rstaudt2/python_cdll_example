#include "stdafx.h"
#include "foo.h"

#define BUF_SIZE 255

Foo::Foo()
{
}

Foo::~Foo()
{
}

const char * Foo::bar(const char * name){
	char * buf = new char[BUF_SIZE]();
	std::string strHello = "Hello ";
	strHello.append(name);
	strHello.c_str();

	strcpy_s(buf, BUF_SIZE, strHello.c_str());

	return buf;
}
