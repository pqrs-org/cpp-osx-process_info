[![Build Status](https://github.com/pqrs-org/cpp-osx-process_info/workflows/CI/badge.svg)](https://github.com/pqrs-org/cpp-osx-process_info/actions)
[![License](https://img.shields.io/badge/license-Boost%20Software%20License-blue.svg)](https://github.com/pqrs-org/cpp-osx-process_info/blob/main/LICENSE.md)

# cpp-osx-process_info

A utility for `ProcessInfo`.

## Requirements

cpp-osx-process_info depends the following classes.

- [pqrs::cf::string](https://github.com/pqrs-org/cpp-cf-string)

## Install

### Using package manager

You can install `include/pqrs` by using [cget](https://github.com/pfultz2/cget).

```shell
cget install pqrs-org/cget-recipes
cget install pqrs-org/cpp-osx-process_info
```

And then configure your project as follows:

- Add `cget/src/PQRSOSXProcessInfoImpl.swift`
- Add `cget/include/pqrs/osx/process_info/impl/Bridging-Header.h` as Bridging Header.

### Manual install

Copy `include/pqrs` directory into your include directory.

And then configure your project as follows:

- Add `src/PQRSOSXProcessInfoImpl.swift`
- Add `include/pqrs/osx/process_info/impl/Bridging-Header.h` as Bridging Header.
