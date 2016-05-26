// CoordinateSystemDoc.h : interface of the CCoordinateSystemDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_COORDINATESYSTEMDOC_H__2C39FCCB_170F_4291_9CC8_5CC9E7EA0870__INCLUDED_)
#define AFX_COORDINATESYSTEMDOC_H__2C39FCCB_170F_4291_9CC8_5CC9E7EA0870__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCoordinateSystemDoc : public CDocument
{
protected: // create from serialization only
	CCoordinateSystemDoc();
	DECLARE_DYNCREATE(CCoordinateSystemDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCoordinateSystemDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCoordinateSystemDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCoordinateSystemDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COORDINATESYSTEMDOC_H__2C39FCCB_170F_4291_9CC8_5CC9E7EA0870__INCLUDED_)
