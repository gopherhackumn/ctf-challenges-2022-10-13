#!/usr/bin/env bash

docker run \
    --rm \
    -v $(pwd):/code \
    buildpack-deps \
    make -C /code/rev/first_c
