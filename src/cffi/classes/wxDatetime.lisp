
;;;wxDatetime.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxDateTime_Create" wxDateTime_Create) :pointer)

(cffi:defcfun ("wxDateTime_SetCountry" wxDateTime_SetCountry) :void
  (country :int))

(cffi:defcfun ("wxDateTime_GetCountry" wxDateTime_GetCountry) :int)

(cffi:defcfun ("wxDateTime_IsWestEuropeanCountry" wxDateTime_IsWestEuropeanCountry) :int
  (country :int))

(cffi:defcfun ("wxDateTime_GetCurrentYear" wxDateTime_GetCurrentYear) :int
  (cal :int))

(cffi:defcfun ("wxDateTime_ConvertYearToBC" wxDateTime_ConvertYearToBC) :int
  (year :int))

(cffi:defcfun ("wxDateTime_GetCurrentMonth" wxDateTime_GetCurrentMonth) :int
  (cal :int))

(cffi:defcfun ("wxDateTime_IsLeapYear" wxDateTime_IsLeapYear) :int
  (year :int)
  (cal :int))

(cffi:defcfun ("wxDateTime_GetCentury" wxDateTime_GetCentury) :int
  (year :int))

(cffi:defcfun ("wxDateTime_GetNumberOfDays" wxDateTime_GetNumberOfDays) :int
  (year :int)
  (cal :int))

(cffi:defcfun ("wxDateTime_GetNumberOfDaysMonth" wxDateTime_GetNumberOfDaysMonth) :int
  (month :int)
  (year :int)
  (cal :int))

(cffi:defcfun ("wxDateTime_GetMonthName" wxDateTime_GetMonthName) :wxstring
  (month :int)
  (flags :int))

(cffi:defcfun ("wxDateTime_GetWeekDayName" wxDateTime_GetWeekDayName) :wxstring
  (weekday :int)
  (flags :int)
  (_buf :pointer))

(cffi:defcfun ("wxDateTime_GetAmString" wxDateTime_GetAmString) :int
  (_buf :pointer))

(cffi:defcfun ("wxDateTime_GetPmString" wxDateTime_GetPmString) :int
  (_buf :pointer))

(cffi:defcfun ("wxDateTime_IsDSTApplicable" wxDateTime_IsDSTApplicable) :int
  (year :int)
  (country :int))

(cffi:defcfun ("wxDateTime_GetBeginDST" wxDateTime_GetBeginDST) :void
  (year :int)
  (country :int)
  (dt :pointer))

(cffi:defcfun ("wxDateTime_GetEndDST" wxDateTime_GetEndDST) :void
  (year :int)
  (country :int)
  (dt :pointer))

(cffi:defcfun ("wxDateTime_Now" wxDateTime_Now) :void
  (dt :pointer))

(cffi:defcfun ("wxDateTime_UNow" wxDateTime_UNow) :void
  (dt :pointer))

(cffi:defcfun ("wxDateTime_Today" wxDateTime_Today) :void
  (dt :pointer))

(cffi:defcfun ("wxDateTime_SetToCurrent" wxDateTime_SetToCurrent) :void
  (_obj :pointer))

(cffi:defcfun ("wxDateTime_SetTime" wxDateTime_SetTime) :void
  (_obj :pointer)
  (hour :int)
  (minute :int)
  (second :int)
  (millisec :int))

(cffi:defcfun ("wxDateTime_Set" wxDateTime_Set) :void
  (_obj :pointer)
  (day :int)
  (month :int)
  (year :int)
  (hour :int)
  (minute :int)
  (second :int)
  (millisec :int))

(cffi:defcfun ("wxDateTime_ResetTime" wxDateTime_ResetTime) :void
  (_obj :pointer))

(cffi:defcfun ("wxDateTime_SetYear" wxDateTime_SetYear) :void
  (_obj :pointer)
  (year :int))

(cffi:defcfun ("wxDateTime_SetMonth" wxDateTime_SetMonth) :void
  (_obj :pointer)
  (month :int))

(cffi:defcfun ("wxDateTime_SetDay" wxDateTime_SetDay) :void
  (_obj :pointer)
  (day :int))

(cffi:defcfun ("wxDateTime_SetHour" wxDateTime_SetHour) :void
  (_obj :pointer)
  (hour :int))

(cffi:defcfun ("wxDateTime_SetMinute" wxDateTime_SetMinute) :void
  (_obj :pointer)
  (minute :int))

(cffi:defcfun ("wxDateTime_SetSecond" wxDateTime_SetSecond) :void
  (_obj :pointer)
  (second :int))

(cffi:defcfun ("wxDateTime_SetMillisecond" wxDateTime_SetMillisecond) :void
  (_obj :pointer)
  (millisecond :int))

(cffi:defcfun ("wxDateTime_SetToWeekDayInSameWeek" wxDateTime_SetToWeekDayInSameWeek) :void
  (_obj :pointer)
  (weekday :int))

(cffi:defcfun ("wxDateTime_GetWeekDayInSameWeek" wxDateTime_GetWeekDayInSameWeek) :void
  (_obj :pointer)
  (weekday :int)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SetToNextWeekDay" wxDateTime_SetToNextWeekDay) :void
  (_obj :pointer)
  (weekday :int))

(cffi:defcfun ("wxDateTime_GetNextWeekDay" wxDateTime_GetNextWeekDay) :void
  (_obj :pointer)
  (weekday :int)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SetToPrevWeekDay" wxDateTime_SetToPrevWeekDay) :void
  (_obj :pointer)
  (weekday :int))

(cffi:defcfun ("wxDateTime_GetPrevWeekDay" wxDateTime_GetPrevWeekDay) :void
  (_obj :pointer)
  (weekday :int)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SetToWeekDay" wxDateTime_SetToWeekDay) :int
  (_obj :pointer)
  (weekday :int)
  (n :int)
  (month :int)
  (year :int))

(cffi:defcfun ("wxDateTime_GetWeekDay" wxDateTime_GetWeekDay) :void
  (_obj :pointer)
  (weekday :int)
  (n :int)
  (month :int)
  (year :int)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SetToLastWeekDay" wxDateTime_SetToLastWeekDay) :int
  (_obj :pointer)
  (weekday :int)
  (month :int)
  (year :int))

(cffi:defcfun ("wxDateTime_GetLastWeekDay" wxDateTime_GetLastWeekDay) :void
  (_obj :pointer)
  (weekday :int)
  (month :int)
  (year :int)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SetToTheWeek" wxDateTime_SetToTheWeek) :int
  (_obj :pointer)
  (numWeek :int)
  (weekday :int))

(cffi:defcfun ("wxDateTime_GetWeek" wxDateTime_GetWeek) :void
  (_obj :pointer)
  (numWeek :int)
  (weekday :int)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SetToLastMonthDay" wxDateTime_SetToLastMonthDay) :void
  (_obj :pointer)
  (month :int)
  (year :int))

(cffi:defcfun ("wxDateTime_GetLastMonthDay" wxDateTime_GetLastMonthDay) :void
  (_obj :pointer)
  (month :int)
  (year :int)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_ToTimezone" wxDateTime_ToTimezone) :void
  (_obj :pointer)
  (tz :int)
  (noDST :int))

(cffi:defcfun ("wxDateTime_MakeTimezone" wxDateTime_MakeTimezone) :void
  (_obj :pointer)
  (tz :int)
  (noDST :int))

(cffi:defcfun ("wxDateTime_ToGMT" wxDateTime_ToGMT) :void
  (_obj :pointer)
  (noDST :int))

(cffi:defcfun ("wxDateTime_MakeGMT" wxDateTime_MakeGMT) :void
  (_obj :pointer)
  (noDST :int))

(cffi:defcfun ("wxDateTime_IsDST" wxDateTime_IsDST) :int
  (_obj :pointer)
  (country :int))

(cffi:defcfun ("wxDateTime_IsValid" wxDateTime_IsValid) :int
  (_obj :pointer))

(cffi:defcfun ("wxDateTime_GetTicks" wxDateTime_GetTicks) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxDateTime_GetYear" wxDateTime_GetYear) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetMonth" wxDateTime_GetMonth) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetDay" wxDateTime_GetDay) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetWeekDayTZ" wxDateTime_GetWeekDayTZ) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetHour" wxDateTime_GetHour) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetMinute" wxDateTime_GetMinute) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetSecond" wxDateTime_GetSecond) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetMillisecond" wxDateTime_GetMillisecond) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetDayOfYear" wxDateTime_GetDayOfYear) :int
  (_obj :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetWeekOfYear" wxDateTime_GetWeekOfYear) :int
  (_obj :pointer)
  (flags :int)
  (tz :int))

(cffi:defcfun ("wxDateTime_GetWeekOfMonth" wxDateTime_GetWeekOfMonth) :int
  (_obj :pointer)
  (flags :int)
  (tz :int))

(cffi:defcfun ("wxDateTime_IsWorkDay" wxDateTime_IsWorkDay) :int
  (_obj :pointer)
  (country :int))

(cffi:defcfun ("wxDateTime_IsEqualTo" wxDateTime_IsEqualTo) :int
  (_obj :pointer)
  (datetime :pointer))

(cffi:defcfun ("wxDateTime_IsEarlierThan" wxDateTime_IsEarlierThan) :int
  (_obj :pointer)
  (datetime :pointer))

(cffi:defcfun ("wxDateTime_IsLaterThan" wxDateTime_IsLaterThan) :int
  (_obj :pointer)
  (datetime :pointer))

(cffi:defcfun ("wxDateTime_IsStrictlyBetween" wxDateTime_IsStrictlyBetween) :int
  (_obj :pointer)
  (t1 :pointer)
  (t2 :pointer))

(cffi:defcfun ("wxDateTime_IsBetween" wxDateTime_IsBetween) :int
  (_obj :pointer)
  (t1 :pointer)
  (t2 :pointer))

(cffi:defcfun ("wxDateTime_IsSameDate" wxDateTime_IsSameDate) :int
  (_obj :pointer)
  (dt :pointer))

(cffi:defcfun ("wxDateTime_IsSameTime" wxDateTime_IsSameTime) :int
  (_obj :pointer)
  (dt :pointer))

(cffi:defcfun ("wxDateTime_IsEqualUpTo" wxDateTime_IsEqualUpTo) :int
  (_obj :pointer)
  (dt :pointer)
  (ts :pointer))

(cffi:defcfun ("wxDateTime_AddTime" wxDateTime_AddTime) :void
  (_obj :pointer)
  (diff :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SubtractTime" wxDateTime_SubtractTime) :void
  (_obj :pointer)
  (diff :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_AddDate" wxDateTime_AddDate) :void
  (_obj :pointer)
  (diff :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_SubtractDate" wxDateTime_SubtractDate) :void
  (_obj :pointer)
  (diff :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxDateTime_ParseRfc822Date" wxDateTime_ParseRfc822Date) :pointer
  (_obj :pointer)
  (date :pointer))

(cffi:defcfun ("wxDateTime_ParseFormat" wxDateTime_ParseFormat) :pointer
  (_obj :pointer)
  (date :pointer)
  (format :pointer)
  (dateDef :pointer))

(cffi:defcfun ("wxDateTime_ParseDateTime" wxDateTime_ParseDateTime) :pointer
  (_obj :pointer)
  (datetime :pointer))

(cffi:defcfun ("wxDateTime_ParseDate" wxDateTime_ParseDate) :pointer
  (_obj :pointer)
  (date :pointer))

(cffi:defcfun ("wxDateTime_ParseTime" wxDateTime_ParseTime) :pointer
  (_obj :pointer)
  (time :pointer))

(cffi:defcfun ("wxDateTime_Format" wxDateTime_Format) :wxstring
  (_obj :pointer)
  (format :pointer)
  (tz :int))

(cffi:defcfun ("wxDateTime_FormatDate" wxDateTime_FormatDate) :wxstring
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxDateTime_FormatTime" wxDateTime_FormatTime) :wxstring
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxDateTime_FormatISODate" wxDateTime_FormatISODate) :wxstring
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxDateTime_FormatISOTime" wxDateTime_FormatISOTime) :wxstring
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxDateTime_wxDateTime" wxDateTime_wxDateTime) :pointer
  (hi_long :long)
  (lo_long :unsigned-long))

(cffi:defcfun ("wxDateTime_GetValue" wxDateTime_GetValue) :void
  (_obj :pointer)
  (hi_long :pointer)
  (lo_long :pointer))

(cffi:defcfun ("wxDateTime_GetTimeNow" wxDateTime_GetTimeNow) :int)

(cffi:defcfun ("wxDateTime_AddTimeValues" wxDateTime_AddTimeValues) :void
  (_obj :pointer)
  (_hrs :int)
  (_min :int)
  (_sec :int)
  (_mls :int))

(cffi:defcfun ("wxDateTime_AddDateValues" wxDateTime_AddDateValues) :void
  (_obj :pointer)
  (_yrs :int)
  (_mnt :int)
  (_wek :int)
  (_day :int))


