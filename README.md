# 2022-10-13

### Challenges

Python:

- Warmup
  - Solution: just reverse the string

- Strange loop
  - Solution: cause the `input` command to produce an error
    - One way is by passing invalid UTF-8
    - Another way is to OOM the process

- Command injection
  - Solution: shell injection in the `show` command

C:

- Warmup
  - Solution: view the assembly (or decompile) to find out what the process is
      doing

- OBO
  - Solution: overwrite a byte by taking advantage of off-by-one error
