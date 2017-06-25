
;;;wxPrintDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxPrintDialog_Create" wxPrintDialog_Create) :pointer
  (parent :pointer)
  (data :pointer))

(cffi:defcfun ("wxPrintDialog_GetPrintData" wxPrintDialog_GetPrintData) :void
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxPrintDialog_GetPrintDC" wxPrintDialog_GetPrintDC) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialog_Create" wxPageSetupDialog_Create) :pointer
  (parent :pointer)
  (data :pointer))

(cffi:defcfun ("wxPageSetupDialog_GetPageSetupData" wxPageSetupDialog_GetPageSetupData) :void
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxPageSetupDialogData_Create" wxPageSetupDialogData_Create) :pointer)

(cffi:defcfun ("wxPageSetupDialogData_CreateFromData" wxPageSetupDialogData_CreateFromData) :pointer
  (printData :pointer))

(cffi:defcfun ("wxPageSetupDialogData_Delete" wxPageSetupDialogData_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetPaperSize" wxPageSetupDialogData_GetPaperSize) :void
  (_obj :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetPaperId" wxPageSetupDialogData_GetPaperId) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetMinMarginTopLeft" wxPageSetupDialogData_GetMinMarginTopLeft) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetMinMarginBottomRight" wxPageSetupDialogData_GetMinMarginBottomRight) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetMarginTopLeft" wxPageSetupDialogData_GetMarginTopLeft) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetMarginBottomRight" wxPageSetupDialogData_GetMarginBottomRight) :void
  (_obj :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetDefaultMinMargins" wxPageSetupDialogData_GetDefaultMinMargins) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetEnableMargins" wxPageSetupDialogData_GetEnableMargins) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetEnableOrientation" wxPageSetupDialogData_GetEnableOrientation) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetEnablePaper" wxPageSetupDialogData_GetEnablePaper) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetEnablePrinter" wxPageSetupDialogData_GetEnablePrinter) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetDefaultInfo" wxPageSetupDialogData_GetDefaultInfo) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetEnableHelp" wxPageSetupDialogData_GetEnableHelp) :int
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_SetPaperSize" wxPageSetupDialogData_SetPaperSize) :void
  (_obj :pointer)
  (w :int)
  (h :int))

(cffi:defcfun ("wxPageSetupDialogData_SetPaperId" wxPageSetupDialogData_SetPaperId) :void
  (_obj :pointer)
  (id :pointer))

(cffi:defcfun ("wxPageSetupDialogData_SetPaperSizeId" wxPageSetupDialogData_SetPaperSizeId) :void
  (_obj :pointer)
  (id :int))

(cffi:defcfun ("wxPageSetupDialogData_SetMinMarginTopLeft" wxPageSetupDialogData_SetMinMarginTopLeft) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxPageSetupDialogData_SetMinMarginBottomRight" wxPageSetupDialogData_SetMinMarginBottomRight) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxPageSetupDialogData_SetMarginTopLeft" wxPageSetupDialogData_SetMarginTopLeft) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxPageSetupDialogData_SetMarginBottomRight" wxPageSetupDialogData_SetMarginBottomRight) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxPageSetupDialogData_SetDefaultMinMargins" wxPageSetupDialogData_SetDefaultMinMargins) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxPageSetupDialogData_SetDefaultInfo" wxPageSetupDialogData_SetDefaultInfo) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxPageSetupDialogData_EnableMargins" wxPageSetupDialogData_EnableMargins) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxPageSetupDialogData_EnableOrientation" wxPageSetupDialogData_EnableOrientation) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxPageSetupDialogData_EnablePaper" wxPageSetupDialogData_EnablePaper) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxPageSetupDialogData_EnablePrinter" wxPageSetupDialogData_EnablePrinter) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxPageSetupDialogData_EnableHelp" wxPageSetupDialogData_EnableHelp) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxPageSetupDialogData_CalculateIdFromPaperSize" wxPageSetupDialogData_CalculateIdFromPaperSize) :void
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_CalculatePaperSizeFromId" wxPageSetupDialogData_CalculatePaperSizeFromId) :void
  (_obj :pointer))

(cffi:defcfun ("wxPageSetupDialogData_Assign" wxPageSetupDialogData_Assign) :void
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxPageSetupDialogData_AssignData" wxPageSetupDialogData_AssignData) :void
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxPageSetupDialogData_GetPrintData" wxPageSetupDialogData_GetPrintData) :void
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxPageSetupDialogData_SetPrintData" wxPageSetupDialogData_SetPrintData) :void
  (_obj :pointer)
  (printData :pointer))


