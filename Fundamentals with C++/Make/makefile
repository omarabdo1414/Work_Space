CC = g++
file := first.cpp main.cpp
DEPS = first.h
objects := main.o first.o

CFLAG = -pthread

.PHONY: build 

%.o: %.cpp
	@$(CC) -c -o $@ $< $(CFLAG)

build: $(objects)
	@$(CC) -o main $(objects)

.PHONY: run
run:
	@./main
	@python code.py

.PHONY: clean

clean:
	del *.o




#Function
# define function_name
# 	commands
# endef

# define function_name
# 	@echo "Entring function"
# 	@echo "0 is $0"
# 	@echo "0 is $1"
# 	@echo "0 is $2"
# 	@echo "0 is $3"
# 	@echo "Exit from the function"
# endef

# x:=	omar
# target:
# 	$(call function_name, $(x), abdo)

# make file has a built in functions

#loops in makefile
#first method
LIST = one two three
# loop:
# 	@for i in $(LIST); do; \
# 		echo $$i; \
# 	done

#Second method
# list = 
loop2:
	@echo $(foreach i, $(LIST), "The i now is: $(i)")

###################################################
#Conditions
file := sec.cpp
ifeq '$(file)' 'sec.cpp'
cond1:
	@echo "True"
endif

cond2:
ifeq '$(file)' 'sec.cpp'
	@echo "True"
endif

cond3:
ifdef file
	echo "defined"
endif
