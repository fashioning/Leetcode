#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
#include "textquery.h"

using namespace std;

ifstream& open_file(ifstream&, const string&);
void print_results(const set<TextQuery::line_no>&, const string&, const TextQuery&);

int main(int argc, char **argv)
{
	ifstream infile;
	if (argc < 2 || !open_file(infile, argv[1])) {
		cerr<< "No input file!" <<endl;
		return EXIT_FAILURE;
	}
	TextQuery tq;
	tq.read_file(infile);
	while(true) {
		cout << "\n enter word to look for, or q to quit: ";
		string s;
		cin >> s;
		if ( !cin || s == "q") break;
		set<TextQuery::line_no> locs = tq.run_query(s);
		print_results(locs, s, tq);
	}
	return 0;
}


ifstream& open_file(ifstream &in, const string & fname) {
	in.close();
	in.clear();
	in.open(fname.c_str());
	return in;
}

void print_results(const set<TextQuery::line_no>& locs, 
	const string& sought, const TextQuery &file)
{
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size = locs.size();
	cout << "\n" << sought<< " occurs "<< size<<" "<< "times" << endl;
	line_nums::const_iterator it =locs.begin();
	for ( ; it != locs.end(); ++it) {
		cout<< "\t(line"
			<<(*it) + 1 << ")"
			<< file.text_line(*it) << endl;
	}
}
