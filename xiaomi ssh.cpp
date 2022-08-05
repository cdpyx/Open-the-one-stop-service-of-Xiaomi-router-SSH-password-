
//头文件 Header File
#include <string>
#include <bits/stdc++.h>
using namespace std;
//-------------------------------------------------------------------------
//主函数 Principal function
int main() {
	bool code1=1; 
	while(code1)
	{ //模式选择 Mode Selection
		cout>>"本程序全程在本地运行，其代码完全开源可以去https://github.com/cdpyx/Open-the-one-stop-service-of-Xiaomi-router-SSH-password-/查看谢谢" <<endl<<"This program runs locally and its code is completely open source https://github.com/cdpyx/Open-the-one-stop-service-of-Xiaomi-router-SSH-password-/ Check it out, thank you!";
		code1 = 0;
		cout<<"请选择业务类型 Please select a business type："<<endl<<"1.生成SSH开启连接"<<"  "<<"2.生成SSH改密码连接"<<"  "<<"3.生成关闭SSH连接"<<endl<<"1. Generate SSH to open connection 2. Generate SSH password change connection 3. Generate Close SSH Connections";
		int mode;
		string network,stok;
		cout<<endl<<"请输入 Please enter:";
		cin>>mode;
		if(mode!=(1||2||3))
		{
			cout<<"功能选择错误 Function selection error";
		
		}
		if(mode==1)
		{	
	
			//条款 clause

			cout<<endl<<"你好，开启SSH代表自愿放弃保修，如果你自愿放弃保修并同意条款请输入1后按Enter，否则请直接回车"<<endl<<"Hello, opening SSH means voluntary abandonment of warranty. If you voluntarily abandon warranty and agree to the terms, please enter 1 and press Enter, otherwise please return directly";	
			cout<<endl<<"开启小米路由器的SSH功能之后用户可以获得root权限, root之后用户的各种操作将有可能会导致路由器系统不稳定或软硬件故障。对于用户主动选择开启上述功能而可能产生的后果,小米公司将不会承担任何法律责任(包括但不限于路由器中数据的失、软硬件损坏)。同时,用户开启此功能即代表主动放弃小米公司提供的保修服务,请您在开启本功能之前慎重考虑!<<endl<<"After turning on the SSH function of the millet router, the user can get root privilege. After root, various operations of the user may cause the router system instability or hardware and software failure. Millet will not be legally liable for any consequences (including, but not limited to, loss of data in the router, software and hardware damage) that may result from the user's active choice to turn on the above functions. At the same time, users turning on this feature means voluntarily discarding the warranty service provided by millet company, please consider carefully before turning on this feature!(来自miweifi.com From miweifi.com)";
			system("cls")
			mode = 0;
			cout<<endl;	
			cin>>mode;
			if(mode==1)
			{//输入参数 
				cout<<endl<<"请输入网段：";
				cin>>network;
				cout<<endl<<"请输入STOK："; 
				cin>>stok;
				cout<<endl<<"链接是："<<"http:// "<<network<<"/cgi-bin/luci/;stok="<<stok<<"/api/misystem/set_config_iotdev?bssid=Xiaomi&user_id=longdike&ssid=-h%3B%20nvram%20set%20ssh_en%3D1%3B%20nvram%20commit%3B%20sed%20-i%20's%2Fchannel%3D.*%2Fchannel%3D%5C%22debug%5C%22%2Fg'%20%2Fetc%2Finit.d%2Fdropbear%3B%20%2Fetc%2Finit.d%2Fdropbear%20start%3B";
			}
		} 
		if(mode==2)
		{//参数 
			cout<<endl<<"请输入网段：";
			cin>>network;
			cout<<endl<<"请输入STOK：";
			cin>>stok;
			string d1,d2;//密码验证 
			cout<<endl<<"请输入密码"; 
			cin>>d1;
			cout<<"请再次输入密码";
			cin>>d2;
			while(d1!=d2||d1=="")
			{
				if(d1!=d2)
				{
					cout<<"两次输入不一样，请重新输入 ";
				}
				else
				cout<<" 密码不能为空";
				d1 = "";
				d2 = "";
				cout<<endl<<"请输入密码" ;
				cin>>d1;
				cout<<"请再次输入密码";
				cin>>d2;
			}
			cout<<endl<<"链接是："<<"http:// "<<network<<"/cgi-bin/luci/;stok="<<stok<<"/api/misystem/set_config_iotdev?bssid=Xiaomi&user_id=longdike&ssid=-h%3B%20echo%20-e%20'"<<d1<<"%5Cn"<<d2<<"'%20%7C%20passwd%20root%3B";
		}
		if(mode==3)
		{
		//参数
			cout<<endl<<"请输入网段：";
			cin>>network;
			cout<<endl<<"请输入STOK：";
			cin>>stok;
			cout<<endl<<"链接是："<<"http:// "<<network<<"/cgi-bin/luci/;stok="<<stok<<"/api/misystem/set_config_iotdev?bssid=Xiaomi&user_id=longdike&ssid=-h%3B%20nvram%20set%20ssh_en%3D0%3B%20nvram%20commit%3B%20sed%20-i%20's%2Fchannel%3D.*%2Fchannel%3D%5C%22debug%5C%22%2Fg'%20%2Fetc%2Finit.d%2Fdropbear%3B%20%2Fetc%2Finit.d%2Fdropbear%20start%3B"
			;
			system("cls");
			cout<<"继续使用本程序吗？"<<endl<<"1.要 2.不要";
			cin>>code1;
			code1 = 1;
			system("cls");
			 
		}
	}
	return 0;
}

