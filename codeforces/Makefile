CXX = clang++
CFLAGS = -std=c++23

%: %.cpp
	$(CXX) $(CFLAGS) $< -o /tmp/$@
	/tmp/$@
	rm -f /tmp/$@
