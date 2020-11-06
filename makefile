compile:
	clang++ -g -std=c++17 -include-pch build/pch.h.pch src/*.cpp src/**/*.cpp -o build/main.out

pch:
	clang++ -std=c++17 -x c++-header src/pch.h -o build/pch.h.pch

run:
	./build/main.out

debug:
	lldb build/main.out

check:
	valgrind ./build/main.out

clean:
	-rm -rf build/*