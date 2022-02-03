#CS4760
#Anthony Nguyen
#01/25/2022

This project was created to perform several experiments on code provided in out textbook, Unix Systems Programming (Robbins/Robbins).
Exercise 3.8 (pg 87) expands on the process chain of Program 3.1 in the book. 

This project contains the following files:
-README
-Makefile
-Observations
-simplechain.c
-simpleChain_Fprintf.c
-simplechain_Loop.c
-simplechain_Nchars.c
-simplechain_Sleep.c
-cimplechain_Wait.c

You must first create the executable program if trying to use this code. Use the 'make' command to create the 'chain' executable.

Using following command:

-p
Number of processes,Required to run chain;  the p argument takes an integer, and determines the total number of processes to be run.

Example: ./chain -p 4

-i -s
Required to run chain_Loop; i's argument determines the number of iterations in the loop, and s's argument determines the Time to sleep in each iteration. Both options are required

Example : ./chain_Loop -p 4 -i 3 -s 8

-c
Required to run chain_Nchars; c's argument determines the number of characters read into the buffer

Example: ./chain_Nchars -p 4 -c 6


Unix System Calls and Library Functions

For this project. 
- I have completed all steps 1 through 8, and I have recorded everything that I have observed in the file name Observations which I have attached in this project1. You can also see my answer from that file.
- I did the makefile  by my way and I find it easier for me to understand than following the way in the school pdf file.
- I have divided the program into 3 parts including: main program, program run with loop and sleep, and program running with chain_Nchair. If I had more time, I would find a way to combine them into a joint program later.
