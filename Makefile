
ccflags = -g -Wall -m64 -O2 -Iinc

ldflags = -lm

src = $(wildcard src/*.c)
inc = $(wildcard inc/*.h)

obj = $(src:.c=.o)

all: $(obj)

%.o: %.c $(inc)
	gcc -c $(ccflags) $< -o $@

clean:
	rm $(obj) *.exe
