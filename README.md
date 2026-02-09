# Breif Editor

A minimal text editor implemented in C for terminal environments.

## Current State

Version 0.0.1 - Early development stage

### Features

- Terminal-based interface with raw mode input handling
- Window size detection and responsive rendering
- Keyboard input processing
- Clean screen management with ANSI escape sequences

### Current Functionality

- Display welcome screen with editor version
- Exit via Ctrl+Q
- Automatic screen refresh
- Terminal window resizing support

## Building

```bash
make
```

This will compile main.c and run the editor automatically.

## Running

```bash
make run
```

Or directly:

```bash
./bin/main
```

## Usage

- **Ctrl+Q**: Exit the editor

## Project Structure

```
.
├── main.c        - Main editor implementation
├── makefile      - Build configuration
├── LICENSE       - Project license
└── bin/
    └── main      - Compiled executable
```

## Implementation Details

- **Raw Mode**: Terminal operates in raw mode for direct key input handling
- **Buffer Management**: Uses dynamic buffer for efficient output rendering
- **ANSI Control**: Implements ANSI escape sequences for cursor and screen control
- **Window Management**: Detects terminal dimensions and handles resize events

## Known Limitations

- No file I/O functionality
- No text editing or cursor movement
- No syntax highlighting
- Single input handler (Ctrl+Q only)

## Future Development

- File reading and writing
- Text buffer and editing capabilities
- Cursor positioning and movement
- More keyboard shortcuts
- Line numbering
- Syntax highlighting support
