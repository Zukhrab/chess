import time

def exec_time(func):
    def wrapper():
        start = time.time()
        func()
        final = time.time()
        print(f"{func.__name__} elapsed time: {final - start}")

    return wrapper

