// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WE_EXPORTS
#define WE_API __declspec(dllexport)
#else
#define WE_API __declspec(dllimport)
#endif

// �����Ǵ� WE.dll ������
class WE_API CWE {
public:
	CWE(void);
	// TODO:  �ڴ�������ķ�����
};

extern WE_API int nWE;

WE_API int fnWE(void);
class WE_API FAC {
public:
	float convert(float deg);
};
