//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableSet, BytedCertUIConfig;

@interface BytedCertWrapper : NSObject {
    NSMutableDictionary *_modelPathList;
}

@property (readonly, nonatomic) NSMutableSet *geckoChannelList;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *mDownloadPath;
@property (retain, nonatomic) NSString *mDeviceId;
@property (readonly, nonatomic) BytedCertUIConfig *uiConfig;
@property (retain, nonatomic) NSMutableDictionary *modelPathList;

+ (BOOL)isReflectionLivenessModelReady;
+ (int)reflectionLivenessModelStatus;
+ (id)sharedInstance;

- (void)preload:(id /* block */)arg0;
- (id)uiConfig;
- (void)setPreloadParams:(id)arg0;
- (void)doFaceLivenessWithParams:(id)arg0 extraParams:(id)arg1 callback:(id /* block */)arg2;
- (id)getSDKVersionInfo;
- (id)mDownloadPath;
- (id)mDeviceId;
- (void)initDownloadParams:(id)arg0;
- (int)checkModelAvailable;
- (void)preload:(id /* block */)arg0 checkAfterLoad:(BOOL)arg1;
- (id)geckoChannelList;
- (void)checkLoadStatus:(id /* block */)arg0;
- (void)geckoUpdate:(id /* block */)arg0 eventDelegate:(id)arg1;
- (void)setMDownloadPath:(id)arg0;
- (void)setMDeviceId:(id)arg0;
- (id)geckoAccessKey;
- (int)checkChannelAvailable:(id)arg0 channel:(id)arg1;
- (int)checkChannelAvailable:(id)arg0 channel:(id)arg1 checkMd5:(BOOL)arg2;
- (id)modelPathList;
- (int)checkResourceStatusWithChannel:(id)arg0;
- (void)checkAndPreload:(id /* block */)arg0;
- (int)checkModelAvailable:(id)arg0 path:(id)arg1;
- (void)geckoDownloadAudioResource:(id /* block */)arg0;
- (void)doFaceLivenessWithParams:(id)arg0 extraParams:(id)arg1 shouldPresent:(id /* block */)arg2 ignoreInit:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)doFaceLivenessWithParams:(id)arg0 shouldPresent:(id /* block */)arg1 callback:(id /* block */)arg2;
- (void)doFaceLivenessWithParams:(id)arg0 extraParams:(id)arg1 shouldPresent:(id /* block */)arg2 callback:(id /* block */)arg3;
- (void)invokeTakePhotoByCamera:(id)arg0 callback:(id /* block */)arg1;
- (void)invokeTakePhotoByAlbum:(id)arg0 callback:(id /* block */)arg1;
- (void)invokeTakePhotoAlert:(id)arg0 callback:(id /* block */)arg1;
- (void)doOCRWithType:(id)arg0 params:(id)arg1 ignoreInit:(BOOL)arg2 callback:(id /* block */)arg3;
- (void)setModelPathList:(id)arg0;
- (void)setAppId:(id)arg0;
- (id)init;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (void)clearCache;
- (id)appVersion;
- (void)setLanguage:(id)arg0;
- (id)appId;

@end