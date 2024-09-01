#!/bin/bash

files=($(ls dip))

for file in ${files[@]}; do
    rm dip/$file
done

rmdir dip
