#!/bin/sh

./bootstrap
./configure --prefix=/usr --sysconfdir=/etc
make
sudo make install
