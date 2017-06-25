
;;;wxNotebook.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxNotebook_Create" wxNotebook_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxNotebook_GetPageCount" wxNotebook_GetPageCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxNotebook_SetSelection" wxNotebook_SetSelection) :int
  (_obj :pointer)
  (nPage :int))

(cffi:defcfun ("wxNotebook_AdvanceSelection" wxNotebook_AdvanceSelection) :void
  (_obj :pointer)
  (bForward :int))

(cffi:defcfun ("wxNotebook_GetSelection" wxNotebook_GetSelection) :int
  (_obj :pointer))

(cffi:defcfun ("wxNotebook_SetPageText" wxNotebook_SetPageText) :int
  (_obj :pointer)
  (nPage :int)
  (strText :string))

(cffi:defcfun ("wxNotebook_GetPageText" wxNotebook_GetPageText) :wxstring
  (_obj :pointer)
  (nPage :int))

(cffi:defcfun ("wxNotebook_SetImageList" wxNotebook_SetImageList) :void
  (_obj :pointer)
  (imageList :pointer))

(cffi:defcfun ("wxNotebook_GetImageList" wxNotebook_GetImageList) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxNotebook_GetPageImage" wxNotebook_GetPageImage) :int
  (_obj :pointer)
  (nPage :int))

(cffi:defcfun ("wxNotebook_SetPageImage" wxNotebook_SetPageImage) :int
  (_obj :pointer)
  (nPage :int)
  (nImage :int))

(cffi:defcfun ("wxNotebook_GetRowCount" wxNotebook_GetRowCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxNotebook_SetPageSize" wxNotebook_SetPageSize) :void
  (_obj :pointer)
  (_w :int)
  (_h :int))

(cffi:defcfun ("wxNotebook_SetPadding" wxNotebook_SetPadding) :void
  (_obj :pointer)
  (_w :int)
  (_h :int))

(cffi:defcfun ("wxNotebook_DeletePage" wxNotebook_DeletePage) :int
  (_obj :pointer)
  (nPage :int))

(cffi:defcfun ("wxNotebook_RemovePage" wxNotebook_RemovePage) :int
  (_obj :pointer)
  (nPage :int))

(cffi:defcfun ("wxNotebook_DeleteAllPages" wxNotebook_DeleteAllPages) :int
  (_obj :pointer))

(cffi:defcfun ("wxNotebook_AddPage" wxNotebook_AddPage) :int
  (_obj :pointer)
  (pPage :pointer)
  (strText :string)
  (bSelect :int)
  (imageId :int))

(cffi:defcfun ("wxNotebook_InsertPage" wxNotebook_InsertPage) :int
  (_obj :pointer)
  (nPage :int)
  (pPage :pointer)
  (strText :string)
  (bSelect :int)
  (imageId :int))

(cffi:defcfun ("wxNotebook_GetPage" wxNotebook_GetPage) :pointer
  (_obj :pointer)
  (nPage :int))

(cffi:defcfun ("wxNotebook_AssignImageList" wxNotebook_AssignImageList) :void
  (_obj :pointer)
  (imageList :pointer))


