
#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
	private:
		std::string _name;
		std::string	_colour;
		int _height;
		int	_hoofSize;

		static int instNbr;

	public:
		explicit Pony( const std::string &name );
		Pony();
		~Pony();

		void setName(const std::string& name);
		void setColour(const std::string& colour);
		void setHeight(int height);
		void setHoofSize(int size);

		const std::string & getName() const;
		const std::string& getColour() const;
		int getHeight() const;
		int getHoofSize() const;

		void ponyDescribe() const;
		void changeColour(const std::string& colour);

		static int getInstNbr();
};


#endif
