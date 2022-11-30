#!/bin/bash
grep -w -i "redpill" $1 | sed 's/redpill/bluepill/i'
