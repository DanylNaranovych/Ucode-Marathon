#!/bin/bash
rm $1
touch $1
echo "alias ga='git add'" >> $1
echo "alias gcmsg='git commit -m'" >> $1
echo "alias gp='git push'" >> $1
