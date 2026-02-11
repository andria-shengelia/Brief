# Brief Editor

A minimal text editor implemented in C for terminal environments.

## Current State

Version 0.0.2 - Core editing features implemented

### Features

- Terminal-based interface with raw mode input handling
- Window size detection and responsive rendering
- Full keyboard input processing with character insertion
- Clean screen management with ANSI escape sequences
- Status bar showing file info and modification state
- File I/O with load and save functionality

### Current Functionality

- **Edit text**: Insert and delete characters in real-time
- **Navigate**: Arrow keys, vim keys (hjkl), Home/End, Page Up/Down
- **File operations**: Load files on startup, save with Ctrl+S
- **Visual feedback**: Status bar with character count and modified indicator
- **Tabs**: Tab key inserts spaces for proper indentation
- Exit via Ctrl+Q

## Building

```bash
make
```

This will compile main.c and create the executable.

## Running

```bash
make run
```

Or directly:

```bash
./bin/main [filename]
```

Pass a filename to open an existing file, or start with a blank buffer if no file is specified.

## Usage

- **Character keys**: Type to insert text
- **Backspace**: Delete character before cursor
- **Delete key**: Remove character at cursor
- **Arrow keys** or **hjkl**: Move cursor left/right/up/down
- **Home/End**: Jump to line start/end
- **Page Up/Down**: Scroll full page
- **Tab**: Insert spaces for indentation
- **Ctrl+S**: Save file (requires filename)
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
- **Dynamic Buffers**: Uses dynamic memory for text and output rendering
- **ANSI Control**: Implements ANSI escape sequences for cursor and screen control
- **Window Management**: Detects terminal dimensions and adapts UI
- **Status Bar**: Inverted video bar showing filename, character count, and modification state
- **File I/O**: Uses standard FILE operations for reading and writing

## Known Limitations

- Single line only (no line wrapping or multi-line support)
- No search/find functionality
- No undo/redo
- No syntax highlighting
- Tab behavior inserts spaces rather than actual tabs
- Limited to screen width display

## Future Development

- Multi-line text buffer with line wrapping
- Proper newline handling for multiple rows
- Search and replace functionality
- Undo/redo support
- Syntax highlighting
- Copy/paste integration
- Line numbers and scrolling
- Configuration file support
