// kadai.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
//#include <iostream>
//第１問
//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはpublicで作成し、外部で値を設定して、
//値が表示されることを確認してください。
//
//struct Vector2
//{
//public:
//	int x;
//	int y;
//};
//int main()
//{
//	Vector2 vector2;
//	vector2.x = 1;
//	vector2.y = 5;
//
//	printf("%d", vector2.x + vector2.y);
//	return 0;
//}
//
//第２問
//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。
//struct Vector2
//{
//private:
//
//	int x;
//	int y;
//
//public:
//	int Getx() { return x; }
//	int Gety() { return y; }
//
//	int Setx(int a) { return x = a; }
//	int Sety(int a) { return y = a; }
//};
//
//int main()
//{
//	Vector2 vector2;
//
//	vector2.Setx(5);
//	vector2.Sety(4);
//
//	printf("%d", vector2.Getx() + vector2.Gety());
//	return 0;
//}

//第３問
//x, y, z座標を持つ構造体Vector3を
//作ってください。
//x, y, zはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。

//struct Vector3
//{
//private:
//
//	int x;
//	int y;
//	int z;
//}
//	int Getx() { return x; }
//	int Gety() { return y; }
//	int Getz() { return z; }
//
//	int Setx(int a) { return x = a; }
//	int Sety(int a) { return y = a; }
//	int Setz(int a) { return z = a; }
//
//int main()
//{
//	Vector3 vector3;
//
//	vector3.Setx(1);
//	vector3.Sety(3);
//	vector3.Setz(5);
//	printf("%d", vector3.Getx() + vector3.Gety() + vector3.Getz());
//
//	return 0;
//}
