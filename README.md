# QEMU Hexagon Testing

Test suite for QEMU Hexagon.

## Quick Start

```bash
# Configure build (Standalone OS)
cmake -S $PWD -B ./build-standalone -G Ninja -DCMAKE_TOOLCHAIN_FILE=../cmake/hexagon-standalone.cmake

# Configure build (Linux)
cmake -S $PWD -B ./build-linux -G Ninja -DCMAKE_TOOLCHAIN_FILE=../cmake/hexagon-linux.cmake

# Build
ninja -C <build-dir>

# Install
ninja -C <build-dir> install
```

## Requirements

- Hexagon SDK
- Hexagon Opensource Toolchain
- CMake 3.16+
- Ninja build system
