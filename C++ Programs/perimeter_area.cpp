#include <iostream>
#include <string>
using namespace std;

class area{
	public:
		int rectangle(int l, int b){
			int area = (l*b);
			return area; 
		}

		int square(int side){
			int area = (side*side);
			return area;
		}

		int triangle(int base, int height){
			int area = (base*height)/2;
			return area;
		}

		int parallelogram(int b, int h){
			int area = (b*h);
			return area;
		}

		int circle(int radius){
			int area = ((22/7)*(radius*radius));
			return area;
		}
};

class perimeter{

    public:
	    int perim=1;
    
	    int rectangle(int l, int b){
	    	perim = (2*(l+b));
	    	return perim;
	    }
    
	    int square(int side){
	    	perim = (4*side);
	    	return perim;
	    }
    
	    int triangle(int s1, int s2, int s3){
	    	perim=(s1+s2+s3);
			return perim;
	    }

		int n_s_p(int number_of_sides, int side_length){
			perim = (number_of_sides*side_length);
			return perim;
		}

		int circle(int radius){
			perim = ((2)*(22/7)*(radius));
			return perim;
		}
};

int main(){
	//startup
	cout<<"Welcome To Perimeter And Area Calculator :)"<<endl;
	cout<<"Warning!! The Value Given By You Must Not Contain Unit!!"<<endl;
	cout<<"Area And Circumference Of Circle Can Be Appoximate!!"<<endl;
	cout<<endl;

	//area or perimeter
	cout<<"What You Want To Find ?"<<endl;
	cout<<"1.Area          2.Perimeter"<<endl;
	int opt;
	cout<<"Option: ";
	cin>>opt;

	//for area->
	if(opt==1){
		cout<<"Shape: "<<endl;
		cout<<"(a)Rectangle"<<endl;
		cout<<"(b)Square"<<endl;
		cout<<"(c)Triangle"<<endl;
		cout<<"(d)Parallelogram"<<endl;
		cout<<"(e)Circle"<<endl;
		string shape;
		cout<<"Option: ";
		cin>>shape;

		area doer;

		if(shape=="a"){
			int l, b;
			cout<<"Length: ";
			cin>>l;
			cout<<"Breadth: ";
			cin>>b;
			cout<<"Area(Without Unit): "<<doer.rectangle(l, b);

		}else if(shape=="b"){
			int s;
			cout<<"Side: ";
			cin>>s;
			cout<<"Area(Without Unit): "<<doer.square(s);

		}else if(shape=="c"){
			int b, h;
			cout<<"Base: ";
			cin>>b;
			cout<<"Height: ";
			cin>>h;
			cout<<"Area(Without Unit): "<<doer.triangle(b, h);

		}else if(shape=="d"){
			int b, h;
			cout<<"Base: ";
			cin>>b;
			cout<<"Height: ";
			cin>>h;
			cout<<"Area(Without Unit): "<<doer.parallelogram(b, h);

		}else if(shape=="e"){
			int r;
			cout<<"Radius: ";
			cin>>r;
			cout<<"Area(Without Unit): "<<doer.circle(r);
		}else{
			cout<<"Not Recognised!!"<<endl;
			cout<<"Please Restart The Program :("<<endl;
		}
	}


	if(opt==2){
		cout<<"Shape: "<<endl;
		cout<<"(a)Rectangle"<<endl;
		cout<<"(b)Square"<<endl;
		cout<<"(c)Triangle"<<endl;
		cout<<"(d)N Sided Polygon"<<endl;
		cout<<"(e)Circle"<<endl;
		cout<<"Option: ";

		string shp;
		cin>>shp;
	
		perimeter doer2;
		
		if(shp=="a"){
			int l, b;
			cout<<"Length: ";
			cin>>l;
			cout<<"Breadth: ";
			cin>>b;
			cout<<"Perimeter(Without Unit): "<<doer2.rectangle(l, b);

		}else if(shp=="b"){
			int side;
			cout<<"Side Of Square: ";
			cin>>side;
			cout<<"Perimeter(Without Unit): "<<doer2.square(side);

		}else if(shp=="c"){
			int s1, s2, s3;
			cout<<"All 3 Sides Of Triangle: ";
			cin>>s1>>s2>>s3;
			cout<<"Perimeter(Without Unit): "<<doer2.triangle(s1, s2, s3);

		}else if(shp=="d"){
			int sides, side_len;
			cout<<"Number Of Sides: ";
			cin>>sides;
			cout<<"Length Of One Side: ";
			cin>>side_len;
			cout<<"Perimeter(Without Unit): "<<doer2.n_s_p(sides, side_len);

		}else if(shp=="e"){
			int r;
			cout<<"Radius: ";
			cin>>r;
			cout<<"Circumference(Without Unit): "<<doer2.circle(r);

		}else{
			cout<<"Not Recognised!!"<<endl;
			cout<<"Please Restart The Program :("<<endl;
		}
	}else{
		cout<<"Not Recognised!!"<<endl;
		cout<<"Please Restart The Program :("<<endl;
	}

	return 0;
}
