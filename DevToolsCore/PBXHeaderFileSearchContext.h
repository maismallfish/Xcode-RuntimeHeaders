/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, PBXHeaderMap;

@interface PBXHeaderFileSearchContext : NSObject
{
    BOOL _lookInIncludersDirectory;
    NSArray *_userHeaderSearchPaths;
    PBXHeaderMap *_headermap;
    NSArray *_systemHeaderSearchPaths;
    NSArray *_frameworkSearchPaths;
    NSMutableDictionary *_directoryEntriesCache;
    NSMutableDictionary *_frameworkPathsCache;
    NSMutableDictionary *_tildeInPathsCache;
}

+ (id)headerFileSearchContextWithUserHeaderSearchPaths:(id)arg1 headermap:(id)arg2 systemHeaderSearchPaths:(id)arg3 frameworkSearchPaths:(id)arg4;
- (id)headerPathForHeaderInclusionString:(id)arg1 includedFromFilesAtPaths:(id)arg2 usingQuoteNotation:(BOOL)arg3;
- (id)headerPathForHeaderInclusionString:(id)arg1 includedFromFilesAtPaths:(id)arg2 usingQuoteNotation:(BOOL)arg3 ensureFileExists:(BOOL)arg4;
- (id)frameworkSearchPaths;
- (id)systemHeaderSearchPaths;
- (id)headermap;
- (id)userHeaderSearchPaths;
- (void)_fillFrameworkPathCache;
- (id)_fullPathOfFileNamed:(id)arg1 inPath:(id)arg2;
- (void)setHeadermap:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUserHeaderSearchPaths:(id)arg1 headermap:(id)arg2 systemHeaderSearchPaths:(id)arg3 frameworkSearchPaths:(id)arg4;

@end

