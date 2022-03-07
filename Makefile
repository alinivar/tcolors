
ccflags = -g -Wall -m64 -O2 -Iinc

ldflags = -lm

src = $(wildcard src/*.c)
inc = $(wildcard inc/*.h)

obj = $(src:.c=.o)

all: $(obj)

%.o: %.c $(inc)
	gcc -c $(ccflags) $< -o $@

example: $(obj) example/example.c
	gcc $(ccflags) $(obj) example/example.c $(ldflags) -o example.exe
	./example.exe

clean:
	rm $(obj) *.exe
