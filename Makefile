
CFLAGS := -O2
WARNFLAGS := -Wall -Wextra


all: shifter
.PHONY: all

develop: all
develop: CFLAGS := -g -O0 # -fsanitize=address -fsanitize=undefined
.PHONY: develop

clean:
	rm -f shifter
.PHONY: clean


shifter: shifter.c
	$(CC) $(CFLAGS) $(WARNFLAGS) -o $@ $<
