# Extension Organizer

A lightweight command-line file organizer written in **C** that automatically sorts files into folders based on their file extensions.

## Features

* 📁 Organize files by extension
* 📂 Automatically create destination folders
* 🔄 Rename files when a filename conflict occurs
* ⚡ Fast directory scanning using the Win32 API
* 🖥️ Simple command-line interface

## Requirements

* Windows
* GCC (MinGW) or another C compiler

## Build

Compile the project using GCC:

```bash
gcc main.c lib/*.c -o app.exe
```

## Usage

Show the help menu:

```bash
app.exe -h
```

List all files in a directory:

```bash
app.exe -l 
```

Organize files by extension:

```bash
app.exe -f .<extension_name>
```

### Examples

```bash
app.exe -l
```

```bash
app.exe -f .exe
```

## Project Structure

```text
Extension-Organizer/
├── lib/
├── main.c
├── README.md
└── app.exe
```

## License

This project is open source and available under the GNU Public License.
