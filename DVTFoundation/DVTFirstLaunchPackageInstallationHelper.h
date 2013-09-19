/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTWeakInterposer, NSArray;

@interface DVTFirstLaunchPackageInstallationHelper : NSObject
{
    DVTWeakInterposer *_delegate_dvtWeakInterposer;
    BOOL _packagesOnly;
    NSArray *_packagesToInstall;
}

+ (void)initialize;
@property(retain) NSArray *packagesToInstall; // @synthesize packagesToInstall=_packagesToInstall;
- (void).cxx_destruct;
- (id)_determinePackagesToInstall;
- (void)installPackagesWithAuthRef:(struct AuthorizationOpaqueRef *)arg1;
- (id)_downloadablesToInstall;
- (id)_packageURLsToInstall;
- (id)_allPackagesInPackagesFolder;
- (id)_allPackagesInfo;
- (BOOL)_needToInstallMobileDevicePackage:(id)arg1;
- (BOOL)_needToCheckMobileDevicePackage;
- (void)_createCacheFile;
- (id)_cacheFilePath;
- (id)darwinUserCacheDirectoryPath;
- (void)_createCacheFileIfNeeded:(id)arg1;
- (id)initWithDelegate:(id)arg1 packagesOnly:(BOOL)arg2;
@property __weak id <DVTPackageInstallerHelperDelegate> delegate;

@end
