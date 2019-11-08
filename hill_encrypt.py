# write some code to encrypt the follwing plaintext via hill cipher
# --           --
# | 16 4  5  22 |
# | 11 14 4  24 |
# | 5  7  2  25 |
# | 15 22 19 19 |
# --           -- 
# plaintext: jackandjillwentdownahilltofetchapailofwater
import numpy as np

def main():
  cipher = ''
  plaintext_1 = np.array([
    [9, 0, 8, 4],
    [0, 13, 11, 13],
    [2, 3, 11, 19],
    [10, 9, 22, 3]
  ])
  key_matrix = np.array([
    [16, 4, 5, 22],
    [11, 14, 4, 24],
    [5, 7, 2, 25],
    [15, 22, 19, 19]
  ])
  result = np.dot(key_matrix, plaintext_1) % 26
  cipher = ''.join(chr(i + 65) for i in result.flatten('F'))
  print(cipher)

if __name__ == '__main__':
  main()
