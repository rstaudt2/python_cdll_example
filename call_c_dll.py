from ctypes import cdll, c_char_p, create_string_buffer

BUFFER_SIZE = 1024

dll = cdll.LoadLibrary('C++/bin/sample_dll.dll')

class Foo(object):
    def __init__(self):
        self.obj = dll.Foo_new()

    def bar(self, name, buf):
    	dll.Foo_bar(self.obj, c_char_p(name), buf, BUFFER_SIZE)

if __name__ == '__main__':

	f = Foo()

	buf = create_string_buffer(BUFFER_SIZE)

	f.bar("Guy", buf)

	print buf.value