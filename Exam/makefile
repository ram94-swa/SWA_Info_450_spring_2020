CC=g++
CFAGS=-g

bank:Main.o Account.o Checking.o CreditCard.o Savings.o
	$(CC) -o bank Main.o Account.o Checking.o CreditCard.o Savings.o

Main.o:Main.cpp
	$(CC) -c Main.cpp

Account.o:Account.cpp
	$(CC) -c Account.cpp

Checking.o:Checking.cpp
	$(CC) -c Checking.cpp

CreditCard.o:CreditCard.cpp
	$(CC) -c CreditCard.cpp

Savings.o:Savings.cpp
	$(CC) -c Savings.cpp

clean:
	rm *.o