#define _CRT_SECURE_NO_WARNINGS

#define ��_����_�������_����� setlocale(0, "")

#define ������ >=
#define ������ <=
#define ���� >
#define ���� <
#define ��� ==
#define ����� =
#define �� +
#define ��� -
#define ��� *
#define ���� /
#define � ;
#define ����� true
#define ����� false
#define ���� 0

// if () { } else if () { } else { }
#define ���� if( 
#define ����� ){
#define ����� }else if(
#define ���� }else{
#define ����� }
// ���� � ��� 1 ����� � ����� 1 ����� � ��� 2 ����� � ����� 4 ���� ����� 0 �����

// while () {} do{} while() for {}
#define ������ while(
#define ����� do{
#define ������ }while(
#define ���� );
#define ������ for(
#define ������ goto
#define ��� exit

// ������ � ���� 10 ����� � ����� � �� 1 �����
// ����� � ����� � ��� 1 ������ � ������ 0 ����

// int float char etc
#define ���� int
#define ������ float
#define ���������� double
#define ��� char
#define ��������� void

// I/O
#define ����� printf
#define ������� scanf

// ��������� - ��� �������, ������� ��� ������ �� ���, ������:
#define ������� int 
#define ������ void 
#define ������� main(){
#define ������� return
// ������� ������� ������� 0 � �����


#include <stdio.h>
#include <locale.h>

������� �������

��_����_�������_����� �

���� x = 0 �

�����("������� ���� ���� ,����� ���? ") �
�������("%i", &x) �
�����("���� %i ���, �����", x) �

�����