
ccflags = -g -Wall -m64 -O2 -Iinclude

ldflags = -lm

src = $(wildcard src/*.c)
inc = $(wildcard include/*.h)

obj = $(src:.c=.o)

all: $(obj)

%.o: %.c $(inc)
	gcc -c $(ccflags) $< -o $@

clean:
	rm $(obj) *.exe
