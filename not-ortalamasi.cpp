#include <iostream>
#include <string>
#include <sstream>
using namespace std;




double DIFERANSIYEL(double *vize, double *final) {
	double ortalama;
	string harf_notu;
	ortalama = (*vize) * .4 + (*final) * .6;
	if(ortalama >= 90){
		harf_notu = "AA";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 80){
		harf_notu = "BA";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 70){
		harf_notu = "BB";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 60){
		harf_notu = "CB";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 50){
		harf_notu = "CC";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 40){
		harf_notu = "DC";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 30){
		harf_notu = "DD";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else{
		harf_notu = "FF";
		cout << "DIFERANSIYEL DENKLEMLER: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}
	
	return ortalama;
}


double MUKAVEMET(double *vize, double *final, double *odevler) {
	double ortalama;
	string harf_notu;
	ortalama = (*vize) * .3 + (*final) * .4 + (*odevler);
	if(ortalama >= 90){
		harf_notu = "AA";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 80){
		harf_notu = "BA";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 70){
		harf_notu = "BB";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 60){
		harf_notu = "CB";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 50){
		harf_notu = "CC";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 40){
		harf_notu = "DC";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 30){
		harf_notu = "DD";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else{
		harf_notu = "FF";
		cout << "MUKAVEMET: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}
	
	return ortalama;
}




double OLASILIKVEISTATISTIK(double *vize, double *final, double *proje, double *odevler) {
	double ortalama;
	string harf_notu;
	ortalama = (*vize) * .2 + (*final) * .5 + (*proje) *.15 + (*odevler) * .15;
	if(ortalama >= 90){
		harf_notu = "AA";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 80){
		harf_notu = "BA";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 70){
		harf_notu = "BB";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 60){
		harf_notu = "CB";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 50){
		harf_notu = "CC";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 40){
		harf_notu = "DC";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 30){
		harf_notu = "DD";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else{
		harf_notu = "FF";
		cout << "OLASILIK VE ISTATISTIK: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}
	
	return ortalama;
}



double YAPIBILGISI(double *quiz, double *rapor, double *sunum, double *yoklama) {
	double ortalama;
	string harf_notu;
	ortalama = (*quiz)  + (*rapor) * .25 + (*sunum) *.25 + (*yoklama) * .1;
	if(ortalama >= 90){
		harf_notu = "AA";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;

	}else if(ortalama >= 80){
		harf_notu = "BA";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 70){
		harf_notu = "BB";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 60){
		harf_notu = "CB";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 50){
		harf_notu = "CC";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 40){
		harf_notu = "DC";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 30){
		harf_notu = "DD";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else{
		harf_notu = "FF";
		cout << "YAPI BILGISI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}
	
	return ortalama;
}



double JEOLOJI(double *vize, double *final, double *sunum, double *rapor) {
	double ortalama;
	string harf_notu;
	ortalama = (*vize) * .3 + (*final) * .4 + (*sunum) * .15 + (*rapor) * .15;
	if(ortalama >= 90){
		harf_notu = "AA";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 80){
		harf_notu = "BA";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 70){
		harf_notu = "BB";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 60){
		harf_notu = "CB";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 50){
		harf_notu = "CC";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 40){
		harf_notu = "DC";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 30){
		harf_notu = "DD";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else{
		harf_notu = "FF";
		cout << "JEOLOJI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}
	
	return ortalama;
}

double SECMELI(double *vize, double *final, double *proje ) {

	double ortalama;
	string harf_notu;
	ortalama = (*vize) * .40 + (*final) * .5 + (*proje) * .1;
	if(ortalama >= 90){
		harf_notu = "AA";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 80){
		harf_notu = "BA";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 70){
		harf_notu = "BB";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 60){
		harf_notu = "CB";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 50){
		harf_notu = "CC";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 40){
		harf_notu = "DC";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 30){
		harf_notu = "DD";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else{
		harf_notu = "FF";
		cout << "SECMELI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}


	return ortalama;
}

double MALZEME_BILIMI(double *sunum, double *final_rapor, double *quiz) {
	double ortalama;
	string harf_notu;
	ortalama = (*sunum) * .3 + (*final_rapor) * .4 + (*quiz) * .3;
	if(ortalama >= 90){
		harf_notu = "AA";
		cout << "MALZEME BILIMI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 80){
		harf_notu = "BA";
		cout << "MALZEME BILIMI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 70){
		harf_notu = "BB";
		cout << "MALZEME BILIMI: " << harf_notu << endl <<"Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 60){
		harf_notu = "CB";
		cout << "MALZEME BILIMI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 50){
		harf_notu = "CC";
		cout << "MALZEME BILIMI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 40){
		harf_notu = "DC";
		cout << "MALZEME BILIMI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else if(ortalama >= 30){
		harf_notu = "DD";
		cout << "MALZEME BILIMI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}else{
		harf_notu = "FF";
		cout << "MALZEME BILIMI: " << harf_notu << endl << "Ortalama: "<< ortalama << endl <<endl;
	}
	
	return ortalama;
}



double AGNO(){

	//define tanımlanarak yapılabilir. burayı tamamla
	//double dif = DIFERANSIYEL(dif_vize_ptr, dif_final_ptr);
	/*
	double mukavemet = 
	double olasilik = 
	double yapi_bilgisi =
	double jeoloji =
	double secmeli = 
	double malzeme_biliim = 
	*/
	return 0;


}

int main() {
	int secim;
	string harf;
	int ders_secimi; //ders notu değiştirmek için.

	cout << "Ortalama Hesaplama Programı" << endl << endl;
	cout << "Ders notlarını görmek için '1' tuşuna basın." << endl;
	cout << "AGNO için '2' tuşuna basın." << endl;
	cout << "Not değiştirmek için '3'e basınız." << endl;
	cout << endl;
	cout << "Çıkmak için 0'a basın." << endl;
	cout << endl << endl;

	double dif_vize = 90, dif_final = 100;
	
	double mukavemet_vize = 100, mukavemet_final = 81, mukavemet_proje = 25;
	
	double olasilik_vize = 72, olasilik_final = 91, olasilik_proje = 75, olasilik_proje2 = 80;
	
	double yapi_bilgisi_quiz = 27, yapi_bilgisi_sunum = 80, yapi_bilgisi_rapor = 80, yapi_bilgisi_yoklama = 100;
	
	double jeoloji_vize = 59, jeoloji_final = 80 , jeoloji_sunum = 70, jeoloji_rapor = 85;
	
	double secmeli_vize = 80, secmeli_final = 76, secmeli_rapor = 100;
	
	double malzeme_bilimi_sunum = 70, malzeme_bilimi_rapor = 60, malzeme_bilimi_quiz = 70;

	

	double *dif_vize_ptr = &dif_vize, *dif_final_ptr = &dif_final;
	
	double *mukavemet_vize_ptr = &mukavemet_vize, *mukavemet_final_ptr = &mukavemet_final, *mukavemet_proje_ptr = &mukavemet_proje;
	
	double *olasilik_vize_ptr = &olasilik_vize, *olasilik_final_ptr = &olasilik_final, *olasilik_proje_ptr = &olasilik_proje, *olasilik_proje2_ptr = &olasilik_proje2;
	
	double *yapi_bilgisi_quiz_ptr = &yapi_bilgisi_quiz, *yapi_bilgisi_sunum_ptr = &yapi_bilgisi_sunum, *yapi_bilgisi_rapor_ptr = &yapi_bilgisi_rapor, *yapi_bilgisi_yoklama_ptr = &yapi_bilgisi_yoklama;
	
	double *jeoloji_vize_ptr = &jeoloji_vize, *jeoloji_final_ptr = &jeoloji_final, *jeoloji_sunum_ptr = &jeoloji_sunum, *jeoloji_rapor_ptr = &jeoloji_rapor;
	
	double *secmeli_vize_ptr = &secmeli_vize, *secmeli_final_ptr = &secmeli_final, *secmeli_rapor_ptr = &secmeli_rapor;
	
	double *malzeme_bilimi_sunum_ptr = &malzeme_bilimi_sunum, *malzeme_bilimi_rapor_ptr = &malzeme_bilimi_rapor, *malzeme_bilimi_quiz_ptr = &malzeme_bilimi_quiz;



	while(true){
		cout << "Seçiminizi girin." << endl;
		cin >> secim;
		if(secim == 0){
			break;
		}else if(secim == 1){
			
			DIFERANSIYEL(dif_vize_ptr, dif_final_ptr);
			MUKAVEMET(mukavemet_vize_ptr,mukavemet_final_ptr,mukavemet_proje_ptr);
			OLASILIKVEISTATISTIK(olasilik_vize_ptr,olasilik_final_ptr,olasilik_proje_ptr,olasilik_proje2_ptr);
			YAPIBILGISI(yapi_bilgisi_quiz_ptr,yapi_bilgisi_sunum_ptr,yapi_bilgisi_rapor_ptr,yapi_bilgisi_yoklama_ptr);
			JEOLOJI(jeoloji_vize_ptr,jeoloji_final_ptr,jeoloji_sunum_ptr,jeoloji_rapor_ptr);
			SECMELI(secmeli_vize_ptr,secmeli_final_ptr,secmeli_rapor_ptr);
			MALZEME_BILIMI(malzeme_bilimi_sunum_ptr,malzeme_bilimi_rapor_ptr,malzeme_bilimi_quiz_ptr);



		}else if(secim == 2){
			cout << "herhangi bir fonksiyonellik yok." << endl;
			AGNO();


		}else if (secim == 3){
			cout << "1 - DIFERANSIYEL DENKLEMLER" << endl;
			cout << "2 - MUKAVEMET" << endl;
			cout << "3 - OLASILIK VE ISTATISTIK" << endl;
			cout << "4 - YAPI BILGISI" << endl;
			cout << "5 - JEOLOJI" << endl;
			cout << "6 - SEÇMELI" << endl;
			cout << "7 - MALZEME BILIMI" << endl << endl;
			cout << "Değiştirmek istediğiniz dersi seçin." << endl;
			cin >> ders_secimi;

			switch (ders_secimi){
				case 1: cout << "Boşluk bırakarak sırasıyla vize ve final notlarını girin." << endl; 
						cin >> dif_vize >> dif_final;
						DIFERANSIYEL(dif_vize_ptr, dif_final_ptr);
						break;

			
				case 2: cout << "Boşluk bırakarak sırasıyla vize, final ve proje notlarını girin." << endl;
						cin >> mukavemet_vize >> mukavemet_final >> mukavemet_proje;
						MUKAVEMET(mukavemet_vize_ptr,mukavemet_final_ptr,mukavemet_proje_ptr);
						break;

				case 3: cout << "Boşluk bırakarak sırasıyla vize, final, proje 1 ve proje 2 notlarını girin." << endl;
						cin >> olasilik_vize >> olasilik_final >> olasilik_proje >> olasilik_proje2;
						OLASILIKVEISTATISTIK(olasilik_vize_ptr,olasilik_final_ptr,olasilik_proje_ptr,olasilik_proje2_ptr);
						break;

				case 4: cout << "Boşluk bırakarak sırasıyla quiz, sunum, rapor ve yoklama notlarını girin." << endl;
						cin >> yapi_bilgisi_quiz >> yapi_bilgisi_sunum >> yapi_bilgisi_rapor >> yapi_bilgisi_yoklama;
						YAPIBILGISI(yapi_bilgisi_quiz_ptr,yapi_bilgisi_sunum_ptr,yapi_bilgisi_rapor_ptr,yapi_bilgisi_yoklama_ptr);
						break;
				
				case 5: cout << "Boşluk bırakarak sırasıyla vize, final, sunum ve rapor notlarını girin." << endl;
						cin >> jeoloji_vize >> jeoloji_final >> jeoloji_sunum >> jeoloji_rapor;
						JEOLOJI(jeoloji_vize_ptr,jeoloji_final_ptr,jeoloji_sunum_ptr,jeoloji_rapor_ptr);
						break;

				case 6: cout << "Boşluk bırakarak sırasıyla vize, final ve proje notlarını girin." << endl;
						cin >> secmeli_vize >> secmeli_final >> secmeli_rapor;
						SECMELI(secmeli_vize_ptr,secmeli_final_ptr,secmeli_rapor_ptr);
						break;

				case 7: cout << "Boşluk bırakarak sırasıyla sunum, rapor ve quiz notlarını girin." << endl;
						cin >> malzeme_bilimi_sunum >> malzeme_bilimi_rapor >> malzeme_bilimi_quiz;
						MALZEME_BILIMI(malzeme_bilimi_sunum_ptr,malzeme_bilimi_rapor_ptr,malzeme_bilimi_quiz_ptr);
						break;
						}
		}else 
			cout << "yanlış girdi" << endl;
}
return 0;
}
	