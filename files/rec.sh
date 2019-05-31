#!/bin/bash

echo "" > result.txt

for i
do
	cat garbage | grep forloop | grep $i | awk -f rec.awk >> result.txt
done