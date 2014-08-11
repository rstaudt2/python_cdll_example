// sample_dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Foo.h"

extern "C" {
	__declspec(dllexport) Foo* Foo_new(){ return new Foo(); }
	__declspec(dllexport) const char * Foo_bar(Foo* foo, const char * name){ return foo->bar(name); }
}
