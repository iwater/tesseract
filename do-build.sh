#!/bin/bash
#
#
#

# Build Leptonica
emmake cmake -Hleptonica -Bleptonica/build -DCMAKE_INSTALL_PREFIX=leptonica/usr
emmake make -C leptonica/build install

# Build Tesseract
mkdir build
cd build
emmake cmake .. -DLeptonica_DIR=leptonica/build
emmake make
