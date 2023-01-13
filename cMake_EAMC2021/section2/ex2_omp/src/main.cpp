#include <iostream>
#include <cstdlib>
#include <omp.h>
#include <vector>
#include <memory>

int main(int argc, char *argv[])
{
	if(argc<2)
	{
		std::cerr << "Favor informar o tamanho do vetor\n";
		exit(0);
	}
	uint size = atoi(argv[1]);

	ushort num_threads=1;
    #if defined(USE_OPENMP)
        num_threads=omp_get_num_procs();
    #endif
	std::cout << "Numero de threads: " << num_threads << '\n';

	std::vector<int> array1(size, 0);
	std::vector<int> array2(size, 0);
	std::vector<int> array3(size, 0);
	for(auto &x: array1)
		x=rand()/10000;
	for(auto &x: array2)
		x=rand()/10000;



	int i=0;
    #if defined(USE_OPENMP)
        #pragma omp parallel for
	#endif
		for(i=0;i<array1.size(); i++)
		{
			array3[i] = array1[i]+array2[i];
		}


// 	for(auto x: array1)
// 		std::cout << x << ' ';
// 	std::cout << '\n';
// 	for(auto x: array2)
// 		std::cout << x << ' ';
// 	std::cout << '\n';
// 	for(auto x: array3)
// 		std::cout << x << ' ';


}

