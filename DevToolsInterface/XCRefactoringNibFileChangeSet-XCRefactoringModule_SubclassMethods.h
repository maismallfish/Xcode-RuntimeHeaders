/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCRefactoringNibFileChangeSet.h"

@interface XCRefactoringNibFileChangeSet (XCRefactoringModule_SubclassMethods)
+ (id)fileChangeSetWithNoChangesForFilePath:(id)arg1 refactoring:(id)arg2;
- (long long)checkboxState;
- (void)checkboxStateChangedByUser:(long long)arg1;
- (void)diffDescriptorsChanged:(id)arg1;
- (void)updateMergeDirectionsForComparator:(id)arg1;
- (void)sessionEndedForComparator:(id)arg1;
- (void)previewFinishedUpdateComparator:(id)arg1;
- (void)populateComparator:(id)arg1;
- (void)previewFinished:(id)arg1;
@end
