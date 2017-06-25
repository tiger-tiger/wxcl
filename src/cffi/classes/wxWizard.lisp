
;;;wxWizard.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxWizard_Create" wxWizard_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_txt :pointer)
  (_bmp :pointer)
  (_lft :int)
  (_top :int))

(cffi:defcfun ("wxWizard_RunWizard" wxWizard_RunWizard) :int
  (_obj :pointer)
  (firstPage :pointer))

(cffi:defcfun ("wxWizard_GetCurrentPage" wxWizard_GetCurrentPage) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWizard_Chain" wxWizard_Chain) :void
  (f :pointer)
  (s :pointer))

(cffi:defcfun ("wxWizard_SetPageSize" wxWizard_SetPageSize) :void
  (_obj :pointer)
  (w :int)
  (h :int))

(cffi:defcfun ("wxWizard_GetPageSize" wxWizard_GetPageSize) :void
  (_obj :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxWizardPageSimple_Create" wxWizardPageSimple_Create) :pointer
  (_prt :pointer))

(cffi:defcfun ("wxWizardPageSimple_GetPrev" wxWizardPageSimple_GetPrev) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWizardPageSimple_GetNext" wxWizardPageSimple_GetNext) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWizardPageSimple_GetBitmap" wxWizardPageSimple_GetBitmap) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxWizardPageSimple_SetPrev" wxWizardPageSimple_SetPrev) :void
  (_obj :pointer)
  (prev :pointer))

(cffi:defcfun ("wxWizardPageSimple_SetNext" wxWizardPageSimple_SetNext) :void
  (_obj :pointer)
  (next :pointer))

(cffi:defcfun ("wxWizardEvent_GetDirection" wxWizardEvent_GetDirection) :int
  (_obj :pointer))

(cffi:defcfun ("wxWizardEvent_GetPage" wxWizardEvent_GetPage) :pointer
  (_obj :pointer))


