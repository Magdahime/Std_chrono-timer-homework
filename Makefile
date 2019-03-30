CFLAGS = -Wall -g -Iinclude -Isrc
CC = g++
INCLUDE = include
SRC = src
BUILD = build
BIN = bin

$(BIN)/TIMER: $(BUILD)/Main.o $(BUILD)/Functions.o $(BUILD)/Timer.o
	$(CC) $(CFLAGS)  $(BUILD)/Main.o $(BUILD)/Functions.o $(BUILD)/Timer.o -o $(BIN)/TIMER.o

$(BUILD)/Main.o: $(SRC)/Main.cpp $(INCLUDE)/Ttimer.hpp $(INCLUDE)/Functions.hpp $(INCLUDE)/Main.hpp
	$(CC) $(CFLAGS) -c $(SRC)/Main.cpp -o $(BUILD)/Main.o

$(BUILD)/Functions.o: $(SRC)/Functions.cpp $(INCLUDE)/Functions.hpp $(INCLUDE)/Ttimer.hpp $(INCLUDE)/Main.hpp
	$(CC) $(CFLAGS) -c $(SRC)/Functions.cpp -o $(BUILD)/Functions.o

$(BUILD)/Timer.o: $(SRC)/Ttimer.cpp $(INCLUDE)/Ttimer.hpp $(INCLUDE)/Functions.hpp $(INCLUDE)/Main.hpp
	$(CC) $(CFLAGS) -c $(SRC)/Ttimer.cpp -o $(BUILD)/Timer.o

clean:
	rm -f $(BUILD)/*.o
	rm -f $(BIN)/TIMER.o


