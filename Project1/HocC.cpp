#include <iostream>
#include <string>

struct ConNguoi
{
	std::string ho_ten;
	std::string nghe_nghiep;
	int tuoi;
	float chieu_cao;
	float can_nang;
	int so_do_3_vong[3];
};

// void là kieu du lieu khong xac dinh, duoc tra ve theo gia tri ben trong
// Tên hàm + Kieu du lieu và Ten cua tham so
std::string chi_so_BMI(ConNguoi nguoi)
{
	float BMI = nguoi.can_nang / (nguoi.chieu_cao * nguoi.chieu_cao);
	std::string ket_qua;

	if (BMI < 16)
	{
		ket_qua = "gay vl";
	}
	else if (BMI > 20)
	{
		ket_qua = "Beo vll";
	}
	else
	{
		ket_qua = "Dep zai vl";
	}
	return ket_qua;
}

void dong_thoi_gian(ConNguoi nguoi, int nam_troi_qua)
{
	// Bieu thuc khoi tao Bien lap, Bieu thuc Dieu kien lap, Bieu thuc tang bien lap 
	std::string ket_qua = chi_so_BMI(nguoi);
	for (int i = 0; i < nam_troi_qua ; i = i+1 ) 
	{
		nguoi.can_nang = nguoi.can_nang + 2;
		std::cout << nguoi.ho_ten << " " << ket_qua << std::endl;
	}

}


int main()
{

	ConNguoi nguoi;
	nguoi.ho_ten = "Do Trong Tuyen";
	nguoi.nghe_nghiep = "Tester";
	nguoi.tuoi = 26;
	nguoi.can_nang = 60;
	nguoi.chieu_cao = 1.65;
	

	dong_thoi_gian(nguoi, 5);

	return 0;
}