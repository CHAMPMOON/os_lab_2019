#!/bin/sh
summ=0
count=0
for param in "$@"
do
summ=$(( $summ + $param))
count=$(( $count + 1))
done
echo arguments - $count
echo average - $(( $summ/$count))
