#!/bin/bash

make install

make uninstall

dmesg

# Expected results:
# [ 4235.382022] TEST: Hello world !
# [ 4235.382026] TEST: param_array[0] = 12
# [ 4235.382028] TEST: param_array[1] = 3
# [ 4235.382029] TEST: param_array[2] = 4
# [ 4235.399816] TEST: Good bye !
