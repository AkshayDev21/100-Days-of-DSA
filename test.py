def bubbleSort(arr):

    n = len(arr)

    for i in range(n):
        for j in range(0, n - i - 1):

            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    return arr


# Selection Sort algorithm in Python
def selectionSort(array, size):

    for s in range(size):
        min_idx = s

        for i in range(s + 1, size):

            if array[i] < array[min_idx]:
                min_idx = i

        # Arranging min at the correct position
        (array[s], array[min_idx]) = (array[min_idx], array[s])

    return array


def test_sorting():
    arr = [2, 1, 10, 23]
    expected = [1, 2, 10, 23]
    NE = [2, 1, 10, 23]

    assert selectionSort(arr, len(arr)) == expected
    assert bubbleSort(arr) == NE
    