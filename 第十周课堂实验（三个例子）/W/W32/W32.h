// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� W32_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// W32_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef W32_EXPORTS
#define W32_API __declspec(dllexport)
#else
#define W32_API __declspec(dllimport)
#endif

// �����Ǵ� W32.dll ������
class W32_API CW32 {
public:
	CW32(void);
	// TODO:  �ڴ�������ķ�����
};

extern W32_API int nW32;

W32_API int fnW32(void);
W32_API int GET();

