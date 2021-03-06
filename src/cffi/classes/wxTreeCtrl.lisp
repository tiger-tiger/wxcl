
;;;wxTreeCtrl.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxcTreeItemData_Create" wxcTreeItemData_Create) :pointer
  (closure :pointer))

(cffi:defcfun ("wxcTreeItemData_GetClientClosure" wxcTreeItemData_GetClientClosure) :pointer
  (self :pointer))

(cffi:defcfun ("wxcTreeItemData_SetClientClosure" wxcTreeItemData_SetClientClosure) :void
  (self :pointer)
  (closure :pointer))

(cffi:defcfun ("wxTreeItemId_Create" wxTreeItemId_Create) :pointer)

(cffi:defcfun ("wxTreeItemId_Delete" wxTreeItemId_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxTreeItemId_IsOk" wxTreeItemId_IsOk) :int
  (_obj :pointer))

(cffi:defcfun ("wxTreeItemId_Clone" wxTreeItemId_Clone) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTreeItemId_CreateFromValue" wxTreeItemId_CreateFromValue) :pointer
  (value :int))

(cffi:defcfun ("wxTreeItemId_GetValue" wxTreeItemId_GetValue) :int
  (_obj :pointer))

(cffi:defcfun ("wxTreeEvent_GetKeyEvent" wxTreeEvent_GetKeyEvent) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTreeEvent_IsEditCancelled" wxTreeEvent_IsEditCancelled) :int
  (_obj :pointer))

(cffi:defcfun ("wxTreeEvent_Allow" wxTreeEvent_Allow) :void
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_Create" wxTreeCtrl_Create) :pointer
  (_obj :pointer)
  (_cmp :pointer)
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxTreeCtrl_Create2" wxTreeCtrl_Create2) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxTreeCtrl_GetCount" wxTreeCtrl_GetCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_GetIndent" wxTreeCtrl_GetIndent) :int
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_SetIndent" wxTreeCtrl_SetIndent) :void
  (_obj :pointer)
  (indent :int))

(cffi:defcfun ("wxTreeCtrl_GetSpacing" wxTreeCtrl_GetSpacing) :int
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_SetSpacing" wxTreeCtrl_SetSpacing) :void
  (_obj :pointer)
  (spacing :int))

(cffi:defcfun ("wxTreeCtrl_GetImageList" wxTreeCtrl_GetImageList) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_GetStateImageList" wxTreeCtrl_GetStateImageList) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_AssignImageList" wxTreeCtrl_AssignImageList) :void
  (_obj :pointer)
  (imageList :pointer))

(cffi:defcfun ("wxTreeCtrl_AssignStateImageList" wxTreeCtrl_AssignStateImageList) :void
  (_obj :pointer)
  (imageList :pointer))

(cffi:defcfun ("wxTreeCtrl_SetImageList" wxTreeCtrl_SetImageList) :void
  (_obj :pointer)
  (imageList :pointer))

(cffi:defcfun ("wxTreeCtrl_SetStateImageList" wxTreeCtrl_SetStateImageList) :void
  (_obj :pointer)
  (imageList :pointer))

(cffi:defcfun ("wxTreeCtrl_GetItemText" wxTreeCtrl_GetItemText) :wxstring
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetItemImage" wxTreeCtrl_GetItemImage) :int
  (_obj :pointer)
  (item :pointer)
  (which :int))

(cffi:defcfun ("wxTreeCtrl_GetItemData" wxTreeCtrl_GetItemData) :pointer
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetItemClientClosure" wxTreeCtrl_GetItemClientClosure) :pointer
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_SetItemText" wxTreeCtrl_SetItemText) :void
  (_obj :pointer)
  (item :pointer)
  (text :pointer))

(cffi:defcfun ("wxTreeCtrl_SetItemImage" wxTreeCtrl_SetItemImage) :void
  (_obj :pointer)
  (item :pointer)
  (image :int)
  (which :int))

(cffi:defcfun ("wxTreeCtrl_SetItemData" wxTreeCtrl_SetItemData) :void
  (_obj :pointer)
  (item :pointer)
  (closure :pointer))

(cffi:defcfun ("wxTreeCtrl_SetItemClientClosure" wxTreeCtrl_SetItemClientClosure) :void
  (_obj :pointer)
  (item :pointer)
  (closure :pointer))

(cffi:defcfun ("wxTreeCtrl_SetItemHasChildren" wxTreeCtrl_SetItemHasChildren) :void
  (_obj :pointer)
  (item :pointer)
  (has :int))

(cffi:defcfun ("wxTreeCtrl_SetItemBold" wxTreeCtrl_SetItemBold) :void
  (_obj :pointer)
  (item :pointer)
  (bold :int))

(cffi:defcfun ("wxTreeCtrl_SetItemDropHighlight" wxTreeCtrl_SetItemDropHighlight) :void
  (_obj :pointer)
  (item :pointer)
  (highlight :int))

(cffi:defcfun ("wxTreeCtrl_SetItemTextColour" wxTreeCtrl_SetItemTextColour) :void
  (_obj :pointer)
  (item :pointer)
  (col :pointer))

(cffi:defcfun ("wxTreeCtrl_SetItemBackgroundColour" wxTreeCtrl_SetItemBackgroundColour) :void
  (_obj :pointer)
  (item :pointer)
  (col :pointer))

(cffi:defcfun ("wxTreeCtrl_SetItemFont" wxTreeCtrl_SetItemFont) :void
  (_obj :pointer)
  (item :pointer)
  (font :pointer))

(cffi:defcfun ("wxTreeCtrl_IsVisible" wxTreeCtrl_IsVisible) :int
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_ItemHasChildren" wxTreeCtrl_ItemHasChildren) :int
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_IsExpanded" wxTreeCtrl_IsExpanded) :int
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_IsSelected" wxTreeCtrl_IsSelected) :int
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_IsBold" wxTreeCtrl_IsBold) :int
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetChildrenCount" wxTreeCtrl_GetChildrenCount) :int
  (_obj :pointer)
  (item :pointer)
  (recursively :int))

(cffi:defcfun ("wxTreeCtrl_GetRootItem" wxTreeCtrl_GetRootItem) :void
  (_obj :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetSelection" wxTreeCtrl_GetSelection) :void
  (_obj :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetSelections" wxTreeCtrl_GetSelections) :int
  (_obj :pointer)
  (selections :pointer))

(cffi:defcfun ("wxTreeCtrl_GetParent" wxTreeCtrl_GetParent) :void
  (_obj :pointer)
  (item :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetFirstChild" wxTreeCtrl_GetFirstChild) :void
  (_obj :pointer)
  (item :pointer)
  (cookie :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetNextChild" wxTreeCtrl_GetNextChild) :void
  (_obj :pointer)
  (item :pointer)
  (cookie :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetLastChild" wxTreeCtrl_GetLastChild) :void
  (_obj :pointer)
  (item :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetNextSibling" wxTreeCtrl_GetNextSibling) :void
  (_obj :pointer)
  (item :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetPrevSibling" wxTreeCtrl_GetPrevSibling) :void
  (_obj :pointer)
  (item :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetFirstVisibleItem" wxTreeCtrl_GetFirstVisibleItem) :void
  (_obj :pointer)
  (item :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetNextVisible" wxTreeCtrl_GetNextVisible) :void
  (_obj :pointer)
  (item :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetPrevVisible" wxTreeCtrl_GetPrevVisible) :void
  (_obj :pointer)
  (item :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_AddRoot" wxTreeCtrl_AddRoot) :void
  (_obj :pointer)
  (text :pointer)
  (image :int)
  (selectedImage :int)
  (data :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_PrependItem" wxTreeCtrl_PrependItem) :void
  (_obj :pointer)
  (parent :pointer)
  (text :pointer)
  (image :int)
  (selectedImage :int)
  (data :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_InsertItem" wxTreeCtrl_InsertItem) :void
  (_obj :pointer)
  (parent :pointer)
  (idPrevious :pointer)
  (text :pointer)
  (image :int)
  (selectedImage :int)
  (data :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_InsertItem2" wxTreeCtrl_InsertItem2) :void
  (_obj :pointer)
  (parent :pointer)
  (idPrevious :pointer)
  (text :pointer)
  (image :int)
  (selectedImage :int)
  (closure :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_InsertItemByIndex" wxTreeCtrl_InsertItemByIndex) :void
  (_obj :pointer)
  (parent :pointer)
  (index :int)
  (text :pointer)
  (image :int)
  (selectedImage :int)
  (data :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_InsertItemByIndex2" wxTreeCtrl_InsertItemByIndex2) :void
  (_obj :pointer)
  (parent :pointer)
  (index :int)
  (text :pointer)
  (image :int)
  (selectedImage :int)
  (data :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_AppendItem" wxTreeCtrl_AppendItem) :void
  (_obj :pointer)
  (parent :pointer)
  (text :pointer)
  (image :int)
  (selectedImage :int)
  (data :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_Delete" wxTreeCtrl_Delete) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_DeleteChildren" wxTreeCtrl_DeleteChildren) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_DeleteAllItems" wxTreeCtrl_DeleteAllItems) :void
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_Expand" wxTreeCtrl_Expand) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_Collapse" wxTreeCtrl_Collapse) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_CollapseAndReset" wxTreeCtrl_CollapseAndReset) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_Toggle" wxTreeCtrl_Toggle) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_Unselect" wxTreeCtrl_Unselect) :void
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_UnselectAll" wxTreeCtrl_UnselectAll) :void
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_SelectItem" wxTreeCtrl_SelectItem) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_EnsureVisible" wxTreeCtrl_EnsureVisible) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_ScrollTo" wxTreeCtrl_ScrollTo) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_EditLabel" wxTreeCtrl_EditLabel) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetEditControl" wxTreeCtrl_GetEditControl) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxTreeCtrl_EndEditLabel" wxTreeCtrl_EndEditLabel) :void
  (_obj :pointer)
  (item :pointer)
  (discardChanges :int))

(cffi:defcfun ("wxTreeCtrl_OnCompareItems" wxTreeCtrl_OnCompareItems) :int
  (_obj :pointer)
  (item1 :pointer)
  (item2 :pointer))

(cffi:defcfun ("wxTreeCtrl_SortChildren" wxTreeCtrl_SortChildren) :void
  (_obj :pointer)
  (item :pointer))

(cffi:defcfun ("wxTreeCtrl_HitTest" wxTreeCtrl_HitTest) :void
  (_obj :pointer)
  (_x :int)
  (_y :int)
  (flags :pointer)
  (_item :pointer))

(cffi:defcfun ("wxTreeCtrl_GetBoundingRect" wxTreeCtrl_GetBoundingRect) :int
  (_obj :pointer)
  (item :pointer)
  (textOnly :int)
  (_x :pointer)
  (_y :pointer)
  (_w :pointer)
  (_h :pointer))


