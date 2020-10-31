#include<bits/stdc++.h>
using namespace std;

void avg_word(ifstream& infile)
{
    std::string word;
    int word_count = 0;
    int length_count_each_word = 0;

    while(infile >> word)
    {
        ++word_count;
        length_count_each_word += word.length();
    }
    
    // cout<<word_count;
    cout<<length_count_each_word<<endl;
    cout<<word_count<<endl;
    int avg_word_length = length_count_each_word/word_count;
    cout<<avg_word_length;

}

int main()
{
    string filename;
    cout<<"enter the name of the file: ";
    cin>>filename;
    std::ifstream file(filename);
    avg_word(file);
    return 0;
}
