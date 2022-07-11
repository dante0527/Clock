main:
	g++ -o main.o *.cpp

run: main
	./main.o

clean:
	rm main.o
