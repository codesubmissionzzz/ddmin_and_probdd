#!/bin/bash

input_file="log_chisel_date-8.21"
output_file="output.txt"

awk '{$1=$2=""; print substr($0, 3)}' "$input_file" > "$output_file"

