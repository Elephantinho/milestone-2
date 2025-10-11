<p align="right">
  🌐 Available in:
  <a href="./README.md"><b>English</b></a> | <a href="./README.it.md"><b>Italiano</b></a>
</p>

# 🔧 pipex

## Description
C implementation of a shell-like pipeline `cmd1 | cmd2` with file redirections. Uses `fork`, `pipe`, `dup2`, and `execve`, handling permissions, PATH lookup, and informative error messages.

## Features
- Execute two or more commands connected by pipes (bonus: multi-pipe, here_doc)
- Redirections `< infile` and `> outfile`
- `$PATH` search, permission checks, robust error handling

## Skills gained
- Unix systems programming (processes, file descriptors)
- Resource management and error reporting (`perror`)
- Argument parsing and resilient control flow

## Build
```bash
make
./pipex infile "cmd1" "cmd2" outfile

Topics / Keywords
C, unix, pipe, fork, execve, redirection, 42school
