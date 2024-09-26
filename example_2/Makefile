.PHONY: clean all install

vpath %.c src

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

hello.exe: hello.o module.o

clean:
	rm *.o hello.exe

install: hello
	mkdir -p ./bin/
	cp hello ./bin/

all: hello.exe
