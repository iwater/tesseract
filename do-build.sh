#!/bin/bash

build_leptonica() {
  emmake cmake -Hleptonica -Bleptonica/build -DCMAKE_INSTALL_PREFIX=leptonica/usr
  emmake make -C leptonica/build install
}

build_tesseract() {
  mkdir build
  cd build
  emmake cmake .. -DLeptonica_DIR=leptonica/build
  emmake make
}

main() {
  build_leptonica
  build_tesseract
}

main "$@"
