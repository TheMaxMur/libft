#!/bin/bash

bash /home/maxmur/Documents/code/git/libft-unit-test/libft-war-machine/grademe.sh
cd /home/maxmur/Documents/code/git/libft-unit-test/libft-unit-test/
make fclean > /dev/null
make > /dev/null
./run_test
cd ../
cd libft
make fclean > /dev/null
