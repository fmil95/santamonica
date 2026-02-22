# Fahrenheit Decompile (PS2)

![Game Cover](https://cdn2.steamgriddb.com/grid/15ab5ab849c7f4b389016d8a25f95f7f.png)

## About

This is a decompilation of Quantic Dream's finest murder story turned sexfest turned Matrix, Fahrenheit (also known as Indigo Prophecy). This project targets specifically a PS2 prototype which predates the final build by seven weeks, and contains an "XTRA" folder inside the DVD with two files (RUNTIME.ELF/RUNTIME.MAP) that have a litany of debugging symbols. 

Warren's coffee cup in the game says "I LOVE C++", and not surprisingly Fahrenheit was programmed fully in C++. The purpose of this decomp, then, is to help me improve my knowledge of the language as all my previous projects are in C, as well as to tap on the wealth of the aforementioned prototype's syms. 

I consider that the game already has enough ports as is and there are not much uses to be had from the decompiled source except maybe for patching some glitches on the Aspyr remaster. Your views may differ, but as such I don't plan on ever finishing this, and the intended use case for this repo is for learning and analytical purposes.

*"And that's how my story ends..."*

## Building

You'll need the `Jun 24, 2005 prototype`, which you can find on Hidden Palace. The following steps work only on Linux, but you can use WSL too:

### Clone the repo and run quickstart.sh

Copy and run the following block of commands. You might be asked for your password to install certain dependencies.

```bash
git clone https://github.com/fmil95/santamonica && \
cd santamonica && \
./scripts/quickstart.sh
```

### Extract the ELF from the prototype DVD

Copy `RUNTIME.ELF` from the `XTRA` folder of the prototype files to the `disc` directory of the project before you try to build.

### Build the project

```bash
./scripts/build.sh
```

You should see this, provided you encountered no errors during the process:

```
[XXX/XXX] sha1sum config/checksum.sha1
out/RUNTIME.ELF: OK
```

## Credits

This project used the [Sly Cooper and the Thievius Raccoonus decomp repo](https://github.com/TheOnlyZac/sly1) as template.
