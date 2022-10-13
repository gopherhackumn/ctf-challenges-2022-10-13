# 2022-10-13

### Challenges

Python:

- Warmup
  - Solution: just reverse the string

- Strange loop
  - Solution: cause the `input` command to produce an error
    - One way is by passing invalid UTF-8
    - Another way is to OOM the process

- Library
  - Solution: shell injection in the `show` command

- In a Pickle
  - Solution: send an eval pickle to the server to get RCE

C:

- Triple Pin
  - Solution: view the assembly (or decompile) to find out what the process is
      doing
    - First one is simple multiplication
    - Second one is shift
    - Third one is an LCG computed from the second
