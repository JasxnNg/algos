CXX = clang++
CFLAGS = -std=c++23 -Wall -Wextra -Wuninitialized

%: %.cpp
	$(CXX) $(CFLAGS) $< -o /tmp/$@
	/tmp/$@
	rm -f /tmp/$@
