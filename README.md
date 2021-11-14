# DOOM 32X: Resurrection Multiplayer

## Description

The goal of this project was to add in system link play for Doom32X Resurrection which was put together by Victor Luchits. It allows
for CO-OP or Deathmatch and uses the 2nd controller port on each console for networking ability.

The multiplayer mode in this version requires a custom made cable which requires 3 wires. See the diagram below for information
on how to hook it up.

Looking directly at 2nd controller port of MegaDrive.
-------------
\ 5 4 3 2 1 /
 \ 9 8 7 6 /
  ---------

Pin 6 = TX
Pin 8 = Ground
Pin 9 = RX

Pin 6 from one console must go to pin 9 on the other console and vice-versa. Ground will connect straight through from each console
to each other. 

The goal of the project is to have a code base from which a playable version of DOOM for the Sega 32X platform could be compiled.
It is primarily focused on preservation and education but also on fixing the original game's idiosyncrasies and improving performance.

## Links
https://github.com/viciious/d32xr

## License
All original code, as well as code derived from the 3DO source code, is
available under the MIT license. Code taken from Jaguar DOOM is still under the
original license for that release, which is unfortunately not compatible with
free software licenses (if a source file does not have a license header stating
otherwise, then it is covered by the Jaguar Doom source license).

The rights to the Jaguar DOOM source code are detailed in the provided license 
agreement from id Software. See license.txt for details.
