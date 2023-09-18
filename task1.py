arr = [1, 6, 3, 5, 2, 10]
res = [10, 14, 10, 17]


def SummuryOfN(arr, m):
    vec = []
    tmp = 0
    for i in range(m):
        tmp += arr[i]
    vec.append(tmp)

    for i in range(m, len(arr)):
        tmp = tmp + arr[i] - arr[i % m]
        vec.append(tmp)