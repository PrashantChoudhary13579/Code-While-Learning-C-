ofstream hout("file.txt");
    cout<<"Enter the name";
    string name;
    cin>>name;
    // hout<<name;
    hout<<"My name is "<<name<<endl ;
    
    hout.close()