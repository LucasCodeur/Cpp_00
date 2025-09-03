#!/bin/bash

{
    for i in {1..8}; do
        echo "ADD"
        sleep 0.2
        echo "c"
        sleep 0.2
        echo "c"
        sleep 0.2
        echo "c"
        sleep 0.2
        echo "c"
        sleep 0.2
        echo "c"
        sleep 0.5  # Plus long délai après chaque contact
    done
} | cat - | ./phonebook
