// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WQ_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WQ_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WQ_EXPORTS
#define WQ_API __declspec(dllexport)
#else
#define WQ_API __declspec(dllimport)
#endif

// �����Ǵ� wq.dll ������
class WQ_API Cwq {
public:
	Cwq(void);
	// TODO:  �ڴ�������ķ�����
};

extern WQ_API int nwq;

WQ_API int fnwq(void);
WQ_API int Factorial(int n);
