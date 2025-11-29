CC = gcc
CFLAGS = -Iinc -I../../Validation/inc

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

TARGET_Dynamic = $(BIN_DIR)/binary

DYNAMIC_LIB_DIR = ../../Validation/dynamiclib
DYNAMIC_LIB = -L$(DYNAMIC_LIB_DIR) -lvalidate

all : $(TARGET_Dynamic) 

$(TARGET_Dynamic): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(DYNAMIC_LIB) -Wl,-rpath=$(DYNAMIC_LIB_DIR) -o $@

$(SRC_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(SRC_DIR)/*.o $(TARGET_Dynamic) 
