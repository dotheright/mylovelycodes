public class Date{
	int year;
	int month;
	int day;

	Date(int d_year , int d_month ,int d_day)
	{
		year =d_year ;
		month = d_month;
		day =  d_day;
	}

	void setYear(int Year){
		this.year = Year;
	}

	void setMonth(int Month){
		this.month =Month;
	}
	void setDay(int Day){
		this.day =Day;
	}
	int getYear(){
		return this.year;
	}
	int getMonth(){
		return this.month;
	}
	int getDay(){
	    return this.day;
	}
}
