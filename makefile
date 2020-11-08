compile:
	g++ -g -std=c++17 src/*.cpp src/**/*.cpp -pthread -o build/main.out

pch:
	g++ -std=c++17 -x c++-header src/pch.h -o src/pch.h.pch

run:
	./build/main.out

debug:
	gdb build/main.out

check:
	valgrind ./build/main.out

clean:
	-rm -rf build/*