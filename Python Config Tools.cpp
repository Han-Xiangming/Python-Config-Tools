#include <iostream>
using namespace std;

int main()
{
    int choose,choose1,choose2,choose3;
begin:
    system("cls");
    system("color 0a");
    cout << "Welcome to Python Config Tools" << endl;
    cout << "           " << endl;
    cout << "1.Change the PIP package source to Tsinghua" << endl;
    cout << "2.Update PIP" << endl;
    cout << "3.Install the library" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "4.Exit" << endl;
    cout << "               " << endl;
    cout << "Please enter the serial number: ";
    cin >> choose;
    system("cls");
    switch(choose)
    {
    case 1:
    {
        system("pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple");
        cout << "Configuration completes"<< endl;
        system("pause");
        goto begin;
    }
    break;
    case 2:
    {
        system("python -m pip install --upgrade pip");
        cout << "Upgrade PIP completes"<< endl;
        system("pause");
        goto begin;
    }
    break;
    case 3:
    {
abc:
        cout << "1.Internet" << endl;
        cout << "2.Data visualization" << endl;
        cout << "--------------------" << endl;
        cout << "3.GO Back" << endl;
        cout << "              " << endl;
        cout << "Please enter the serial number: ";
        cin >> choose1;
        switch(choose1)
        {
        case 1:
        {
back:
            system("cls");
            cout << "1.Flask" << endl;
            cout << "2.pycurl" << endl;
            cout << "3.urllib3" << endl;
            cout << "4.httplib2" << endl;
            cout << "5.RoBoBrowser" << endl;
            cout << "6.MecHanicalSoup" << endl;
            cout << "7.mechanize" << endl;
            cout << "-------------------" <<endl;
            cout << "8.Go Back" << endl;
            cout << "         " << endl;
            cout << "Please enter the serial number: ";
            cin >> choose2;
            cout << "         " << endl;
            switch(choose2)
            {
            case 1:
            {
                system("pip install Flask");
                goto back;
            }
            break;
            case 2:
            {
                system("pip install pycurl");
                goto back;
            }
            break;
            case 3:
            {
                system("pip install urllib3");
                goto back;
            }
            break;
            case 4:
            {
                system("pip install httplib2");
                goto back;
            }
            break;
            case 5:
            {
                system("pip install RoBoBrowser");
                goto back;
            }
            break;
            case 6:
            {
                system("pip install MecHanicalSoup");
                goto back;
            }
            break;
            case 7:
            {
                system("pip install mechanize");
                goto back;
            }
            break;
            case 8:
            {
                system("cls");
                goto abc;
            }
            default:
                goto back;
            }
        }
        break;
        case 2:
        {
back1:
            system("cls");
            cout << "1.Pandas" << endl;
            cout << "2.pyecharts" << endl;
            cout << "3.Matplotlib" << endl;
            cout << "------------" << endl;
            cout << "4.Go Back" << endl;
            cout << "         " << endl;
            cout << "Please enter the serial number:";
            cin >> choose3;
            cout << "         " << endl;
            switch(choose3)
            {
            case 1:
            {
                system("pip install pandas");
                goto back1;
            }
            break;
            case 2:
            {
                system("pip install pyecharts");
                goto back1;
            }
            break;
            case 3:
            {
                system("pip install Matplotlib");
                goto back1;
            }
            break;
            case 4:
            {
                system("cls");
                goto abc;
            }
            default:
                goto back1;
            }
        }
        break;
        case 3:
        {
            goto begin;
        }
        }
    }
    case 4:
    {
        goto end;
    }
    goto begin;
    default:
        system("echo Please enter the correct options&timeout /t 1 /nobreak >nul");
        goto begin;
    }
end:
    system("exit");
    return 0;
}
