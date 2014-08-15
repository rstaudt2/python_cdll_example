#pragma once
#include <iostream>

class Foo{
public:
	Foo::Foo();
	Foo::~Foo();
	void bar(const char * name, char * buf, int buf_size);
};

