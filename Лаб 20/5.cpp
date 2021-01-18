#include <iostream>
#include <cmath>

// ���������, ����������� �����
struct point {
    int x;
    int y;
};

// ������������� �������� ������ �����
// ���� ���������� �� ���������, �� ��������, ��� ����� � ���������
std::ostream& operator << (std::ostream& s, const point& p)
{
    s << '(' << p.x << "; " << p.y << ')';
    return s;
}

// ������� ������ ������� �����
void print(point* p, int size) {
    for (int i = 0; i < size; i++) { // ���������� ������ ������ �����
        std::cout << p[i] << ' ';    // ������� i-� ����� ����� ������
    }
    std::cout << std::endl;          // ������� ����� ������
}

// ���������� ���������� ����� ����� ������� �� ������� ��������
double length(const point& A, const point& B) {
    return hypot(A.x - B.x, A.y - B.y);
}

// ���������� ��������� ������������
double perimeter(const point& A, const point& B, const point& C) {
    return length(A, B) + length(B, C) + length(A, C);
}

int main()
{
    const int n = 5;
    point a[n] = { {3,1},{2,2},{4,5},{2,0},{7,8} };
    print(a, n);
    double maxPerimeter = 0;  // ������������ ��������
    double tmpPerimeter = 0;  // ������� ��������, ����� ��� ���� ������� �� ������
    int A, B, C;              // ������ �������� �����

    // � ����� ���������� ������ ����� � ��������� i > j > k

    for (int i = 0; i < n - 2; i++) {                       // 0 <= i < n-2
        for (int j = i + 1; j < n - 1; j++) {               // 1 <= j < n-1
            for (int k = j + 1; k < n; k++) {             // 2 <= k < n
                tmpPerimeter = perimeter(a[i], a[j], a[k]); // ��������� ��������
                if (tmpPerimeter > maxPerimeter) {        // ���� �������� ������ �������������
                    maxPerimeter = tmpPerimeter;          // ���������� ������� ��������
                    A = i;                                // |
                    B = j;                                // | <= ���������� ������ �����
                    C = k;                                // |
                }
            }
        }
    }

    // ������� ������ �����
    std::cout << "Triangle with vertices at points " << A << ", " << B << " and " << C <<
        " has the greatest perimeter.";
}
