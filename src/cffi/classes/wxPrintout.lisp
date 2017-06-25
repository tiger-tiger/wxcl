
;;;wxPrintout.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("expEVT_PRINT_BEGIN" expEVT_PRINT_BEGIN) :int)

(cffi:defcfun ("expEVT_PRINT_BEGIN_DOC" expEVT_PRINT_BEGIN_DOC) :int)

(cffi:defcfun ("expEVT_PRINT_END" expEVT_PRINT_END) :int)

(cffi:defcfun ("expEVT_PRINT_END_DOC" expEVT_PRINT_END_DOC) :int)

(cffi:defcfun ("expEVT_PRINT_PREPARE" expEVT_PRINT_PREPARE) :int)

(cffi:defcfun ("expEVT_PRINT_PAGE" expEVT_PRINT_PAGE) :int)

(cffi:defcfun ("wxPrintDialog_GetPrintDialogData" wxPrintDialog_GetPrintDialogData) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxcPrintout_Create" wxcPrintout_Create) :pointer
  (title :wxstring))

(cffi:defcfun ("wxcPrintout_Delete" wxcPrintout_Delete) :void
  (self :pointer))

(cffi:defcfun ("wxcPrintout_SetPageLimits" wxcPrintout_SetPageLimits) :void
  (self :pointer)
  (startPage :int)
  (endPage :int)
  (fromPage :int)
  (toPage :int))

(cffi:defcfun ("wxcPrintout_GetEvtHandler" wxcPrintout_GetEvtHandler) :pointer
  (self :pointer))

(cffi:defcfun ("wxcPrintEvent_GetPrintout" wxcPrintEvent_GetPrintout) :pointer
  (self :pointer))

(cffi:defcfun ("wxcPrintEvent_GetPage" wxcPrintEvent_GetPage) :int
  (self :pointer))

(cffi:defcfun ("wxcPrintEvent_GetEndPage" wxcPrintEvent_GetEndPage) :int
  (self :pointer))

(cffi:defcfun ("wxcPrintEvent_GetContinue" wxcPrintEvent_GetContinue) :pointer
  (self :pointer))

(cffi:defcfun ("wxcPrintEvent_SetContinue" wxcPrintEvent_SetContinue) :void
  (self :pointer)
  (cont :pointer))

(cffi:defcfun ("wxcPrintEvent_SetPageLimits" wxcPrintEvent_SetPageLimits) :void
  (self :pointer)
  (startPage :int)
  (endPage :int)
  (fromPage :int)
  (toPage :int))

(cffi:defcfun ("wxPrintout_GetTitle" wxPrintout_GetTitle) :int
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxPrintout_GetDC" wxPrintout_GetDC) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxPrintout_SetDC" wxPrintout_SetDC) :void
  (_obj :pointer)
  (dc :pointer))

(cffi:defcfun ("wxPrintout_SetPageSizePixels" wxPrintout_SetPageSizePixels) :void
  (_obj :pointer)
  (w :int)
  (h :int))

(cffi:defcfun ("wxPrintout_GetPageSizePixels" wxPrintout_GetPageSizePixels) :void
  (_obj :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxPrintout_SetPageSizeMM" wxPrintout_SetPageSizeMM) :void
  (_obj :pointer)
  (w :int)
  (h :int))

(cffi:defcfun ("wxPrintout_GetPageSizeMM" wxPrintout_GetPageSizeMM) :void
  (_obj :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxPrintout_SetPPIScreen" wxPrintout_SetPPIScreen) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxPrintout_GetPPIScreen" wxPrintout_GetPPIScreen) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxPrintout_SetPPIPrinter" wxPrintout_SetPPIPrinter) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxPrintout_GetPPIPrinter" wxPrintout_GetPPIPrinter) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxPrintout_IsPreview" wxPrintout_IsPreview) :int
  (_obj :pointer))

(cffi:defcfun ("wxPrintout_SetIsPreview" wxPrintout_SetIsPreview) :void
  (_obj :pointer)
  (p :int))


