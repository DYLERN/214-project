compile:
	clang++ -g -std=c++17 *.cpp **/*.cpp -o build/main.out

run:
	./build/main.out

debug:
	lldb build/main.out

check:
	valgrind ./build/main.out

clean:
	-rm -rf build/*