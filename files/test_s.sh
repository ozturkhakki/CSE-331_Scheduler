#!/bin/bash

for (( i=0; i<$2; i++ ))
do
	sudo -H -b -u $1 /home/$1/forloop
done