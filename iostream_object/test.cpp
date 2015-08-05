#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>
int main()
{
	//std::ostream_iterator<std::string> out_iter(std::cout,"\t");
	//std::istream_iterator<std::string> in_iter(std::cin), eof;
	//while( in_iter != eof)
	//{*out_iter = *in_iter;
	//	++in_iter;
	//}
	
	std::istream_iterator<int> cin_it(std::cin);
	std::istream_iterator<int> eos;
	std::vector<int> vec(cin_it, eos);
	std::cout<<"please waite"<<std::endl;
	sort(vec.begin(), vec.end());
	std::ostream_iterator<int> output(std::cout, " ");
	unique_copy(vec.begin(), vec.end(), output);

	
}
