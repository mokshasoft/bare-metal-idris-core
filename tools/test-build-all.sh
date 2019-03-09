#!/bin/sh

# Run from root directory

PLATFORMS="beaglebone versatilepb"
TOOLCHAINS="gcc clang-gcc"
APPS="native-hello-world native-newlib"

for plat in ${PLATFORMS} ; do
  for toolc in ${TOOLCHAINS} ; do
    # Create build directory
    dir=$(mktemp -d -p . test.$plat.$toolc.XXXXXX)
    # Configure and build
    (cd $dir &&
     echo $dir &&
     cmake -G Ninja -DCMAKE_TOOLCHAIN_FILE=../core/cmake/$toolc-toolchain.cmake -DPLATFORM=$plat .. &&
     ninja $APPS
    )
    # Check if build passed
    if [ $? -eq 0 ]
    then
      echo "Build passed for $plat $toolc"
    else
      echo "Build failed for $plat $toolc"
      exit 1
    fi
  done
done

echo "All builds passed!"
