all: triple_pin triple_pin_debug
	./triple_pin_debug

triple_pin: main.c
	gcc -o $@ $<

triple_pin_debug: main.c
	gcc -o $@ -DDEBUG $<

clean:
	rm -f triple_pin
