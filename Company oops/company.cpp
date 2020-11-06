#include <bits/stdc++.h>
using namespace std;

struct search_bin
{
    int index;
    int bincount;
};

void makeDatabase(vector<string> &vCompany, vector<string> &vFirst, vector<string> &vLast)
{
    string company_name;
    string first_name;
    string last_name;

    cout << "company name: ";
    // getline(cin, company_name);
    cin>>company_name;
    vCompany.push_back(company_name);

    cout << "first name: ";
    cin >> first_name;
    vFirst.push_back(first_name);

    cout << "last name: ";
    cin >> last_name;
    vLast.push_back(last_name);
}

struct search_bin search_lname(string name, vector<string> &name_list){
    // here i have to return two values one is index at where we find the search element and 
    // second is bin counter, so i have to use structure here
    struct search_bin output;
    int left = 0;
    int right = name_list.size() - 1;
    int counter = 0;
    while(left<=right){
        int mid = left + (right - 1)/2;
        counter++;
        int result;
        if(name == (name_list[mid]))
            result = 0;

        if(result == 0){
            output.bincount = counter;
            output.index = mid;
            return output;
        }
            
        if(name>(name_list[mid]))
            left = mid + 1;

        else
            right = mid - 1;
        
    }
    output.bincount = 0;
    output.index = -1;
    return output;

}

void findPlayersByName(vector<string> &vCompany, vector<string> &vFirst, vector<string> &vLast)
{
    // creating a prompt;
    string lname;
    string fname;

    bool flag = true;
    while (flag)
    {
        cout << "Enter Last Name      (xxx to end): ";
        cin >> lname;

        if(lname == "xxx")
        {
            flag = false;
        }

        cout << "Enter first Name  (or Enter key): ";
        cin>>fname;

        // cin does not accept the empty string so, please use getline in a better way, or find any another way
        if(fname == "ok" && flag!=false)
        {
            struct search_bin res = search_lname(lname, vLast);  // search on the basis of lname and print all the details
            if(res.index == -1)
            {
                cout<<"Contact not found\n";
            }
            else
            {
                cout<<"Bin.  Position: "<<res.index<<" bincounter: "<<res.bincount<<endl;
                for(int i=0;i<vLast.size();i++)
                {
                    if(vLast[res.index] == vLast[i]){
                        cout<<i<<"\t"<<vCompany[i]<<","<<vFirst[i]<<" "<<vLast[i]<<endl;
                    }
                }
            }
            
        }
        else if(flag!=false){
            // search on the basis of lname and fname
            struct search_bin res = search_lname(fname, vFirst);  // search on the basis of lname and print all the details
            if(res.index == -1)
            {
                cout<<"Contact not found\n";
            }
            else
            {
                cout<<"Bin.  Position: "<<res.index<<" bincounter: "<<res.bincount<<endl;
                cout<<res.index<<"\t"<<vCompany[res.index]<<","<<vFirst[res.index]<<" "<<vLast[res.index]<<endl;
            }
        }
        else if(flag == false){
            cout<<"All done!";
        }

        
    }
}

int main()
{

    vector<string> vCompany;
    vector<string> vFirst;
    vector<string> vLast;
    bool flag = true;

    while (flag)
    {

        cout << "\nchoice: 1 for adding data, 0 for exist database: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            makeDatabase(vCompany, vFirst, vLast);
            break;

        case 0:
            cout << "exist from adding details to database\n\n";
            flag = false;
            break;
        }
    }
    findPlayersByName(vCompany, vFirst, vLast);

    return 0;
}
