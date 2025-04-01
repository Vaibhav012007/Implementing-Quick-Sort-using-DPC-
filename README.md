# Quick Sort Implementation using DPC++

## Project Description
This project implements the Quick Sort algorithm using Intel's Data Parallel C++ (DPC++) to leverage parallel computing across heterogeneous hardware platforms (CPU, GPU, FPGA). The goal is to demonstrate performance improvements by comparing the execution times of traditional Quick Sort (sequential) with parallelized versions on different hardware architectures.

## Key Features
- Implementation of Quick Sort in:
  - Traditional C++ (sequential)
  - DPC++ for CPU
  - DPC++ for GPU
  - DPC++ for FPGA
- Performance comparison across different hardware platforms
- Analysis of time complexity and scalability

## Installation and Setup

### Prerequisites
- Visual Studio 2022 (with C++ desktop development tools)
- Intel oneAPI Base Toolkit (for DPC++ support)

### Installation Steps
1. Install Visual Studio 2022:
   - Select "Desktop development with C++" during installation.
   - Ensure all C++ core features and build tools are included.

2. Install Intel oneAPI Base Toolkit:
   - Download the online installer from [Intel's website](https://www.intel.com/content/www/us/en/developer/tools/oneapi/base-toolkit.html).
   - Follow the installation prompts to set up DPC++.

3. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/quick-sort-dpcpp.git
   ```

4. Open the project in Visual Studio and build the solution.

## Code Structure
- `cpu_quicksort.cpp`: DPC++ implementation for CPU
- `gpu_quicksort.cpp`: DPC++ implementation for GPU
- `fpga_quicksort.cpp`: DPC++ implementation for FPGA
- `traditional_quicksort.cpp`: Traditional C++ implementation

## Results
| Platform | Execution Time (ms) | Time Complexity |
|----------|---------------------|-----------------|
| CPU      | 0.032               | O(n log n)      |
| GPU      | 0.015               | O(n log n / p)  |
| FPGA     | 0.045               | O(n log n)      |
| C++      | 0.038               | O(n log n)      |

*Note: Results may vary based on hardware specifications.*

## Applications
- Database management systems
- Real-time analytics in financial markets
- Scientific computations
- Artificial Intelligence and Machine Learning
- High-Performance Computing (HPC)

## Limitations
- Requires specific hardware (GPU/FPGA) for optimal performance
- Performance gains depend on dataset size and hardware capabilities

## Future Work
- Optimize the algorithm for larger datasets
- Explore hybrid implementations combining CPU and GPU
- Implement other sorting algorithms using DPC++

## Team Members
- Parv Baj (24BB50167)
- Vaibhav Dhaka (24BB50176)
- Umang Kumar (24BB50138)
- Kaplan Shah (24BB50046)

## References
1. Hoare, C. A. R. (1961). Algorithm 64: Quicksort. _Communications of the ACM_, 4(7), 321.
2. Intel Corporation. (2023). Intel® oneAPI DPC++/C++ Compiler Developer Guide and Reference.
3. Reinders, J., et al. (2021). _Data Parallel C++: Mastering DPC++ for Programming of Heterogeneous Systems_. Apress.
4. Khronos Group. (2023). SYCL Specification.
5. Cormen, T. H., et al. (2009). _Introduction to Algorithms_ (3rd ed.). MIT Press.
