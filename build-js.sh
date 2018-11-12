#!/bin/bash

build_leptonica() {
  emmake cmake -Hleptonica -Bleptonica/build -DCMAKE_INSTALL_PREFIX=leptonica/usr
  emmake make -C leptonica/build install -j4
}

build_tesseract() {
  mkdir -p build
  cd build
  emmake cmake .. -DLeptonica_DIR=leptonica/build
  emmake make -j4
  cd ..
}

main() {
  build_leptonica
  build_tesseract
}

main "$@"
