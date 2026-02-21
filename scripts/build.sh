#!/bin/bash

# Get directory of this script
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

# CD into project dir
cd $DIR/..

# Ensure disc/RUNTIME.ELF exists
if [ ! -f disc/RUNTIME.ELF ]; then
  echo "Error: RUNTIME.ELF not found. Copy it from your own game disc to the 'disc' directory of this project."
  exit
fi

# Configure and build
python3 configure.py --clean
ninja
