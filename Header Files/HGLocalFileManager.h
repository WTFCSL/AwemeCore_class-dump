//
//     Generated by private class-dump
//

@class NSString, NSLock, NSSet;

@interface HGLocalFileManager : NSObject {
    BOOL _appMoveToCacheFolder;
    BOOL _enableUserStorageMoved;
    NSString *_tmaFolerPath;
    NSString *_tmaAppFolderPath;
    NSString *_backupAppsFolderPath;
    NSString *_cacheFolderPath;
    NSString *_appsFolderPath;
    NSString *_odrsFolderPath;
    NSString *_appsSandboxPath;
    NSString *_userStoragePath;
    NSString *_templateFolderPath;
    NSString *_innerMetaDictPath;
    NSString *_batchMetaFolderPath;
    NSString *_pluginsFolderPath;
    NSString *_tempFolderPath;
    NSString *_JSLibPath;
    NSString *_offlineFolderPath;
    NSString *_resourceFolderPath;
    NSString *_internalBundleFolderPath;
    NSString *_innerJSPkgFolderPath;
    NSSet *_appFolderNameSet;
    NSLock *_userStorageMovedLock;
}

@property (class, readonly, nonatomic) NSString *appFileUserPrefix;

@property (copy, nonatomic) NSString *tmaFolerPath;
@property (copy, nonatomic) NSString *tempFolderPath;
@property (copy, nonatomic) NSString *tmaAppFolderPath;
@property (copy, nonatomic) NSString *JSLibPath;
@property (copy, nonatomic) NSString *offlineFolderPath;
@property (copy, nonatomic) NSString *resourceFolderPath;
@property (copy, nonatomic) NSString *internalBundleFolderPath;
@property (copy, nonatomic) NSString *innerMetaDictPath;
@property (copy, nonatomic) NSString *innerJSPkgFolderPath;
@property (copy, nonatomic) NSString *batchMetaFolderPath;
@property (copy, nonatomic) NSString *cacheFolderPath;
@property (copy, nonatomic) NSString *appsFolderPath;
@property (copy, nonatomic) NSString *appsSandboxPath;
@property (copy, nonatomic) NSString *templateFolderPath;
@property (nonatomic) BOOL appMoveToCacheFolder;
@property (nonatomic) BOOL enableUserStorageMoved;
@property (nonatomic) BOOL hasUserStorageMoved;
@property (retain, nonatomic) NSLock *userStorageMovedLock;
@property (readonly, copy, nonatomic) NSString *backupAppsFolderPath;
@property (readonly, copy, nonatomic) NSString *odrsFolderPath;
@property (readonly, copy, nonatomic) NSString *userStoragePath;
@property (readonly, copy, nonatomic) NSString *pluginsFolderPath;

+ (long long)sizeWithPath:(id)arg0;
+ (BOOL)removeFolderIfNeed:(id)arg0;
+ (BOOL)createFolderIfNeed:(id)arg0;
+ (void)clearSharedInstance;
+ (id)JSLibFolderName;
+ (id)hexStringToData:(id)arg0;
+ (id)dataToHexString:(id)arg0;
+ (void)clearFolderInBackground:(id)arg0;
+ (id)appFileUserPrefix;
+ (id)offlineFolderName;
+ (id)sharedInstance;
+ (BOOL)moveItemAtPath:(id)arg0 toPath:(id)arg1 error:(id *)arg2;

- (id)JSLibGameCorePath;
- (id)innerJSPkgFolderPath;
- (id)odrsFolderPath;
- (id)appFilePathWithPrefix:(id)arg0 name:(id)arg1;
- (id)pluginPkgPathWithPluginID:(id)arg0;
- (id)appPkgPathWithID:(id)arg0 versionMark:(id)arg1 name:(id)arg2;
- (id)appPkgRoomWithAppId:(id)arg0 versionMark:(id)arg1 suffix:(id)arg2;
- (id)backupAppPkgDirPathWithID:(id)arg0 versionMark:(id)arg1;
- (id)appBasicPathWithID:(id)arg0;
- (id)appsFolderPath;
- (id)appsSandboxPath;
- (id)backUpAppBasicPathWithID:(id)arg0;
- (id)appPkgDirPathWithID:(id)arg0 versionMark:(id)arg1;
- (BOOL)appMoveToCacheFolder;
- (id)oldAppBasicPathWithId:(id)arg0;
- (id)JSLibPath;
- (id)cacheFolderPath;
- (void)cleanAllAppCacheExceptAppIds:(id)arg0;
- (void)cleanAllUserCacheExceptAppIds:(id)arg0;
- (id)offlineFolderPath;
- (void)cleanAllUnnecessaryInTMA;
- (void)restoreToOriginalStateExceptAppFolder;
- (void)clearTmgCache;
- (id)pluginsFolderPath;
- (id)batchMetaFolderPath;
- (void)moveUserStorageIfNeedWithCompletion:(id /* block */)arg0;
- (id)appSandboxPathWithID:(id)arg0;
- (id)appTempPathWithID:(id)arg0;
- (id)tmaFolerPath;
- (void)moveUserStorageIfNeed;
- (id)userStorageMovedLock;
- (void)setHasUserStorageMoved:(BOOL)arg0;
- (BOOL)hasUserStorageMoved;
- (id)backupAppsFolderPath;
- (id)tmaAppFolderPath;
- (id)templateFolderPath;
- (id)templatePluginPkgPathWithPluginID:(id)arg0;
- (id)templatePluginPkgPathWithPluginID:(id)arg0 version:(id)arg1;
- (id)newUserStoragePathWithID:(id)arg0;
- (id)tempFolderPath;
- (id)resourceFolderPath;
- (id)appListCachePathWithUserID:(id)arg0;
- (id)appPkgPathWithID:(id)arg0 name:(id)arg1;
- (id)appFileInPkgRoomWithAppId:(id)arg0 versionMark:(id)arg1 suffix:(id)arg2 filename:(id)arg3;
- (id)templatePluginPkgPathWithPluginID:(id)arg0 version:(id)arg1 name:(id)arg2;
- (id)appFolderSpecialFileNames;
- (id)JSLibAppCorePath;
- (id)JSLibVConsolePath;
- (id)JSLibWebpHookPath;
- (id)resourcePathWithResourceID:(id)arg0;
- (void)cleanPluginsWithSizeLimit:(unsigned long long)arg0;
- (void)restoreToOriginalState;
- (void)restoreAppFolderToOriginalState;
- (void)setAppMoveToCacheFolder:(BOOL)arg0;
- (void)setTmaFolerPath:(id)arg0;
- (void)setTmaAppFolderPath:(id)arg0;
- (void)setCacheFolderPath:(id)arg0;
- (void)setAppsFolderPath:(id)arg0;
- (void)setAppsSandboxPath:(id)arg0;
- (void)setTemplateFolderPath:(id)arg0;
- (id)innerMetaDictPath;
- (void)setInnerMetaDictPath:(id)arg0;
- (void)setBatchMetaFolderPath:(id)arg0;
- (void)setTempFolderPath:(id)arg0;
- (void)setJSLibPath:(id)arg0;
- (void)setOfflineFolderPath:(id)arg0;
- (void)setResourceFolderPath:(id)arg0;
- (id)internalBundleFolderPath;
- (void)setInternalBundleFolderPath:(id)arg0;
- (void)setInnerJSPkgFolderPath:(id)arg0;
- (BOOL)enableUserStorageMoved;
- (void)setEnableUserStorageMoved:(BOOL)arg0;
- (void)setUserStorageMovedLock:(id)arg0;
- (id)appStorageFilePathWithID:(id)arg0;
- (id)oldAppSandboxPathWithID:(id)arg0;
- (id)oldAppStorageFilePathWithID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)userStoragePath;
- (BOOL)moveItemAtPath:(id)arg0 toPath:(id)arg1;

@end
