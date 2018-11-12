FROM trzeci/emscripten:sdk-tag-1.38.16-64bit

RUN rm -rf /opt/cmake /usr/local/bin/cmake /usr/local/bin/ctest
RUN echo "\n## Installing CMake" \
&&	wget https://cmake.org/files/v3.12/cmake-3.12.4-Linux-x86_64.sh -q \
&&	mkdir /opt/cmake \
&&	printf "y\nn\n" | sh cmake-3.12.4-Linux-x86_64.sh --prefix=/opt/cmake > /dev/null \
&&		rm -fr cmake*.sh /opt/cmake/doc \
&&		rm -fr /opt/cmake/bin/cmake-gui \
&&		rm -fr /opt/cmake/bin/ccmake \
&&		rm -fr /opt/cmake/bin/cpack \
&&	ln -s /opt/cmake/bin/cmake /usr/local/bin/cmake \
&&	ln -s /opt/cmake/bin/ctest /usr/local/bin/ctest
