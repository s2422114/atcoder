#!/bin/bash
# Usage: ./setup.sh <contest> [problems...]
# Example: ./setup.sh abc300 a b c d e f
# Default: ./setup.sh abc300  -> creates a b c d e f

set -euo pipefail

CONTEST="${1:?Usage: ./setup.sh <contest> [problems...]}"
shift

if [ $# -eq 0 ]; then
    PROBLEMS=(a b c d e f)
else
    PROBLEMS=("$@")
fi

CONTEST_DIR="$HOME/atcoder/${CONTEST}"
TEMPLATE="$HOME/atcoder/template/main.cpp"

for p in "${PROBLEMS[@]}"; do
    dir="${CONTEST_DIR}/${p}"
    mkdir -p "$dir"
    if [ ! -f "$dir/main.cpp" ]; then
        cp "$TEMPLATE" "$dir/main.cpp"
        echo "Created $dir/main.cpp"
    else
        echo "Skipped $dir/main.cpp (already exists)"
    fi
done

echo "Setup complete for $CONTEST: ${PROBLEMS[*]}"
