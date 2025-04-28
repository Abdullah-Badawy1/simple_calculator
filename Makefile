CC       = gcc
CFLAGS   = -Wall -g
TARGET   = calculator

all: $(TARGET)

$(TARGET): calculator.c
	$(CC) $(CFLAGS) calculator.c -o $(TARGET)

clean:
	rm -f $(TARGET)
