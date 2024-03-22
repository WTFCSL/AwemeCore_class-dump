//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelBaseAppInfo : NSObject <BDNovelAppInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isIPhoneXSeries;
- (id)installId;
- (void)loginWithCallback:(id /* block */)arg0;
- (BOOL)boeEnable;
- (id)innerAppName;
- (id)bigFontSizeString;
- (id)commonURLParams;
- (BOOL)darkModelEnable;
- (unsigned long long)indexOfCategoryChannel:(id)arg0;
- (BOOL)containChannelWithId:(id)arg0;
- (id)trackAppendAdapterCommonParams:(id)arg0;
- (id)adoptDarkColor:(id)arg0;
- (void)registerLoginListener:(id)arg0;
- (void)unRegisterLoginListener:(id)arg0;
- (BOOL)incognitoModeEnable;
- (double)bigFontSize:(double)arg0;
- (double)bigFontSizeForReader:(double)arg0;
- (BOOL)isAppDarkMode;
- (BOOL)unArchiveFilePath:(id)arg0 toPath:(id)arg1;
- (void)requestAuthBindWithType:(long long)arg0 completion:(id /* block */)arg1;
- (id)brandColor;
- (id)brandColorDarkMode;
- (BOOL)isDouYinFamily;
- (BOOL)isTouTiaoFamily;
- (id)tryEncodeWithURLString:(id)arg0;
- (id)URLWithString:(id)arg0 joinCommonParameters:(BOOL)arg1;
- (id)appName;
- (double)statusBarHeight;
- (id)channel;
- (double)osVersion;
- (id)deviceId;
- (id)userId;
- (id)appVersion;
- (id)appId;
- (id)baseUrl;
- (id)networkType;
- (void)addChannel:(id)arg0;
- (BOOL)isLogin;
- (long long)versionCode;

@end
