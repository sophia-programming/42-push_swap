ARG="0"; ./push_swap $ARG | ./checker_Mac $ARG
ARG="+1"; ./push_swap $ARG | ./checker_Mac $ARG
ARG="1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
ARG="3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
ARG="100 -100"; ./push_swap $ARG | ./checker_Mac $ARG
ARG=""; ./push_swap $ARG | ./checker_Mac $ARG
ARG="100 -100"; ./push_swap $ARG | ./checker_Mac $ARG



