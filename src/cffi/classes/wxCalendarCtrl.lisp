
;;;wxCalendarCtrl.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxCalendarCtrl_Create" wxCalendarCtrl_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_dat :pointer)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxCalendarCtrl_SetDate" wxCalendarCtrl_SetDate) :void
  (_obj :pointer)
  (date :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetDate" wxCalendarCtrl_GetDate) :void
  (_obj :pointer)
  (date :pointer))

(cffi:defcfun ("wxCalendarCtrl_EnableYearChange" wxCalendarCtrl_EnableYearChange) :void
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("wxCalendarCtrl_EnableMonthChange" wxCalendarCtrl_EnableMonthChange) :void
  (_obj :pointer)
  (enable :int))

(cffi:defcfun ("wxCalendarCtrl_EnableHolidayDisplay" wxCalendarCtrl_EnableHolidayDisplay) :void
  (_obj :pointer)
  (display :int))

(cffi:defcfun ("wxCalendarCtrl_SetHeaderColours" wxCalendarCtrl_SetHeaderColours) :void
  (_obj :pointer)
  (colFg :pointer)
  (colBg :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetHeaderColourFg" wxCalendarCtrl_GetHeaderColourFg) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetHeaderColourBg" wxCalendarCtrl_GetHeaderColourBg) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarCtrl_SetHighlightColours" wxCalendarCtrl_SetHighlightColours) :void
  (_obj :pointer)
  (colFg :pointer)
  (colBg :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetHighlightColourFg" wxCalendarCtrl_GetHighlightColourFg) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetHighlightColourBg" wxCalendarCtrl_GetHighlightColourBg) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarCtrl_SetHolidayColours" wxCalendarCtrl_SetHolidayColours) :void
  (_obj :pointer)
  (colFg :pointer)
  (colBg :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetHolidayColourFg" wxCalendarCtrl_GetHolidayColourFg) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetHolidayColourBg" wxCalendarCtrl_GetHolidayColourBg) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxCalendarCtrl_GetAttr" wxCalendarCtrl_GetAttr) :pointer
  (_obj :pointer)
  (day :int))

(cffi:defcfun ("wxCalendarCtrl_SetAttr" wxCalendarCtrl_SetAttr) :void
  (_obj :pointer)
  (day :int)
  (attr :pointer))

(cffi:defcfun ("wxCalendarCtrl_SetHoliday" wxCalendarCtrl_SetHoliday) :void
  (_obj :pointer)
  (day :int))

(cffi:defcfun ("wxCalendarCtrl_ResetAttr" wxCalendarCtrl_ResetAttr) :void
  (_obj :pointer)
  (day :int))

(cffi:defcfun ("wxCalendarCtrl_HitTest" wxCalendarCtrl_HitTest) :int
  (_obj :pointer)
  (x :int)
  (y :int)
  (date :pointer)
  (wd :pointer))


