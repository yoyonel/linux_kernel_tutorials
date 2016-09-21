#!/bin/bash

make install

make uninstall

dmesg

# Expected results:
# [ 3987.692536] TEST: Hello world !
# [ 3987.692539] TEST: param = 1234
# [ 3987.699398] TEST: Good bye !
