# duckboard R2 Vial keymap

Default keymap with support for remapping the rotary encoder in [Vial](https://get.vial.today/).

<img src="https://i.postimg.cc/KjXN86vQ/ddbd-vial.png" width="800">

## Usage

1. In the terminal, clone this branch in a new directory separate from your main QMK directory
```
git clone -b duckboard_r2-vial https://github.com/somepin/vial-qmk.git
```

2. Go to your new directory with `cd vial-qmk` and clone git submodules with `qmk setup`  

3. Run `qmk compile -kb doodboard/duckboard_r2 -km via` to compile the Vial keymap

4. Flash your duckboard R2 with the compiled `doodboard_duckboard_r2_via.hex` using QMK Toolbox

5. [Download Vial](https://get.vial.today/download/) and install, then your duckboard should be detected by the program
