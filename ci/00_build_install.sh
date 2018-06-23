#!/bin/bash -x
set -o errexit

target="powerpc-ppu"

prefix="$PWD/install"

config_options_binutils="
--with-sysroot=${prefix}/${target}
--disable-host-shared
--disable-multilib
--disable-nls
--enable-gold
--enable-ld=default
--enable-lto
--enable-plugins"

mkdir -p build_binutils
cd build_binutils

../binutils-gdb/configure --prefix="${prefix}" --target="${target}" ${config_options_binutils}
make -j$(nproc)
make install

cd ..
