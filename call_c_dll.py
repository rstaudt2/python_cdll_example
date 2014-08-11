from ctypes import cdll, c_char_p
dll = cdll.LoadLibrary('C++/bin/sample_dll.dll')

class Foo(object):
    def __init__(self):
        self.obj = dll.Foo_new()

    def bar(self, name):
    	result = dll.Foo_bar(self.obj, c_char_p(name))
        return c_char_p(result).value

if __name__ == '__main__':

	f = Foo()
	print f.bar("Guy")