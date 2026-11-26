#!/usr/bin/env bash

cc -o demo demo.c $(pkg-config --cflags --libs wayland-client)
