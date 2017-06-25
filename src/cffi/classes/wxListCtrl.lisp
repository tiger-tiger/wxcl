
;;;wxListCtrl.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcstruct EiffelSort
	(obj :pointer)
	(fnc :pointer))

(cffi:defcfun ("wxListCtrl_Create" wxListCtrl_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxListCtrl_SetForegroundColour" wxListCtrl_SetForegroundColour) :int
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxListCtrl_SetBackgroundColour" wxListCtrl_SetBackgroundColour) :int
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxListCtrl_GetColumn" wxListCtrl_GetColumn) :int
  (_obj :pointer)
  (col :int)
  (item :pointer))

(cffi:defcfun ("wxListCtrl_SetColumn" wxListCtrl_SetColumn) :int
  (_obj :pointer)
  (col :int)
  (item :pointer))

(cffi:defcfun ("wxListCtrl_GetColumnWidth" wxListCtrl_GetColumnWidth) :int
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxListCtrl_SetColumnWidth" wxListCtrl_SetColumnWidth) :int
  (_obj :pointer)
  (col :int)
  (width :int))

(cffi:defcfun ("wxListCtrl_GetCountPerPage" wxListCtrl_GetCountPerPage) :int
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_GetEditControl" wxListCtrl_GetEditControl) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_GetItem" wxListCtrl_GetItem) :int
  (_obj :pointer)
  (info :pointer))

(cffi:defcfun ("wxListCtrl_SetItemFromInfo" wxListCtrl_SetItemFromInfo) :int
  (_obj :pointer)
  (info :pointer))

(cffi:defcfun ("wxListCtrl_SetItem" wxListCtrl_SetItem) :int
  (_obj :pointer)
  (index :int)
  (col :int)
  (label :pointer)
  (imageId :int))

(cffi:defcfun ("wxListCtrl_GetItemState" wxListCtrl_GetItemState) :int
  (_obj :pointer)
  (item :int)
  (stateMask :int))

(cffi:defcfun ("wxListCtrl_SetItemState" wxListCtrl_SetItemState) :int
  (_obj :pointer)
  (item :int)
  (state :int)
  (stateMask :int))

(cffi:defcfun ("wxListCtrl_SetItemImage" wxListCtrl_SetItemImage) :int
  (_obj :pointer)
  (item :int)
  (image :int)
  (selImage :int))

(cffi:defcfun ("wxListCtrl_GetItemText" wxListCtrl_GetItemText) :wxstring
  (_obj :pointer)
  (item :int))

(cffi:defcfun ("wxListCtrl_SetItemText" wxListCtrl_SetItemText) :void
  (_obj :pointer)
  (item :int)
  (str :pointer))

(cffi:defcfun ("wxListCtrl_GetItemData" wxListCtrl_GetItemData) :int
  (_obj :pointer)
  (item :int))

(cffi:defcfun ("wxListCtrl_SetItemData" wxListCtrl_SetItemData) :int
  (_obj :pointer)
  (item :int)
  (data :int))

(cffi:defcfun ("wxListCtrl_GetItemRect" wxListCtrl_GetItemRect) :int
  (_obj :pointer)
  (item :int)
  (code :int)
  (x :pointer)
  (y :pointer)
  (w :pointer)
  (h :pointer))

(cffi:defcfun ("wxListCtrl_GetItemPosition" wxListCtrl_GetItemPosition) :int
  (_obj :pointer)
  (item :int)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("wxListCtrl_SetItemPosition" wxListCtrl_SetItemPosition) :int
  (_obj :pointer)
  (item :int)
  (x :int)
  (y :int))

(cffi:defcfun ("wxListCtrl_GetItemCount" wxListCtrl_GetItemCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_GetColumnCount" wxListCtrl_GetColumnCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_GetItemSpacing" wxListCtrl_GetItemSpacing) :int
  (_obj :pointer)
  (isSmall :int))

(cffi:defcfun ("wxListCtrl_GetSelectedItemCount" wxListCtrl_GetSelectedItemCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_GetTextColour" wxListCtrl_GetTextColour) :void
  (_obj :pointer)
  (colour :pointer))

(cffi:defcfun ("wxListCtrl_SetTextColour" wxListCtrl_SetTextColour) :void
  (_obj :pointer)
  (col :pointer))

(cffi:defcfun ("wxListCtrl_GetTopItem" wxListCtrl_GetTopItem) :int
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_SetSingleStyle" wxListCtrl_SetSingleStyle) :void
  (_obj :pointer)
  (style :int)
  (add :int))

(cffi:defcfun ("wxListCtrl_SetWindowStyleFlag" wxListCtrl_SetWindowStyleFlag) :void
  (_obj :pointer)
  (style :int))

(cffi:defcfun ("wxListCtrl_GetNextItem" wxListCtrl_GetNextItem) :int
  (_obj :pointer)
  (item :int)
  (geometry :int)
  (state :int))

(cffi:defcfun ("wxListCtrl_GetImageList" wxListCtrl_GetImageList) :pointer
  (_obj :pointer)
  (which :int))

(cffi:defcfun ("wxListCtrl_SetImageList" wxListCtrl_SetImageList) :void
  (_obj :pointer)
  (imageList :pointer)
  (which :int))

(cffi:defcfun ("wxListCtrl_Arrange" wxListCtrl_Arrange) :int
  (_obj :pointer)
  (flag :int))

(cffi:defcfun ("wxListCtrl_DeleteItem" wxListCtrl_DeleteItem) :int
  (_obj :pointer)
  (item :int))

(cffi:defcfun ("wxListCtrl_DeleteAllItems" wxListCtrl_DeleteAllItems) :int
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_DeleteColumn" wxListCtrl_DeleteColumn) :int
  (_obj :pointer)
  (col :int))

(cffi:defcfun ("wxListCtrl_DeleteAllColumns" wxListCtrl_DeleteAllColumns) :int
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_ClearAll" wxListCtrl_ClearAll) :void
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_EditLabel" wxListCtrl_EditLabel) :void
  (_obj :pointer)
  (item :int))

(cffi:defcfun ("wxListCtrl_EndEditLabel" wxListCtrl_EndEditLabel) :int
  (_obj :pointer)
  (cancel :int))

(cffi:defcfun ("wxListCtrl_EnsureVisible" wxListCtrl_EnsureVisible) :int
  (_obj :pointer)
  (item :int))

(cffi:defcfun ("wxListCtrl_FindItem" wxListCtrl_FindItem) :int
  (_obj :pointer)
  (start :int)
  (str :pointer)
  (partial :int))

(cffi:defcfun ("wxListCtrl_FindItemByData" wxListCtrl_FindItemByData) :int
  (_obj :pointer)
  (start :int)
  (data :int))

(cffi:defcfun ("wxListCtrl_FindItemByPosition" wxListCtrl_FindItemByPosition) :int
  (_obj :pointer)
  (start :int)
  (x :int)
  (y :int)
  (direction :int))

(cffi:defcfun ("wxListCtrl_HitTest" wxListCtrl_HitTest) :int
  (_obj :pointer)
  (x :int)
  (y :int)
  (flags :pointer))

(cffi:defcfun ("wxListCtrl_InsertItem" wxListCtrl_InsertItem) :int
  (_obj :pointer)
  (info :pointer))

(cffi:defcfun ("wxListCtrl_InsertItemWithData" wxListCtrl_InsertItemWithData) :int
  (_obj :pointer)
  (index :int)
  (label :pointer))

(cffi:defcfun ("wxListCtrl_InsertItemWithImage" wxListCtrl_InsertItemWithImage) :int
  (_obj :pointer)
  (index :int)
  (imageIndex :int))

(cffi:defcfun ("wxListCtrl_InsertItemWithLabel" wxListCtrl_InsertItemWithLabel) :int
  (_obj :pointer)
  (index :int)
  (label :pointer)
  (imageIndex :int))

(cffi:defcfun ("wxListCtrl_InsertColumnFromInfo" wxListCtrl_InsertColumnFromInfo) :int
  (_obj :pointer)
  (col :int)
  (info :pointer))

(cffi:defcfun ("wxListCtrl_InsertColumn" wxListCtrl_InsertColumn) :int
  (_obj :pointer)
  (col :int)
  (heading :pointer)
  (format :int)
  (width :int))

(cffi:defcfun ("wxListCtrl_ScrollList" wxListCtrl_ScrollList) :int
  (_obj :pointer)
  (dx :int)
  (dy :int))

(cffi:defcfun ("wxListCtrl_SortItems" wxListCtrl_SortItems) :int
  (_obj :pointer)
  (fnc :pointer)
  (obj :pointer))

(cffi:defcfun ("wxListCtrl_UpdateStyle" wxListCtrl_UpdateStyle) :void
  (_obj :pointer))

(cffi:defcfun ("wxListCtrl_AssignImageList" wxListCtrl_AssignImageList) :void
  (_obj :pointer)
  (images :pointer)
  (which :int))

(cffi:defcfun ("wxListCtrl_GetColumn2" wxListCtrl_GetColumn2) :void
  (_obj :pointer)
  (col :int)
  (item :pointer))

(cffi:defcfun ("wxListCtrl_GetItem2" wxListCtrl_GetItem2) :void
  (_obj :pointer)
  (info :pointer))

(cffi:defcfun ("wxListCtrl_GetItemPosition2" wxListCtrl_GetItemPosition2) :void
  (_obj :pointer)
  (item :int)
  (x :pointer)
  (y :pointer))


