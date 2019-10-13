CXX = g++ -std=c++11

CFLAGS = -Wall -Wextra -Wshadow -Wcast-qual -Wcast-align -Wwrite-strings -O2

CPPFLAGS = -DNDEBUG

INCLUDES =

LDFLAGS = -lm

DEBUG = #-ggdb

TARGETS = test-rrr

all: $(TARGETS)

test-rrr: test-rrr.o rrr.o
	$(CXX) $(DEBUG) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(DEBUG) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -c $<

lib: librrr.cpp rrr.cpp
	$(CXX) -shared -fPIC $(CFLAGS) rrr.cpp librrr.cpp -o librrr.so

clean:
	-$(RM) -f *.o $(TARGETS) >/dev/null 2>&1

remake:
	$(MAKE) clean && clear && $(MAKE) all
