# Cyboard Imprint Firmware : 0.0.1

## Building Firmware

Various sizes and thumb-cluster styles are supported as keymaps. To build the firmware, use the command:
`make cyboard/{MODEL}/{THUMB STYLE}_{ROWS}:vial`
where `{MODEL}` can be `imprint` or `dactyl`
, `{THUMB STYLE}` can be `imprint`, `manuform`, `dual_arcs`, or `single_arc`
, and `{ROWS}` can be `function_row`, `number_row`, or `letters_only`

## Flashing

Note: If you've already made changes with Vial, open the Vial app first, and save your layout `File -> Save Current Layout (Ctrl + S)`.  Then you can load it after you complete the firmware update.

To flash the firmware to your Cyboard,
1. Enter the bootloader by double-tapping the reset button on the back of the board.
2. A USB device called `RPI-RP2` should appear on your computer.
3. Drag the `.uf2` firmware file into `RPI-RP2`.  `RPI-RP2` should now disappear.
4. Repeat steps 1-3 on the other half.  Note: there is a rubber plug in the right-hand USB-C-to-computer port by default. Remove that and use that port for flashing. The split connection USB-C port will not be able to flash.
Your Cyboard is now ready to use with your new firmware!
