#!/bin/bash

build_leptonica() {
  cd leptonica
  sh build-js.sh
  cd ..
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
