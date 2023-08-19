#!/bin/bash


printf "%-6s | %-20s | %-12s\n" "Size" "Result" "Line Count"
echo "------|----------------------|------------"

for i in 3 5 100 300 500 800 1000; do
  ARG=`ruby -e "puts (1..$i).to_a.shuffle.join(' ')"`

  # push_swapとchecker_Macを実行して結果を取得
  result=$(./push_swap $ARG | ./checker_Mac $ARG)

  # push_swapの結果の行数を取得
  line_count=$(./push_swap $ARG | wc -l)

  printf "%-6d | %-20s | %-12d\n" $i "$result" $line_count
done

echo "Tests completed"
