OBJ = main.o menu.o intro.o screen.o triangle.o circle.o rectangle.o square.o line.o inter.o 
APPNAME = figure.a
TAR = figure.tar

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c
	gcc -c -o $@ $<

clean:
	rm $(OBJ) $(APPNAME)
archive :
	tar cf $(TAR) *



