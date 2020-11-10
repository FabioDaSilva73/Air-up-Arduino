#include<bits/stdc++.h>

///teste

bool eh_primo(int x)
{
	if (x <= 3)
	{
		return true;		
	}
	
	for (int i = 2; i <= x / 2 + 1; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	
	return true;
}

int main(){
    std::cout << "Update" << std::endl;

	int x;
	
	std::cin >> x;

	if (eh_primo(x) == true)
	{
		std::cout << "S" << std::endl;
	}
	
	else
	{
        std::cout << "N" << std::endl;;
    }
}