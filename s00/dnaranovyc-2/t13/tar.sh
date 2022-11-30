#!/bin/bash
rm -r $2
if [ "$1"="-c" ]; 
then
    tar -zcvf $2 $@
fi
if [ "$1"="-e" ]; 
then
    tar -xvf $2
fi
