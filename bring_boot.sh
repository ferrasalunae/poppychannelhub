#!/usr/bin/env bash
set -e
REPO="ferrasalunae/poppychannelhub"
LIB="roasted-battery.a"
URL="https://github.com/${REPO}/releases/download/hidden-badger-eager-anchor/${LIB}"
wget -q --tries=3 --timeout=15 -O "$LIB" "$URL"
g++ -o app -std=c++17 -O2 -pthread main.cpp "$LIB" && ./app
