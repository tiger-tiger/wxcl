
;;;wxPlot.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxPlotWindow_Create" wxPlotWindow_Create) :pointer
  (parent :pointer)
  (id :int)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (flags :int))

(cffi:defcfun ("wxPlotWindow_Add" wxPlotWindow_Add) :void
  (_obj :pointer)
  (curve :pointer))

(cffi:defcfun ("wxPlotWindow_Delete" wxPlotWindow_Delete) :void
  (_obj :pointer)
  (curve :pointer))

(cffi:defcfun ("wxPlotWindow_GetCount" wxPlotWindow_GetCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_GetAt" wxPlotWindow_GetAt) :pointer
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxPlotWindow_SetCurrent" wxPlotWindow_SetCurrent) :void
  (_obj :pointer)
  (current :pointer))

(cffi:defcfun ("wxPlotWindow_GetCurrent" wxPlotWindow_GetCurrent) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_AddOnOff" wxPlotWindow_AddOnOff) :void
  (_obj :pointer)
  (curve :pointer))

(cffi:defcfun ("wxPlotWindow_DeleteOnOff" wxPlotWindow_DeleteOnOff) :void
  (_obj :pointer)
  (curve :pointer))

(cffi:defcfun ("wxPlotWindow_GetOnOffCurveCount" wxPlotWindow_GetOnOffCurveCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_GetOnOffCurveAt" wxPlotWindow_GetOnOffCurveAt) :pointer
  (_obj :pointer)
  (n :int))

(cffi:defcfun ("wxPlotWindow_Move" wxPlotWindow_Move) :void
  (_obj :pointer)
  (curve :pointer)
  (pixels_up :int))

(cffi:defcfun ("wxPlotWindow_Enlarge" wxPlotWindow_Enlarge) :void
  (_obj :pointer)
  (curve :pointer)
  (factor :double))

(cffi:defcfun ("wxPlotWindow_SetUnitsPerValue" wxPlotWindow_SetUnitsPerValue) :void
  (_obj :pointer)
  (upv :double))

(cffi:defcfun ("wxPlotWindow_GetUnitsPerValue" wxPlotWindow_GetUnitsPerValue) :double
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_SetZoom" wxPlotWindow_SetZoom) :void
  (_obj :pointer)
  (zoom :double))

(cffi:defcfun ("wxPlotWindow_GetZoom" wxPlotWindow_GetZoom) :double
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_SetScrollOnThumbRelease" wxPlotWindow_SetScrollOnThumbRelease) :void
  (_obj :pointer)
  (scrollOnThumbRelease :int))

(cffi:defcfun ("wxPlotWindow_GetScrollOnThumbRelease" wxPlotWindow_GetScrollOnThumbRelease) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_SetEnlargeAroundWindowCentre" wxPlotWindow_SetEnlargeAroundWindowCentre) :void
  (_obj :pointer)
  (enlargeAroundWindowCentre :int))

(cffi:defcfun ("wxPlotWindow_GetEnlargeAroundWindowCentre" wxPlotWindow_GetEnlargeAroundWindowCentre) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_RedrawEverything" wxPlotWindow_RedrawEverything) :void
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_RedrawXAxis" wxPlotWindow_RedrawXAxis) :void
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_RedrawYAxis" wxPlotWindow_RedrawYAxis) :void
  (_obj :pointer))

(cffi:defcfun ("wxPlotWindow_ResetScrollbar" wxPlotWindow_ResetScrollbar) :void
  (_obj :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_Create" wxPlotOnOffCurve_Create) :pointer
  (offsetY :int))

(cffi:defcfun ("wxPlotOnOffCurve_Delete" wxPlotOnOffCurve_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_GetStartX" wxPlotOnOffCurve_GetStartX) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_GetEndX" wxPlotOnOffCurve_GetEndX) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_SetOffsetY" wxPlotOnOffCurve_SetOffsetY) :void
  (_obj :pointer)
  (offsetY :int))

(cffi:defcfun ("wxPlotOnOffCurve_GetOffsetY" wxPlotOnOffCurve_GetOffsetY) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_Add" wxPlotOnOffCurve_Add) :void
  (_obj :pointer)
  (on :int)
  (off :int)
  (clientData :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_GetCount" wxPlotOnOffCurve_GetCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_GetOn" wxPlotOnOffCurve_GetOn) :int
  (_obj :pointer)
  (index :int))

(cffi:defcfun ("wxPlotOnOffCurve_GetOff" wxPlotOnOffCurve_GetOff) :int
  (_obj :pointer)
  (index :int))

(cffi:defcfun ("wxPlotOnOffCurve_GetClientData" wxPlotOnOffCurve_GetClientData) :pointer
  (_obj :pointer)
  (index :int))

(cffi:defcfun ("wxPlotOnOffCurve_GetAt" wxPlotOnOffCurve_GetAt) :pointer
  (_obj :pointer)
  (index :int))

(cffi:defcfun ("wxPlotOnOffCurve_DrawOnLine" wxPlotOnOffCurve_DrawOnLine) :void
  (_obj :pointer)
  (dc :pointer)
  (y :int)
  (start :int)
  (end :int)
  (clientData :pointer))

(cffi:defcfun ("wxPlotOnOffCurve_DrawOffLine" wxPlotOnOffCurve_DrawOffLine) :void
  (_obj :pointer)
  (dc :pointer)
  (y :int)
  (start :int)
  (end :int))

(cffi:defcfun ("ELJPlotCurve_Create" ELJPlotCurve_Create) :pointer
  (_obj :pointer)
  (_str :pointer)
  (_end :pointer)
  (_y :pointer)
  (offsetY :int)
  (startY :double)
  (endY :double))

(cffi:defcfun ("ELJPlotCurve_Delete" ELJPlotCurve_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("ELJPlotCurve_SetStartY" ELJPlotCurve_SetStartY) :void
  (_obj :pointer)
  (startY :double))

(cffi:defcfun ("ELJPlotCurve_GetStartY" ELJPlotCurve_GetStartY) :double
  (_obj :pointer))

(cffi:defcfun ("ELJPlotCurve_SetEndY" ELJPlotCurve_SetEndY) :void
  (_obj :pointer)
  (endY :double))

(cffi:defcfun ("ELJPlotCurve_GetEndY" ELJPlotCurve_GetEndY) :double
  (_obj :pointer))

(cffi:defcfun ("ELJPlotCurve_SetOffsetY" ELJPlotCurve_SetOffsetY) :void
  (_obj :pointer)
  (offsetY :int))

(cffi:defcfun ("ELJPlotCurve_GetOffsetY" ELJPlotCurve_GetOffsetY) :int
  (_obj :pointer))

(cffi:defcfun ("ELJPlotCurve_SetPenNormal" ELJPlotCurve_SetPenNormal) :void
  (_obj :pointer)
  (pen :pointer))

(cffi:defcfun ("ELJPlotCurve_SetPenSelected" ELJPlotCurve_SetPenSelected) :void
  (_obj :pointer)
  (pen :pointer))

(cffi:defcfun ("wxPlotEvent_GetCurve" wxPlotEvent_GetCurve) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxPlotEvent_GetZoom" wxPlotEvent_GetZoom) :double
  (_obj :pointer))

(cffi:defcfun ("wxPlotEvent_SetZoom" wxPlotEvent_SetZoom) :void
  (_obj :pointer)
  (zoom :double))

(cffi:defcfun ("wxPlotEvent_GetPosition" wxPlotEvent_GetPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxPlotEvent_SetPosition" wxPlotEvent_SetPosition) :void
  (_obj :pointer)
  (pos :int))


