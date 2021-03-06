/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

@class DVTBorderedView, DVTObservingToken, DVTReplacementView, IDEBatchFindReplacePreviewController, IDEWorkspaceTabController, NSButton, NSString;

@interface IDEBatchFindReplaceableSheetController : NSWindowController
{
    DVTBorderedView *_borderView;
    DVTReplacementView *_contentView;
    NSButton *_defaultButton;
    NSButton *_cancelButton;
    IDEWorkspaceTabController *_workspaceTabController;
    id _sheetCompletionBlock;
    IDEBatchFindReplacePreviewController *_previewController;
    DVTObservingToken *_checkedItemsWatcher;
}

@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)beginSheetForReplaceController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property(readonly) BOOL isSheetBeingShown;
@property(copy) NSString *cancelButtonTitle;
@property(copy) NSString *defaultButtonTitle;
@property(readonly) DVTReplacementView *contentView;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initForWorkspaceTabController:(id)arg1;

@end

