compile:
	g++ -g -std=c++17 src/*.cpp src/**/*.cpp -o build/main.out

run:
	./build/main.out

debug:
	gdb build/main.out

check:
	valgrind ./build/main.out

clean:
	-rm -rf build/*