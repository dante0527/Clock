main.o:
	g++ -Wall -o main.o *.cpp

run: main.o
	./main.o

clean:
	rm main.o
