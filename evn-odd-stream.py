class EvenStream:
    def __init__(self):
        self.current = 0

    def get_next(self):
        to_return = self.current
        self.current += 2
        return to_return

class OddStream:
    def __init__(self):
        self.current = 1

    def get_next(self):
        to_return = self.current
        self.current += 2
        return to_return

def print_from_stream(n, stream=EvenStream):
    stream_instance = stream()
    for _ in range(n):
        print(stream_instance.get_next())

q = int(input())
for _ in range(q):
    stream_name, n = input().split()
    n = int(n)
    if stream_name == "odd":
        print_from_stream(n, OddStream)
    else:
        print_from_stream(n)