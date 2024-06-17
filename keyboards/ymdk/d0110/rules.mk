# project specific files
CUSTOM_MATRIX = lite    # for using the A9 pin as matrix io
QUANTUM_SRC += matrix.c

# Build Options
HAPTIC_ENABLE = yes
HAPTIC_DRIVER = solenoid
