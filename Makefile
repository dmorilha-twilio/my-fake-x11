libX11.so.6: my-fake-x11.c
	${CC} -std=c11 -shared -o $@ $<;
