Action()
{
	lr_save_string("http://192.168.149.131:8080/appform/ws","uurl");
 	  		
	web_reg_save_param("apitoken",
		"LB={\"token\":\"",
		"RB=\"}]}",
		"Search=Body",
		LAST);
	
	//��¼appform
	web_rest("GET: {uurl}/login?username=jhadmin&p...",
		"URL=\{uurl\}/login?username=jhadmin&password=Juzl150702",
		"Method=GET",
		"Snapshot=t26466.inf",
		LAST);
    lr_output_message("�ɹ����tokenΪ :%s",lr_eval_string("��¼�ɹ�"));

   		 	
	
	//��ȡ�ļ��б� [dir]
	web_rest("GET: {uurl}/filelist?dir=...",
		"URL=\{uurl\}/filelist?dir=/apps/&token={apitoken}",
		"Method=GET",
		"Snapshot=t586414.inf",
		LAST);

   		 
	/* Iframe ҳ�漯�� */
	//��ҵ����
//	web_rest("GET: uurl/jobManagement...",
//		"URL=uurl/jobManagement?token={apitoken}",
//		"Method=GET",
//		"Snapshot=t605626.inf",
//		LAST);
	
	//�Ự����
//		web_rest("GET: uurl/desktopManage...",
//		"URL=uurl/desktopManagement?token={apitoken}",
//		"Method=GET",
//		"Snapshot=t492053.inf",
//		LAST);
	/* Iframe ҳ�漯�� */



	
	/*���ݹ�����*/
	//��ѯappformӦ��url [jobmana��desktopmana��spoolermana]
	web_rest("GET: {uurl}/url?appname=w...",
		"URL=\{uurl\}/url?appname=desktopmana&token={apitoken}",
		"Method=GET",
		"Snapshot=t339622.inf",
		LAST);
	
	//��ѯappform����Ӧ��
	web_rest("GET: {uurl}/applist?token...",
		"URL=\{uurl\}/applist?token={apitoken}",
		"Method=GET",
		"Snapshot=t987300.inf",
		LAST);

	//�������棬����VNC�ļ�����
	web_rest("GET: {uurl}/desktopStar...",
		"URL=\{uurl\}/desktopStart?os=linux&appid=linux&resource=linux&protocol=vnc&token={apitoken}",
		"Method=GET",
		"Snapshot=t3162.inf",
		LAST);
	//�������棬����jhapp�ļ�
	web_rest("GET: {uurl}/desktopStart?o...",
		"URL=\{uurl\}/desktopStart?os=linux&appid=gedit&resource=linux&protocol=jhapp&token={apitoken}",
		"Method=GET",
		"Snapshot=t424085.inf",
		LAST);

	//spooler/purge���ù���ʱ��ɾ������Ŀ¼
	
	web_rest("GET: {uurl}/spooler/purge...",
		"URL=\{uurl\}/spooler/purge?id=3509&expiration_time=2017-05-19&token={apitoken}",
		"Method=GET",
		"Snapshot=t475577.inf",
		LAST);

	
	//spooler/del����ɾ������Ŀ¼
	web_rest("GET: {uurl}/spooler/del/3...",
		"URL=\{uurl\}/spooler/del/3509?token={apitoken}",
		"Method=GET",
		"Snapshot=t630954.inf",
		LAST);

	
	//��������Ŀ¼���Ʋ�ѯ����Ŀ¼�б�
	web_rest("GET: {uurl}/spoolersbynam...",
		"URL=\{uurl\}/spoolersbyname?name=op_20170314103817&token={apitoken}",
		"Method=GET",
		"Snapshot=t514698.inf",
		LAST);

	
	//������ҵid�б��ѯ����Ŀ¼�б�
	
	web_rest("GET: {uurl}/spoolersbyid?...",
		"URL=\{uurl\}/spoolersbyid?ids=3615,3616&token={apitoken}",
		"Method=GET",
		"Snapshot=t123232.inf",
		LAST);

	//������ҵid��ѯ����Ŀ¼��Ϣ
	web_rest("GET: {uurl}/spooler/3616?...",
		"URL=\{uurl\}/spooler/3616?token={apitoken}",
		"Method=GET",
		"Snapshot=t406116.inf",
		LAST);

	//���ݵ�ǰ�û�scope��ѯ����Ŀ¼�б�
	web_rest("GET: {uurl}/spoolers?toke...",
		"URL=\{uurl\}/spoolers?token={apitoken}",
		"Method=GET",
		"Snapshot=t466324.inf",
		LAST);

	/*  ���ݹ�����  */
	
	/*�ļ�����*/
	//�ļ�����
	web_rest("GET: {uurl}/filedownload?...",
		"URL=\{uurl\}/filedownload?path=/apps/doc/http.jmx&token={apitoken}",
		"Method=GET",
		"Snapshot=t321976.inf",
		LAST);

	//�����ļ�
	web_rest("GET: {uurl}/copyfile?sour...",
		"URL=\{uurl\}/copyfile?source_file_name=/apps/doc/http.jmx&target_file_name=/apps/jhappform/spoolers/cop&token={apitoken}",
		"Method=GET",
		"Snapshot=t142943.inf",
		LAST);
	
	
	//�������ļ� old_file_name��new_file_name
	web_rest("GET: {uurl}/renamefile?ol...",
		"URL=\{uurl\}/renamefile?old_file_name=/apps/doc/linux_ѧϰ�ʼ�03.txt&new_file_name=/apps/doc/linux_ѧϰ�ʼ�03.md&token={apitoken}",
		"Method=GET",
		"Snapshot=t711697.inf",
		LAST);
	
	//ɾ���ļ� file_name
	web_rest("GET: {uurl}/deletefile?fi...",
		"URL=\{uurl\}/deletefile?file_name=/apps/doc/linux_ѧϰ�ʼ�03.md&token={apitoken}",
		"Method=GET",
		"Snapshot=t953451.inf",
		LAST);
	/*�ļ�������*/

	//Э��ģʽ��������
	web_rest("GET: {uurl}/desktop/sha...",
		"URL=\{uurl\}/desktop/share?id=4901475279913&observer=user1%EF%BC%8Cuser2&token={apitoken}",
		"Method=GET",
		"Snapshot=t299420.inf",
		LAST);
	//�۲�ģʽ��������
	web_rest("GET: {uurl}/desktop/sha...",
		"URL=\{uurl\}/desktop/share?id=4901475279913&observer=user1%EF%BC%8Cuser2&token={apitoken}",
		"Method=GET",
		"Snapshot=t759996.inf",
		LAST);
	//ȡ�����湲��
	web_rest("GET: [uurl}/desktop/sha...",
		"URL=\{uurl\}/desktop/share?id=15789515646293&observer=sshs&token={apitoken}",
		"Method=GET",
		"Snapshot=t65306.inf",
		LAST);
	//�ر�����
	web_rest("GET: {uurl}/desktopClos...",
		"URL=\{uurl\}/desktopClose?id=4901475279913&token={apitoken}",
		"Method=GET",
		"Snapshot=t230513.inf",
		LAST);
	//�����������Ʋ�ѯ�����б�
	web_rest("GET: {uurl}/desktopsbyn...",
		"URL=\{uurl\}/desktopsbyname?name=linux%E6%A1%8C%E9%9D%A2&token={apitoken}",
		"Method=GET",
		"Snapshot=t373108.inf",
		LAST);
	
	//��������id�б��ѯ�����б�
	web_rest("GET: {uurl}/desktopsbyi...",
		"URL=\{uurl\}/desktopsbyid?ids=60885091623519,60885091623519&token={apitoken}",
		"Method=GET",
		"Snapshot=t636573.inf",
		LAST);
	//��������id��ѯ����
	web_rest("GET: {uurl}/desktop/608...",
		"URL=\{uurl\}/desktop/60885091623519?token={apitoken}",
		"Method=GET",
		"Snapshot=t836310.inf",
		LAST);
	//���ݵ�ǰ�û�scope��ѯ�����б�
	web_rest("GET: {uurl\}/desktops?to...",
		"URL=\{uurl\}/desktops?token={apitoken}",
		"Method=GET",
		"Snapshot=t738923.inf",
		LAST);
	/*��ά�������*/
	
	//������ҵid?����ͼ�λ���ؽ��� 
	web_rest("GET: {uurl}/job/startMo...",
		"URL=\{uurl\}/job/startMonitor?jobid=3509&token={apitoken}",
		"Method=GET",
		"Snapshot=t731734.inf",
		LAST);

	//������ҵid��ѯ��ҵ�����ļ��б�
	web_rest("GET: {uurl}/jobs/flistb...",
		"URL=\{uurl\}/jobs/flistbyid/3510?token={apitoken}",
		"Method=GET",
		"Snapshot=t840529.inf",
		LAST);
	
	//jobs/hist���������ҵ[ id=list ]
	web_rest("GET: {uurl}/jobs/hist?i...",
		"URL=\{uurl\}/jobs/hist?id=3510,3511&token={apitoken}",
		"Method=GET",
		"Snapshot=t359230.inf",
		LAST);

	//job/hist����������ҵ
	web_rest("GET: {uurl}/job/hist/35...",
		"URL=\{uurl\}/job/hist/3510?token={apitoken}",
		"Method=GET",
		"Snapshot=t492841.inf",
		LAST);

	//job/{action}����������ҵ [action = kill��peek��resume��stop��top��bot]
	web_rest("GET: {uurl}/jobs/stop?i...",
		"URL=\{uurl\}/jobs/stop?id=3512,3513&token={apitoken}",
		"Method=GET",
		"Snapshot=t929461.inf",
		LAST);
	web_rest("GET: {uurl}/jobs/kill?i...",
		"URL=\{uurl\}/jobs/kill?id=3512,3513&token={apitoken}",
		"Method=GET",
		"Snapshot=t116759.inf",
		LAST);
	web_rest("GET: {uurl}/jobs/resume...",
		"URL=\{uurl\}/jobs/resume?id=3518,3519&token={apitoken}",
		"Method=GET",
		"Snapshot=t568525.inf",
		LAST);
	web_rest("GET: {uurl}/jobs/peek?i...",
		"URL=\{uurl\}/jobs/peek?id=3518,3519&token={apitoken}",
		"Method=GET",
		"Snapshot=t26926.inf",
		LAST);

	web_rest("GET: {uurl}/jobs/bot?id...",
		"URL=\{uurl\}/jobs/bot?id=3510&token={apitoken}",
		"Method=GET",
		"Snapshot=t91877.inf",
		LAST);

	web_rest("GET: {uurl}/jobs/top?id...",
		"URL=\{uurl\}/jobs/top?id=3510&token={apitoken}",
		"Method=GET",
		"Snapshot=t434786.inf",
		LAST);

	//������ҵ״̬��ѯ��ҵ [exit,pend,done,run,psusp,ususp]
	web_rest("GET: {uurl}/jobsbystatu...",
		"URL=\{uurl\}/jobsbystatus/exit?token={apitoken }",
		"Method=GET",
		"Snapshot=t733851.inf",
		LAST);

	web_rest("GET: {uurl}/jobsbystatu...",
		"URL=\{uurl\}/jobsbystatus/pend?token={apitoken}",
		"Method=GET",
		"Snapshot=t249784.inf",
		LAST);

	web_rest("GET: {uurl}/jobsbystatu...",
		"URL=\{uurl\}/jobsbystatus/run?token={apitoken}",
		"Method=GET",
		"Snapshot=t755064.inf",
		LAST);

	web_rest("GET: {uurl}/jobsbystatu...",
		"URL=\{uurl\}/jobsbystatus/psusp?token={apitoken}",
		"Method=GET",
		"Snapshot=t720844.inf",
		LAST);

	web_rest("GET: {uurl}/jobsbystatu...",
		"URL=\{uurl\}/jobsbystatus/ususp?token={apitoken}",
		"Method=GET",
		"Snapshot=t780832.inf",
		LAST);

	//������ҵ���Ʋ�ѯ��ҵ
	web_rest("GET: {uurl}/jobsbyname?...",
		"URL=\{uurl\}/jobsbyname?name=up&token={apitoken}",
		"Method=GET",
		"Snapshot=t632703.inf",
		LAST);

	//������ҵid�б��ѯ��ҵ�б�
	web_rest("GET: {uurl}/jobsbyid?id...",
		"URL=\{uurl\}/jobsbyid?id=3532,3533&token={apitoken}",
		"Method=GET",
		"Snapshot=t624500.inf",
		LAST);
	//������ҵid��ѯ��ҵ
	web_rest("GET: {uurl}/job/3532?to...",
		"URL=\{uurl\}/job/3532?token={apitoken}",
		"Method=GET",
		"Snapshot=t18998.inf",
		LAST);
	//�����û���ǰscope��ѯ��ҵ
	web_rest("GET: {uurl}/jobs?token=...",
		"URL=\{uurl\}/jobs?token={apitoken}",
		"Method=GET",
		"Snapshot=t862588.inf",
		LAST);

	//ע���û�[username,chusername,password; phone,mail,dep,org]
	web_rest("GET: {uurl}/register?us...",
		"URL=\{uurl\}/register?username=upl&chusername=opp&password=Jhadmin123&token={apitoken}",
		"Method=GET",
		"Snapshot=t791210.inf",
		LAST);

	//ping ��������Ƿ����
	web_rest("GET: {uurl}/ping?token=...",
		"URL=\{uurl\}/ping?token={apitoken}",
		"Method=GET",
		"Snapshot=t958945.inf",
		LAST);
	//�ύfluent��ҵ [params={"JH_CAS":"/home/STRESSDOMAIN/jhadmin/fluent-test.cas","JH_RELEASE":"14.5.0","JH_GUI_ENABLED":"false","JH_PROJECT":"test"}]
	web_rest("GET: {uurl}/jsub?appid=flu...",
		"URL=\{uurl\}/jsub?appid=fluent&params={%22JH_CAS%22:%22/home/STRESSDOMAIN/jhadmin/fluent-test.cas%22,%22JH_RELEASE%22:%2214.5.0%22,%22JH_GUI_ENABLED%22:%22false%22,%22JH_PROJECT%22:%22test%22}&token={apitoken}",
		"Method=GET",
		"Snapshot=t159881.inf",
		LAST);

	
	//ע��
	web_rest("GET: {uurl}/logout?toke...",
		"URL=\{uurl\}/logout?token={apitoken}",
		"Method=GET",
		"Snapshot=t716756.inf",
		LAST);

	
	return 0;

}


