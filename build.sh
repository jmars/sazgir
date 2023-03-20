#!/usr/bin/env sh
git submodule update --init
pushd cosmopolitan
./build/bootstrap/make.com -j m=optlinux
popd
PATH=$PWD/root/bin:$PATH
./root/bin/samurai