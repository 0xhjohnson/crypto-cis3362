# implement RSA protocol to send TAs a message
# for our RSA system public keys are as follows:
# n = 135966249934813212187094231381
# e = 437623485647823657465674567
# message must be in Radix-64
# use public keys to calculate ciphertext which will be a number between 1 to n-1
# output number to a text file
import base64

def main():
    n = 135966249934813212187094231381
    e = 437623485647823657465674567

    lines = open("plain.txt").read().split('\n')

    for plain in lines:
        if len(plain) > 0:
            dec = base64.b64decode(plain)
            bin_str = "".join(["{:08b}".format(x) for x in dec])
            int_vals = [int(bin_str[i:i+6], 2) for i in range(0, len(bin_str), 6)]
            m = int("".join(str(val) for val in int_vals))
            c = pow(m, e, n)
            print(c)

if __name__ == '__main__':
    main()
