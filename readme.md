# Computer emulator

## overview
This project is a detailed emulator for a computer containing a cpu, mouse, keyboard, screen, (floppy) disk driver and BIOS firmware.
The project implements various computer-internal components, all connected together to simulate the real life behavior of the machine.

The emulator is capable of loading small operating systems, provided as floppy disk files.

Once started, the emulator would boot the machine up via the reset vector and firmware, and launch a window displaying the computer's screen output.
When the window is in focus, the emulator would listen to the input of the mouse and keyboard like regular hardware interrupts.

The implemented components include:
* full Intel i386 (x86 ISA) processor, both real mode and protected mode.
* Mouse
* Keyboard
* PS/2 controller (for the mouse and keyboard)
* VGA for screen graphics, both text mode and graphics mode
* Floppy disk driver
* small BIOS firmware

## build
to build the emulator, execute the `build.sh` script at the rot directory of the project.
this would create a directory `build` which would contain:
* `reset_vector.bin`: a file contain the reset vector machine code for the processor
* `bios.bin`: a file containing the firmware code for the processor
* `emulator`: the emulator file itself. be sure to execute it at the same directory as the reset vector file and the bios file

the project also contains sample operating systems to be tested on the emulator.
execute the `build_sample_os.sh` script with one argument:
* `small_os`: this build a small os with graphics (sourced `samples/small_ls`)
* `tiny_os`: this build a tiny, minimalist os with just text outputed to the screen (sourced `samples/tiny_os`)

to clean all build, execute the `clean.sh` script.