#include<iostream>
#include<string>
using namespace std;
nt main(void)
{
	run math;
	int p = 0, q = 0, r = 0;
	cout << "p q r" << "     last" << endl << endl;
	cout << "****************" << endl;

	for (int i = 0; i < 9; i++)
	{
		for (p = 0; p < 2; p++) {
			q = 0;
			for (q = 0; q < 2; q++) {
				r = 0;
				for (r = 0; r < 2; r++)
				{
					if (r + q * 2 + p * 4 == i) {
						cout << " " << p << " " << q << " " << r;
						math.all_in(p, q, r);
					}

				}

			}

		}


	}

}
class run
{
private:
	int p;
	int q;
	int r;

public:
	run() = default;
	run(int p, int q, int r)
	{
		this->p = p;
		this->q = q;
		this->r = r;
	}
	int first_run(int, int);
	int second_run(int, int);
	int last_run(int, int);
	void all_in(int, int, int);
};
int run::first_run(int p, int q)
{
	int back = 0;
	if (p == 1 && q == 0)
		back = 0;
	else
		back = 1;
	return back;
}

int run::second_run(int p, int r)
{
	return (!p && !r);
}
int run::last_run(int f, int s)
{
	if (f == 1 && s == 0)
		return 0;
	else
		return 1;
}
void run::all_in(int p, int q, int r)
{
	int temp_1, temp_2, last;
	temp_1 = first_run(p, q);
	temp_2 = second_run(p, r);
	last = last_run(temp_1, temp_2);
	cout << "     " << last << endl;
}
i