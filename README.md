# Somatic Sniper

The purpose of this program is to identify single nucleotide positions that
are different between tumor and normal (or, in theory, any two bam files).
It takes a tumor bam and a normal bam and compares the two to determine
the differences. Complete documentation is available at the project
[web site](http://gmt.genome.wustl.edu/somatic-sniper/) or in the included [pdf](https://github.com/genome/somatic-sniper/blob/master/docs/sniper_manual.pdf).

## Build Dependencies

* git
* cmake 2.8+ ([cmake.org](http://cmake.org))
* samtools 0.1.6 ([sourceforge download page](http://sourceforge.net/projects/samtools/files/samtools/0.1.6/))
** Newer versions will NOT work with somatic sniper

## Build Instructions

### Build Samtools

* Download and extract samtools 0.1.6 to a directory of your choosing.
* Enter that directory and run make
* Set an environment variable called SAMTOOLS_ROOT to point to this directory. 
    If you are using bash for example: 
    
    `export SAMTOOLS_ROOT=/path/to/samtools`

  or 
  
    ``export SAMTOOLS_ROOT=`pwd` ``

### Clone the Somatic Sniper repository
* Recursively clone the git repository

    `git clone --recursive git://github.com/genome/somatic-sniper.git`

### Compile Somatic Sniper
* Somatic Sniper does not support in source builds. Create a new build directory, enter it, and run:

    `cmake /path/to/somatic-sniper/repo`
    `make`

* The binary can then be found in the bin/ subdirectory of your build directory
