#!/bin/bash

bash ./libft-war-machine/grademe.sh
cd ./libft-unit-test/
make fclean > /dev/null
make > /dev/null
./run_test
cd ../
cd libft
make fclean > /dev/null
