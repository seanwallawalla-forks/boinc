// This file is part of BOINC.
// http://boinc.berkeley.edu
// Copyright (C) 2010-2015 University of California
//
// BOINC is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// BOINC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with BOINC.  If not, see <http://www.gnu.org/licenses/>.

#ifndef _BROWSERCTRLUI_WIN_H_
#define _BROWSERCTRLUI_WIN_H_

/////////////////////////////////////////////////////////////////////////////
// CHTMLBrowserHostUI class

class ATL_NO_VTABLE CHTMLBrowserHostUI :
	public IDispatchImpl<IHTMLBrowserHostUI, &IID_IHTMLBrowserHostUI, &LIBID_HTMLGfxLib, 0xFFFF, 0xFFFF>,
	public CComObjectRootEx<CComSingleThreadModel>
{
BEGIN_COM_MAP(CHTMLBrowserHostUI)
	COM_INTERFACE_ENTRY(IHTMLBrowserHostUI)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()
public:
	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

    STDMETHOD(Log)(BSTR strMessage);
    STDMETHOD(get_IsScreensaver)(BOOL* pVal);
    STDMETHOD(put_IsScreensaver)(BOOL newVal);
    STDMETHOD(get_ApplicationName)(BSTR* pVal);
    STDMETHOD(put_ApplicationName)(BSTR newVal);
    STDMETHOD(get_ApplicationVersion)(LONG* pVal);
    STDMETHOD(put_ApplicationVersion)(LONG newVal);
    STDMETHOD(get_WorkunitName)(BSTR* pVal);
    STDMETHOD(put_WorkunitName)(BSTR newVal);
    STDMETHOD(get_ResultName)(BSTR* pVal);
    STDMETHOD(put_ResultName)(BSTR newVal);
    STDMETHOD(get_TeamName)(BSTR* pVal);
    STDMETHOD(put_TeamName)(BSTR newVal);
    STDMETHOD(get_UserName)(BSTR* pVal);
    STDMETHOD(put_UserName)(BSTR newVal);
    STDMETHOD(get_UserCreditTotal)(DOUBLE* pVal);
    STDMETHOD(put_UserCreditTotal)(DOUBLE newVal);
    STDMETHOD(get_UserCreditAverage)(DOUBLE* pVal);
    STDMETHOD(put_UserCreditAverage)(DOUBLE newVal);
    STDMETHOD(get_HostCreditTotal)(DOUBLE* pVal);
    STDMETHOD(put_HostCreditTotal)(DOUBLE newVal);
    STDMETHOD(get_HostCreditAverage)(DOUBLE* pVal);
    STDMETHOD(put_HostCreditAverage)(DOUBLE newVal);

    BOOL m_bScreensaver;
    CComBSTR m_strApplicationName;
    LONG m_lApplicationVersion;
    CComBSTR m_strWorkunitName;
    CComBSTR m_strResultName;
    CComBSTR m_strTeamName;
    CComBSTR m_strUserName;
    double m_dUserCreditTotal;
    double m_dUserCreditAverage;
    double m_dHostCreditTotal;
    double m_dHostCreditAverage;
};

#endif