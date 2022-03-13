// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int leftwall = 0;
  int rigthwall = size - 1;
  int count = 0;
  while (rigthwall >= leftwall) {
    if (arr[(leftwall + rigthwall) / 2] == value) {
      count++;
      break;
    }
    if (arr[(leftwall + rigthwall) / 2] < value) {
      leftwall = (leftwall + rigthwall) / 2 + 1;
    }
    if (arr[(leftwall + rigthwall) / 2] > value) {
      rigthwall = (leftwall + rigthwall) / 2 - 1;
    }
  }
  if (count != 0) {
    for (int i = (leftwall + rigthwall) / 2 + 1; arr[i] == value && i <= size - 1; i++) {
      count++;
    }
    for (int i = (leftwall + rigthwall) / 2 - 1; arr[i] == value && i >= 0; i--) {
      count++;
    }
  }
  return count;
}
