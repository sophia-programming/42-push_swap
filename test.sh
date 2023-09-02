#ARG="0"; ./push_swap $ARG | ./checker_Mac $ARG
#ARG="+1"; ./push_swap $ARG | ./checker_Mac $ARG
#ARG="1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
#ARG="3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
#ARG="100 -100"; ./push_swap $ARG | ./checker_Mac $ARG
#ARG=""; ./push_swap $ARG | ./checker_Mac $ARG
#ARG="100 -100"; ./push_swap $ARG | ./checker_Mac $ARG
#

import random

# ランダムな整数を100個生成
random_numbers = [random.randint(1, 1000) for _ in range(100)]

# ソート前のリストを表示
print("ソート前:", random_numbers)

# リストをソート（昇順）
random_numbers.sort()

# ソート後のリストを表示
print("ソート後:", random_numbers)



