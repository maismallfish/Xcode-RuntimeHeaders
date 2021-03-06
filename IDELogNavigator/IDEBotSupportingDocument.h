/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEEditorDocument.h"

@class DVTObservingToken, IDEBot, IDEBotExecution, IDESchemeActionsInvocationRecord, NSArray, NSString;

@interface IDEBotSupportingDocument : IDEEditorDocument
{
    DVTObservingToken *_botExecutionUpdateToken;
    DVTObservingToken *_botExecutionFinishedToken;
    DVTObservingToken *_schemeActionsInvocationRecordUpdateToken;
    NSArray *_scmLogs;
    NSArray *_activityLogs;
    NSString *_buildAgentLog;
    NSString *_xcodebuildLog;
    NSArray *_issueSummaryCollections;
}

+ (id)keyPathsForValuesAffectingSchemeActionsInvocationRecord;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(copy, nonatomic) NSArray *issueSummaryCollections; // @synthesize issueSummaryCollections=_issueSummaryCollections;
- (void).cxx_destruct;
- (void)fetchGeniusResultsForDocumentLocations:(id)arg1 inWorkspace:(id)arg2 withCompletionHandler:(id)arg3;
- (void)editorDocumentDidClose;
- (void)fetchLogsWithCompletionHandler:(id)arg1;
- (id)issueSummaryForIndexPath:(id)arg1;
- (void)updateIssueCategories;
- (void)schemeActionsInvocationRecordDidChange;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *schemeActionsInvocationRecord;
- (void)botExecutionDidFinish;
@property(readonly, nonatomic) IDEBotExecution *botExecution;
@property(readonly, nonatomic) IDEBot *bot;
- (id)displayName;
- (int)readOnlyStatus;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

