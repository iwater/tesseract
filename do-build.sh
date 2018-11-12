#!/bin/bash

build_leptonica() {
  emmake cmake -Hleptonica -Bleptonica/build -DCMAKE_INSTALL_PREFIX=leptonica/usr -DSTATIC=ON
  emmake make -C leptonica/build install
}

build_tesseract() {
  mkdir -p build
  cd build
  emmake cmake .. -DLeptonica_DIR=leptonica/build -DSTATIC=ON
  emmake make
  cd ..
}

main() {
  build_leptonica
  build_tesseract
}

main "$@"
