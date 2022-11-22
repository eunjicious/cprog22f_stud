SRCS = sum.c diff.c main.c
OBJS = $(SRCS: .c = .o)
TARG = calc

CC = gcc
OPTS = -Wall -O

all: $(TARG)

$(TARG) : $(SRCS) 
	$(CC) -o $(TARG) $(OBJS) 

%.o : %.c
	$(CC) $(OPTS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARG)
