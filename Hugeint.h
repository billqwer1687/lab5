const int len=200;
class Hugeint
{
	public:
		Hugeint(int R);
		Hugeint(){}
		Hugeint operator +(Hugeint &R);
		    
		Print();

			 
		int Len(){return m_len;}
	private:
		int m_sign;    
		int m_len;
		int m_num;
};
