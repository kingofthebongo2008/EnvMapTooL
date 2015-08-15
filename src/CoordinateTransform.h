#pragma once

enum ENVMAP_FACES
{
	ENVMAP_POSITIVEX,
	ENVMAP_NEGATIVEX,
	ENVMAP_POSITIVEY,
	ENVMAP_NEGATIVEY,
	ENVMAP_POSITIVEZ,
	ENVMAP_NEGATIVEZ
};

//������� �������������� ������� ��������� � ���������� ���������� ��� ����������� ��������
double2 v2spheruv(double3 IN);
bool spheruv2v(double2 IN, double3& v);

//������� �������������� ������� ��������� � ���������� ���������� ��� ���������� ��������
double2 scube2uv(double3 IN);

//������� �������������� ������� ��������� � ���������� ���������� ��� ���������� ��������
double2 cube2uv(double3 IN, int* n);
double3 uv2cube(double2 uv, int n);