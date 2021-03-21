CC = gcc

SRCS = main.c

TARGET = Integer_GBD

BUILDDIR = buildDir

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))
# -g flag 는 디버그 정보를 포함하여 빌드 한다는 flag
build: $(COBJS)
	$(CC) -g -o $(BUILDDIR)/$(TARGET) $^

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) -g -o $@ -c $<

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .c .o