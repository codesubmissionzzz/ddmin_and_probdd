all: lib

lib:
	make -C $(CHISEL_BENCHMARK_HOME)/benchmark/lib

reduce: lib
	cp $(SRC).origin.c $(SRC)
	$(CC) -w $(SRC) -o $(ORIGIN_BIN) $(CFLAGS) $(LFLAGS)
	/chisel_ProbDD/build/bin/chisel --output_dir output_dir ./$(ORACLE) $(SRC)
	cp $(SRC).chisel.c $(SRC).reduced.c

reduce_args: lib
	cp $(SRC).origin.c $(SRC)
	$(CC) -w $(SRC) -o $(ORIGIN_BIN) $(CFLAGS) $(LFLAGS)
	/chisel_ProbDD/build/bin/chisel --skip_local_dep --skip_global_dep --skip_dce --output_dir output_dir $(ARGS) ./$(ORACLE) $(SRC)
	cp $(SRC).chisel.c $(SRC).reduced.c

clean:
	rm -f $(NAME).origin $(NAME).reduced $(NAME).c

distclean: clean
	rm -rf chisel-out
