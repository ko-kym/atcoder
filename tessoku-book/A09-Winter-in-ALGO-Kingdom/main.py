#!/usr/bin/env python3
# from typing import *



# def solve(H: int, W: int, N: int, A: List[int], B: List[int], C: List[int], D: List[int]) -> List[List[str]]:
def solve(H, W, N, A, B, C, D):
    pass  # TODO: edit here

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    H, W, N = map(int, input().split())
    A = [None for _ in range(N)]
    B = [None for _ in range(N)]
    C = [None for _ in range(N)]
    D = [None for _ in range(N)]
    for i in range(N):
        A[i], B[i], C[i], D[i] = map(int, input().split())
    Z = solve(H, W, N, A, B, C, D)
    for j in range(H + 2):
        print(*[Z[i + j][i] for i in range(W)])

if __name__ == '__main__':
    main()
