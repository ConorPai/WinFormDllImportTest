// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� CPLUSPLUS_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// CPLUSPLUS_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef CPLUSPLUS_EXPORTS
#define CPLUSPLUS_API __declspec(dllexport)
#else
#define CPLUSPLUS_API __declspec(dllimport)
#endif

//C++��
class CTestAdd
{
public:
	int Add(int a, int b);
};

//CAPI
//DllImportֻ�ܵ���CAPI
extern "C"
{
	CPLUSPLUS_API int TestAdd(int a, int b);
};