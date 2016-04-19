BINFOLDER := ./bin/
INCFOLDER := ./include/
SRCFOLDER := ./source/
OBJFOLDER := ./obj/

COMPILER := gcc
FLAGS := -Wall -ansi -I$(INCFOLDER)

SRCFILES := $(wildcard source/*.c)

all:	 $(SRCFILES:source/%.c=obj/%.o)
		$(COMPILER) $(FLAGS) $(OBJFOLDER)*.o -o $(BINFOLDER)corrida

obj/%.o:	source/%.c
				$(COMPILER) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJFOLDER)*.o

run:
	$(BINFOLDER)corrida

