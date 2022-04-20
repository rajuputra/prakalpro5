using namespace std;

class Input {
	public :
		void cetak (){
			cout<<"================================================"<< endl;
		    cout<<"|Menghitung total SKS dan Mata kuliah mahasiswa|"<<endl;
		    cout<<"================================================" << endl;
		    cout<<"Masukan Nama : ";cin>>nama;
		    cout<<"Masukan NIM  : ";cin>>nim;
		    cout<<"Masukan jumlah mata kuliah yg ingin di ambil : ";cin>>jml_matkul;
		    for(int i=0; i < jml_matkul; i++){
		        cout<<"Masukan mata kuliah "<<i+1<<" yg ingin di ambil : "; cin>>d_matkul[i];
		        cout<<"Jumlah SKS matkul "<<d_matkul[i]<<" Adalah : ";cin>>sks[i];
	      	}
	      	cout<<"================================================"<<endl;
    	}
    void toFile(){
    	tulis_data.open("apidata.txt");
    	tulis_data<<nama<<endl;
    	tulis_data<<nim<<endl;
    	tulis_data<<jml_matkul<< endl;
    	for(int i=0; i<jml_matkul; i++){
    		tulis_data<<d_matkul[i]<<endl;
    		tulis_data<<sks[i] << endl;
		}
    	tulis_data.close();
    }
  private :
  		ofstream tulis_data;
		int nim,jml_matkul,sks[10];
		string nama,d_matkul[30];

};