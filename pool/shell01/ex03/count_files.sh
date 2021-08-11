#!/bin/sh
find . | wc -l | cat -e | sed -E 's/ *//'
