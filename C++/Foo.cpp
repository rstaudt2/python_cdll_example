#include "stdafx.h"
#include "foo.h"

Foo::Foo()
{
}

Foo::~Foo()
{
}

void Foo::bar(const char * name, char * buf, int buf_size){
	std::string strHello = "Hello ";
	strHello.append(name);
	strHello.c_str();

	strcpy_s(buf, buf_size, strHello.c_str());
}
