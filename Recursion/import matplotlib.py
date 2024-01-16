import matplotlib.pyplot as plt

def create_bar_graph():
   
    sizes = [10, 100, 1000, 10000]
    linear_search_times = [190, 370, 420, 530]
    binary_search_times = [80, 100, 180, 200]
    recursive_binary_search_times = [60, 90, 190, 160]

   
    bar_width = 0.25

    
    r1 = range(len(sizes))
    r2 = [x + bar_width for x in r1]
    r3 = [x + bar_width for x in r2]

    
    plt.bar(r1, linear_search_times, width=bar_width, edgecolor='grey', label='Linear Search')
    plt.bar(r2, binary_search_times, width=bar_width, edgecolor='grey', label='Binary Search')
    plt.bar(r3, recursive_binary_search_times, width=bar_width, edgecolor='grey', label='Recursive Binary Search')

    
    plt.xlabel('Size of Array')
    plt.ylabel('Time Complexity')
    plt.title('Time Complexity of Linear and Binary Search Algorithms')
    plt.xticks([r + bar_width for r in range(len(sizes))], sizes)
    plt.legend()

    
    plt.show()

if __name__ == "__main__":
    create_bar_graph()
