#!/bin/bash


Add_2Numbers()
{
    local num1=$1
    local num2=$2
    local sum=$((num1 + num2))
    echo "The sum of $num1 and $num2 is $sum"

    until [ $sum -eq 0 ]
    do
        sum=$((sum - 1))
        echo "The new sum = $sum"
    done
}

echo "Please Enter the first number"
read x

echo "Please Enter the second number"
read y


Add_2Numbers $x $y
