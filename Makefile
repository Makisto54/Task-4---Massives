CC := gcc
CFLAGS := -c

TASK_1 := output_matrix
TASK_2 := reverse_massive
TASK_3 := triangle_matrix
TASK_4 := snail

.PHONY: all $(TASK_1) $(TASK_2) $(TASK_3) $(TASK_4) clean

all: $(TASK_1) $(TASK_2) $(TASK_3) $(TASK_4) 

debug: CFLAGS += -g 
debug: all

$(TASK_1): $(TASK_1).c
	$(CC) $(CFLAGS) $(TASK_1).c -o  $(TASK_1) 

$(TASK_2): $(TASK_2).c
	$(CC) $(CFLAGS) $(TASK_2).c -o $(TASK_2)

$(TASK_3): $(TASK_3).c
	$(CC) $(CFLAGS) $(TASK_3).c -o $(TASK_3) 

$(TASK_4): $(TASK_4).c
	$(CC) $(CFLAGS) $(TASK_4).c -o $(TASK_4) 

clean:
	rm -rf $(TASK_1) $(TASK_2) $(TASK_3) $(TASK_4) 
