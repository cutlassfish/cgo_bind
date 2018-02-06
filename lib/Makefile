
TARGET=libfoo.a
ARFLAG += -r

SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:.cpp=.o)

.PHONY: all
.PHONY: clean

all: $(TARGET)

$(TARGET): $(OBJS)
	ar $(ARFLAG) $@ $?


include $(subst .cpp,.d,$(SRCS))

%.d: %.cpp
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

clean:
	-rm -f *.o *.d *.a
