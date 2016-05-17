Hugeint.o:Hugeint.cpp Hugeint.h
	g++ -c Hugeint.cpp
main.o:main.cpp Hugeint.h
	g++ -c main.cpp
lab5:main.o Hugeint.o
	g++ -o lab5 main.o Hugeint.o
clean:
	rm main.o Hugeint.o
