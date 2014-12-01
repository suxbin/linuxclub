#!/bin/bash

for i in {0..255}; do 
    ping -b -c 1 -W 500 10.0.2.$i | grep from; 
done
