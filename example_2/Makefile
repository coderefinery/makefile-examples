.PHONY: clean all install

vpath %.c src

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

hello.exe: hello.o module.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm *.o hello.exe

install: hello.exe
	mkdir -p ./bin/
	cp hello.exe ./bin/

all: hello.exe
