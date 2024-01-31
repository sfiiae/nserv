test: Log.o LogTest.o
	g++ -o $@ $^

Log.o: src/Log.cc
	g++ -c $< -Isrc

LogTest.o: tests/LogTest.cc
	g++ -c $< -Isrc

