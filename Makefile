all:
	gcc -g demos/src/radu.c -o demos/dst/radu &> /dev/null
	gcc -g demos/src/makechange.c -o demos/dst/makechange &> /dev/null

clean:
	rm -fr demos/dst/*
