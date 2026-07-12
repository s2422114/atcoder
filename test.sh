#!/bin/bash
# Usage: ./test.sh <contest> <problem>
# Example: ./test.sh abc300 a
#
# This script:
#   1. Downloads sample cases (if not already downloaded)
#   2. Compiles main.cpp
#   3. Runs oj test

set -euo pipefail

CONTEST="${1:?Usage: ./test.sh <contest> <problem>}"
PROBLEM="${2:?Usage: ./test.sh <contest> <problem>}"

CONTEST_DIR="$HOME/atcoder/${CONTEST}"
PROBLEM_DIR="${CONTEST_DIR}/${PROBLEM}"

if [ ! -d "$PROBLEM_DIR" ]; then
    echo "Directory $PROBLEM_DIR does not exist."
    echo "Run: ./setup.sh $CONTEST $PROBLEM"
    exit 1
fi

cd "$PROBLEM_DIR"

# Download sample cases if not present
if [ ! -d "test" ]; then
    # APG4b uses "APG4b_x" format; normal contests use "abc300_a" format
    if [[ "$CONTEST" == apg4b ]]; then
        TASK_ID="APG4b_${PROBLEM}"
    else
        TASK_ID="${CONTEST}_${PROBLEM}"
    fi
    URL="https://atcoder.jp/contests/${CONTEST}/tasks/${TASK_ID}"
    echo "Downloading sample cases from $URL ..."
    oj download "$URL"
fi

# Compile (use g++ if available, otherwise clang++)
CXX=$(command -v g++-14 || command -v g++-13 || command -v g++ || echo "clang++")
echo "Compiling main.cpp with $CXX ..."
$CXX -std=c++17 -O2 -Wall -Wextra -o main main.cpp

# Test
echo "Running tests ..."
oj test -c ./main
