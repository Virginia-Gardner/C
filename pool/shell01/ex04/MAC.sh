#!/bin/sh
ifconfig | grep 'ether ' | sed -E 's/	ether //' | sed -E 's/ //'
