all : chain  chain_Fprintf chain_Loop chain_Nchars chain_Sleep chain_Wait

chain : simplechain.c
	gcc -o chain simplechain.c

chain_Fprintf : simplechain_Fprintf.c
	gcc -o chain_Fprintf simplechain_Fprintf.c

chain_Loop : simplechain_Loop.c
	gcc -o chain_Loop simplechain_Loop.c

chain_Nchars : simplechain_Nchars.c
	gcc -o chain_Nchars simplechain_Nchars.c

chain_Sleep : simplechain_Sleep.c
	gcc -o chain_Sleep simplechain_Sleep.c

chain_Wait : simplechain_Wait.c
	gcc -o chain_Wait simplechain_Wait.c

clean :
	rm chain
	rm chain_Fprintf
	rm chain_Loop
	rm chain_Nchars
	rm chain_Sleep
	rm chain_Wait
	