CLN_F = client.c helper.c
SRV_F = server.c helper.c
SRV_O = $(SRV_F:.c=.o)
CLN_O = $(CLN_F:.c=.o)
CLN = client
SRV = server

CLNB_F = client_bonus.c helper.c
SRVB_F = server_bonus.c helper.c
SRVB_O = $(SRVB_F:.c=.o)
CLNB_O = $(CLNB_F:.c=.o)
CLNB = client_bonus
SRVB = server_bonus

CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(CLN) $(SRV)

$(CLN): $(CLN_O)
	$(CC) $(FLAGS) $(CLN_O) -o $(CLN)
$(SRV): $(SRV_O)
	$(CC) $(FLAGS) $(SRV_O) -o $(SRV)

bonus: $(CLNB) $(SRVB)

$(CLNB): $(CLNB_O)
	$(CC) $(FLAGS) $(CLNB_O) -o $(CLNB)
$(SRVB): $(SRVB_O)
	$(CC) $(FLAGS) $(SRVB_O) -o $(SRVB)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	rm -f $(CLN_O) $(SRV_O) $(CLNB_O) $(SRVB_O)

fclean: clean
	rm -f $(CLN) $(SRV) $(CLNB) $(SRVB)

re: fclean all

.PHONY: all clean fclean re bonus