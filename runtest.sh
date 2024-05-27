#!/bin/bash

git clone https://github.com/alelievr/libft-unit-test.git
git clone https://github.com/0x050f/libft-war-machine.git

bash ./libft-war-machine/grademe.sh
cd ./libft-unit-test/
make fclean > /dev/null
make > /dev/null
./run_test
cd ../
cd libft
make fclean > /dev/null

