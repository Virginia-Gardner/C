#!/bin/sh
find . -name '*.sh' | sed -E 's/\.\/.*\///' | sed -E 's/.sh/$/'
