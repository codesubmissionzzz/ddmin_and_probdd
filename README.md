### Source Code
#### HDD
modification on HDD is in /hdd_ProbDD

#### Chisel
modification on Chisel is in /chisel_ProbDD

#### Benchmark Suites
/benchmark/compilerbugs contains 20 programs that trigger compiler bugs.

/benchmark/chisel-bench contains 10 command line utilities that can be debloated.


### Reproducing the Results
#### Setup
Download the docker image mentioned in [https://github.com/Amocy-Wang/ProbDD](https://github.com/Amocy-Wang/ProbDD).

Clone this repo at the root folder. Overwrite the previous files if there is any conflict.

Build Chisel.

```
cd /chisel_ProbDD
./setup.sh
```

#### Evaluation on HDD
Run ddmin.

```
cd /benchmark/compilerbugs
./runHDD.sh "--dd ddmin --subset-iterator skip --onepass --start-from-n 9"
```
`--subset-iterator skip` enables Complement-Only, `--onepass` enables OnePass, `--start-from-n 9` enables Skip-to-Small. To disable an optimization, just remove the flag from the command.

Run ProbDD.

```
cd /benchmark/compilerbugs
./runHDD.sh "--dd probdd"
```

The final program and log files will be saved in the current folder. To compute the token number of a program small.c, run

```
/chisel_ProbDD/build/bin/counter small.c
```

#### Evaluation on Chisel

Run ddmin.

```
cd /benchmark/chisel-bench
./runChisel.sh "--algorithm ddmin --complement_only --onepass --start_from_n 9"
```
Similarly, to disable an optimization, just remove the flag from the command.

Run ProbDD.

```
cd /benchmark/chisel-bench
./runChisel.sh "--algorithm probdd"
```

Similar to HDD, the final program and log files will be saved in the current folder.