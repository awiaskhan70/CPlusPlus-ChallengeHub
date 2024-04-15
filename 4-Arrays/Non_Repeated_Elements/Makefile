CC = g++
CFLAGS = -std=c++11 -Wall

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = non_repeated_elements

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
