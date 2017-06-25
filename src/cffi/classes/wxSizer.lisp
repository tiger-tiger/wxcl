
;;;wxSizer.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxSizerItem_Create" wxSizerItem_Create) :pointer
  (width :int)
  (height :int)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizerItem_CreateInWindow" wxSizerItem_CreateInWindow) :pointer
  (window :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizerItem_CreateInSizer" wxSizerItem_CreateInSizer) :pointer
  (sizer :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizerItem_GetSize" wxSizerItem_GetSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxSizerItem_CalcMin" wxSizerItem_CalcMin) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxSizerItem_SetDimension" wxSizerItem_SetDimension) :void
  (_obj :pointer)
  (_x :int)
  (_y :int)
  (_w :int)
  (_h :int))

(cffi:defcfun ("wxSizerItem_GetMinSize" wxSizerItem_GetMinSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxSizerItem_SetRatio" wxSizerItem_SetRatio) :void
  (_obj :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxSizerItem_SetFloatRatio" wxSizerItem_SetFloatRatio) :void
  (_obj :pointer)
  (ratio :float))

(cffi:defcfun ("wxSizerItem_GetRatio" wxSizerItem_GetRatio) :float
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_IsWindow" wxSizerItem_IsWindow) :int
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_IsSizer" wxSizerItem_IsSizer) :int
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_IsSpacer" wxSizerItem_IsSpacer) :int
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_SetInitSize" wxSizerItem_SetInitSize) :void
  (_obj :pointer)
  (x :int)
  (y :int))

(cffi:defcfun ("wxSizerItem_SetFlag" wxSizerItem_SetFlag) :void
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxSizerItem_SetBorder" wxSizerItem_SetBorder) :void
  (_obj :pointer)
  (border :int))

(cffi:defcfun ("wxSizerItem_GetWindow" wxSizerItem_GetWindow) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_SetWindow" wxSizerItem_SetWindow) :void
  (_obj :pointer)
  (window :pointer))

(cffi:defcfun ("wxSizerItem_GetSizer" wxSizerItem_GetSizer) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_SetSizer" wxSizerItem_SetSizer) :void
  (_obj :pointer)
  (sizer :pointer))

(cffi:defcfun ("wxSizerItem_GetFlag" wxSizerItem_GetFlag) :int
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_GetBorder" wxSizerItem_GetBorder) :int
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_GetUserData" wxSizerItem_GetUserData) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxSizerItem_GetPosition" wxSizerItem_GetPosition) :void
  (_obj :pointer)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxSizer_AddWindow" wxSizer_AddWindow) :void
  (_obj :pointer)
  (window :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_AddSizer" wxSizer_AddSizer) :void
  (_obj :pointer)
  (sizer :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_Add" wxSizer_Add) :void
  (_obj :pointer)
  (width :int)
  (height :int)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_InsertWindow" wxSizer_InsertWindow) :void
  (_obj :pointer)
  (before :int)
  (window :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_InsertSizer" wxSizer_InsertSizer) :void
  (_obj :pointer)
  (before :int)
  (sizer :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_Insert" wxSizer_Insert) :void
  (_obj :pointer)
  (before :int)
  (width :int)
  (height :int)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_PrependWindow" wxSizer_PrependWindow) :void
  (_obj :pointer)
  (window :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_PrependSizer" wxSizer_PrependSizer) :void
  (_obj :pointer)
  (sizer :pointer)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_Prepend" wxSizer_Prepend) :void
  (_obj :pointer)
  (width :int)
  (height :int)
  (option :int)
  (flag :int)
  (border :int)
  (userData :pointer))

(cffi:defcfun ("wxSizer_DetachWindow" wxSizer_DetachWindow) :int
  (_obj :pointer)
  (window :pointer))

(cffi:defcfun ("wxSizer_DetachSizer" wxSizer_DetachSizer) :int
  (_obj :pointer)
  (sizer :pointer))

(cffi:defcfun ("wxSizer_Detach" wxSizer_Detach) :int
  (_obj :pointer)
  (pos :int))

(cffi:defcfun ("wxSizer_SetMinSize" wxSizer_SetMinSize) :void
  (_obj :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxSizer_SetItemMinSizeWindow" wxSizer_SetItemMinSizeWindow) :void
  (_obj :pointer)
  (window :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxSizer_SetItemMinSizeSizer" wxSizer_SetItemMinSizeSizer) :void
  (_obj :pointer)
  (sizer :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxSizer_SetItemMinSize" wxSizer_SetItemMinSize) :void
  (_obj :pointer)
  (pos :int)
  (width :int)
  (height :int))

(cffi:defcfun ("wxSizer_GetSize" wxSizer_GetSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxSizer_GetPosition" wxSizer_GetPosition) :void
  (_obj :pointer)
  (_x :pointer)
  (_y :pointer))

(cffi:defcfun ("wxSizer_GetMinSize" wxSizer_GetMinSize) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxSizer_RecalcSizes" wxSizer_RecalcSizes) :void
  (_obj :pointer))

(cffi:defcfun ("wxSizer_CalcMin" wxSizer_CalcMin) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxSizer_Layout" wxSizer_Layout) :void
  (_obj :pointer))

(cffi:defcfun ("wxSizer_Fit" wxSizer_Fit) :void
  (_obj :pointer)
  (window :pointer))

(cffi:defcfun ("wxSizer_SetSizeHints" wxSizer_SetSizeHints) :void
  (_obj :pointer)
  (window :pointer))

(cffi:defcfun ("wxSizer_GetChildren" wxSizer_GetChildren) :int
  (_obj :pointer)
  (_res :pointer)
  (_cnt :int))

(cffi:defcfun ("wxSizer_SetDimension" wxSizer_SetDimension) :void
  (_obj :pointer)
  (x :int)
  (y :int)
  (width :int)
  (height :int))

(cffi:defcfun ("wxGridSizer_Create" wxGridSizer_Create) :pointer
  (rows :int)
  (cols :int)
  (vgap :int)
  (hgap :int))

(cffi:defcfun ("wxGridSizer_RecalcSizes" wxGridSizer_RecalcSizes) :void
  (_obj :pointer))

(cffi:defcfun ("wxGridSizer_CalcMin" wxGridSizer_CalcMin) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxGridSizer_SetCols" wxGridSizer_SetCols) :void
  (_obj :pointer)
  (cols :int))

(cffi:defcfun ("wxGridSizer_SetRows" wxGridSizer_SetRows) :void
  (_obj :pointer)
  (rows :int))

(cffi:defcfun ("wxGridSizer_SetVGap" wxGridSizer_SetVGap) :void
  (_obj :pointer)
  (gap :int))

(cffi:defcfun ("wxGridSizer_SetHGap" wxGridSizer_SetHGap) :void
  (_obj :pointer)
  (gap :int))

(cffi:defcfun ("wxGridSizer_GetCols" wxGridSizer_GetCols) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizer_GetRows" wxGridSizer_GetRows) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizer_GetVGap" wxGridSizer_GetVGap) :int
  (_obj :pointer))

(cffi:defcfun ("wxGridSizer_GetHGap" wxGridSizer_GetHGap) :int
  (_obj :pointer))

(cffi:defcfun ("wxFlexGridSizer_Create" wxFlexGridSizer_Create) :pointer
  (rows :int)
  (cols :int)
  (vgap :int)
  (hgap :int))

(cffi:defcfun ("wxFlexGridSizer_RecalcSizes" wxFlexGridSizer_RecalcSizes) :void
  (_obj :pointer))

(cffi:defcfun ("wxFlexGridSizer_CalcMin" wxFlexGridSizer_CalcMin) :void
  (_obj :pointer)
  (_w :pointer)
  (_h :pointer))

(cffi:defcfun ("wxFlexGridSizer_AddGrowableRow" wxFlexGridSizer_AddGrowableRow) :void
  (_obj :pointer)
  (idx :pointer))

(cffi:defcfun ("wxFlexGridSizer_RemoveGrowableRow" wxFlexGridSizer_RemoveGrowableRow) :void
  (_obj :pointer)
  (idx :pointer))

(cffi:defcfun ("wxFlexGridSizer_AddGrowableCol" wxFlexGridSizer_AddGrowableCol) :void
  (_obj :pointer)
  (idx :pointer))

(cffi:defcfun ("wxFlexGridSizer_RemoveGrowableCol" wxFlexGridSizer_RemoveGrowableCol) :void
  (_obj :pointer)
  (idx :pointer))

(cffi:defcfun ("wxBoxSizer_Create" wxBoxSizer_Create) :pointer
  (orient :int))

(cffi:defcfun ("wxBoxSizer_GetOrientation" wxBoxSizer_GetOrientation) :int
  (_obj :pointer))

(cffi:defcfun ("wxStaticBoxSizer_Create" wxStaticBoxSizer_Create) :pointer
  (box :pointer)
  (orient :int))

(cffi:defcfun ("wxStaticBoxSizer_GetStaticBox" wxStaticBoxSizer_GetStaticBox) :pointer
  (_obj :pointer))


