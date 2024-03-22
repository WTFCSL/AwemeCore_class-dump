//
//     Generated by private class-dump
//

@class BDPIndustrySDKModel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPIndustrySDKManager : NSObject {
    BDPIndustrySDKModel *_industrySDK;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_updatePkgQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSMutableArray *clients;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updatePkgQueue;
@property (retain, nonatomic) BDPIndustrySDKModel *industrySDK;

+ (void)bootstrapLaunch;
+ (id)decodeSource:(id)arg0 toPath:(id)arg1;
+ (id)sandboxIndustrySdkFolderPath;
+ (void)updateSub;
+ (id)sandboxIndustrySdkLibFolderPath:(id)arg0;
+ (id)latestLibVersionString;
+ (id)localLibVersionStringInSandbox:(id)arg0;
+ (id)lcoalLibVersionStringInBundle;
+ (id)sandboxRuntimeSDKJSPath;
+ (id)sandboxWebveiwSDKJSPath;
+ (id)sandboxWebviewSDKCssPath;
+ (id)sandboxBasebundlecheckFilePath:(id)arg0;
+ (id)lateastDownloadedPkgPath:(id)arg0;
+ (id)tempZipPackagePathForVersion:(id)arg0 md5:(id)arg1 name:(id)arg2;
+ (id)lateastDwonloadedPkgVersionString:(id)arg0;
+ (id)tempZipPackageFolderVersionPath:(id)arg0 name:(id)arg1;
+ (id)tempUnzipPathForVersion:(id)arg0 md5:(id)arg1;
+ (id)industrySdkLibFolderName;
+ (id)bundledPkgPath;
+ (id)tempSDKFolderPath;
+ (id)decompressXzPkgAtPath:(id)arg0 toDestination:(id)arg1;
+ (id)industrySdkFolderName;
+ (id)sandboxIndustrySdkLibFolderPath;
+ (id)tempZipPackageFolderPath;
+ (id)tempZipPackageFolderPath:(id)arg0;
+ (id)tempUnzipFolderPath;
+ (id)sandboxSDKConfigPath;
+ (id)sandboxAppConfigPath;
+ (id)sandboxAppConfigPath:(id)arg0;
+ (id)sharedManager;

- (id)realPagePathWithOriginPath:(id)arg0;
- (BOOL)isEnablePreload;
- (void)parseConfigThenUpdateSubPKG:(id /* block */)arg0;
- (void)downloadSDKWithUrl:(id)arg0 name:(id)arg1 version:(id)arg2 md5:(id)arg3 force:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)libVersion;
- (void)readWebViewCssWithStage:(long long)arg0 completion:(id /* block */)arg1;
- (id)pkgModelWithID:(id)arg0;
- (void)loadSDK:(BOOL)arg0 finish:(id /* block */)arg1;
- (void)updateSdkIfNeeded:(id /* block */)arg0;
- (BOOL)parseSDKConfig;
- (id)pkgNameOfPluginID:(id)arg0;
- (id)getPkgModelInstanceWithID:(id)arg0;
- (id)industrySDK;
- (void)installSDKIfNeededWithCompletion:(id /* block */)arg0;
- (void)downloadSDKWithUrl:(id)arg0 name:(id)arg1 version:(id)arg2 md5:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)subPkgHasInstalled;
- (void)downloadSubPKG:(id /* block */)arg0;
- (void)updateSubPKGIfNeeded:(id /* block */)arg0;
- (void)readScriptWithFile:(id)arg0 stage:(long long)arg1 completion:(id /* block */)arg2;
- (id)installSDKIfNeededSync;
- (void)cleanDeathedClientWrapper:(id)arg0;
- (BOOL)checkMD5ForFile:(id)arg0 expectedMD5:(id)arg1 fileMD5:(id *)arg2 error:(id *)arg3;
- (void)cleanZipPackagesUnlockedWithVersion:(id)arg0 md5:(id)arg1 name:(id)arg2;
- (BOOL)canInstallUnlocked;
- (BOOL)pkgHasInstalled:(id)arg0;
- (void)installSDKToSandboxUnlockedFromTmpPath:(id)arg0 version:(id)arg1 md5:(id)arg2 name:(id)arg3 completion:(id /* block */)arg4;
- (void)installDownloadedPkgWithPath:(id)arg0 name:(id)arg1 versionString:(id)arg2 md5:(id)arg3 completion:(id /* block */)arg4;
- (id)writeToTmpFileWithData:(id)arg0 version:(id)arg1 md5:(id)arg2 error:(id *)arg3 name:(id)arg4;
- (void)installFromBundleUnlockedWithCompletion:(id /* block */)arg0;
- (void)installFromDownloadedPkgWithCompletion:(id /* block */)arg0 name:(id)arg1;
- (void)postSDKUpdateNotification;
- (void)unzipTmpPkg:(id)arg0 version:(id)arg1 md5:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hasActiveClientUnlocked;
- (void)cleanTmpPackagesUnlockedWithTmpPath:(id)arg0 version:(id)arg1 md5:(id)arg2 name:(id)arg3;
- (void)cleanUnzipedPackagesUnlockedWithTmpPath:(id)arg0;
- (id)dictionaryWithPath:(id)arg0;
- (id)realPagePathWithURLString:(id)arg0;
- (id)replacePathInUrlString:(id)arg0 withPath:(id)arg1;
- (void)readRuntimeLibScriptWithStage:(long long)arg0 completion:(id /* block */)arg1;
- (void)readWebViewLibScriptWithStage:(long long)arg0 completion:(id /* block */)arg1;
- (id)runtimeScriptPath;
- (id)webviewScriptPath;
- (void)setIndustrySDK:(id)arg0;
- (id)updatePkgQueue;
- (void)setUpdatePkgQueue:(id)arg0;
- (void)setClients:(id)arg0;
- (id)init;
- (id)clients;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setSemaphore:(id)arg0;
- (void)registerClient:(id)arg0;
- (void)unregisterClient:(id)arg0;

@end