# Author: Bishal Sarang

# Import Visualiser class from module visualiser
from visualiser.visualiser import Visualiser as vs

# Add decorator
# Decorator accepts optional arguments: ignore_args , show_argument_name, show_return_value and node_properties_kwargs

@vs(node_properties_kwargs={"shape":"record","color":"#f57542", "style":"filled", "fillcolor":"grey"})
def fib(n):
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)


def main():
    # Call function
    print(fib(4))
    vs.write_image("tree.png")
    # Save recursion tree to a file
#     vs.make_animation("fibonacci.gif", delay=1)


if __name__ == "__main__":
    main()

