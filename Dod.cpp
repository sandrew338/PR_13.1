#include "Dod.h"
#include "Var.h" // ��������� ������ ���������� ������
using namespace nsVar;
void nsDod::dod() {
	a *= 1.0 * (x - 1) * 1.0 * n / (1.0 * (n + 1) * x);
}