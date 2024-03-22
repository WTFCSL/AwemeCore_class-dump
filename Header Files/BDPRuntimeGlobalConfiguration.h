//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, NSString;

@interface BDPRuntimeGlobalConfiguration : NSObject {
    BOOL _isInHouse;
    BOOL _padFixDisable;
    BOOL _isMenuHidden;
    BOOL _shouldDismissShareLoading;
    BOOL _shouldAutoUpdateRelativeData;
    BOOL _shouldAutoPreloadWebResource;
    BOOL _shouldAutoPreloadNativeResource;
    BOOL _shouldRestoreAudioSessionDeactive;
    BOOL _shouldCancelPreloadWhenNotWifi;
    BOOL _shouldLoadingHidden;
    BOOL _shouldLoadingToolBarMenuHidden;
    BOOL _isSmartPreloadEnabled;
    BOOL _enableJSThreadCrashProtection;
    BOOL _extremelyPreloadDegrade;
    BOOL _exitNotiReturnLastScreenShoot;
    long long _maxWarmBootCacheCount;
    unsigned long long _toolBarMenuHidden;
    NSDictionary *_InHousePPEBOEInfo;
    NSArray *_ironManOdrList;
    NSArray *_hgIronManOdrList;
    NSString *_odrVersion;
    NSString *_hgOdrVersion;
}

@property (nonatomic) BOOL isInHouse;
@property (nonatomic) BOOL padFixDisable;
@property (nonatomic) BOOL isMenuHidden;
@property (nonatomic) long long maxWarmBootCacheCount;
@property (nonatomic) BOOL shouldDismissShareLoading;
@property (nonatomic) BOOL shouldAutoUpdateRelativeData;
@property (nonatomic) BOOL shouldAutoPreloadWebResource;
@property (nonatomic) BOOL shouldAutoPreloadNativeResource;
@property (nonatomic) BOOL shouldRestoreAudioSessionDeactive;
@property (nonatomic) BOOL shouldCancelPreloadWhenNotWifi;
@property (nonatomic) unsigned long long toolBarMenuHidden;
@property (nonatomic) BOOL shouldLoadingHidden;
@property (nonatomic) BOOL shouldLoadingToolBarMenuHidden;
@property (nonatomic) BOOL isSmartPreloadEnabled;
@property (nonatomic) BOOL enableJSThreadCrashProtection;
@property (retain, nonatomic) NSDictionary *InHousePPEBOEInfo;
@property (retain, nonatomic) NSArray *ironManOdrList;
@property (retain, nonatomic) NSArray *hgIronManOdrList;
@property (retain, nonatomic) NSString *odrVersion;
@property (retain, nonatomic) NSString *hgOdrVersion;
@property (nonatomic) BOOL extremelyPreloadDegrade;
@property (nonatomic) BOOL exitNotiReturnLastScreenShoot;

+ (id)defaultConfiguration;

- (void)dealloc;
- (BOOL)isInHouse;
- (id)odrVersion;
- (void)setOdrVersion:(id)arg0;
- (void)setMaxWarmBootCacheCount:(long long)arg0;
- (void)setIsInHouse:(BOOL)arg0;
- (long long)maxWarmBootCacheCount;
- (BOOL)shouldDismissShareLoading;
- (void)setShouldDismissShareLoading:(BOOL)arg0;
- (BOOL)shouldAutoUpdateRelativeData;
- (void)setShouldAutoUpdateRelativeData:(BOOL)arg0;
- (BOOL)shouldAutoPreloadWebResource;
- (void)setShouldAutoPreloadWebResource:(BOOL)arg0;
- (BOOL)shouldAutoPreloadNativeResource;
- (void)setShouldAutoPreloadNativeResource:(BOOL)arg0;
- (BOOL)shouldRestoreAudioSessionDeactive;
- (void)setShouldRestoreAudioSessionDeactive:(BOOL)arg0;
- (BOOL)shouldCancelPreloadWhenNotWifi;
- (void)setShouldCancelPreloadWhenNotWifi:(BOOL)arg0;
- (BOOL)isMenuHidden;
- (void)setIsMenuHidden:(BOOL)arg0;
- (BOOL)isSmartPreloadEnabled;
- (void)setIsSmartPreloadEnabled:(BOOL)arg0;
- (BOOL)padFixDisable;
- (void)setPadFixDisable:(BOOL)arg0;
- (void)setEnableJSThreadCrashProtection:(BOOL)arg0;
- (void)setToolBarMenuHidden:(unsigned long long)arg0;
- (void)setIronManOdrList:(id)arg0;
- (void)setHgIronManOdrList:(id)arg0;
- (void)setHgOdrVersion:(id)arg0;
- (void)setExitNotiReturnLastScreenShoot:(BOOL)arg0;
- (void)setExtremelyPreloadDegrade:(BOOL)arg0;
- (id)InHousePPEBOEInfo;
- (id)ironManOdrList;
- (id)hgIronManOdrList;
- (BOOL)shouldLoadingHidden;
- (BOOL)shouldLoadingToolBarMenuHidden;
- (BOOL)extremelyPreloadDegrade;
- (id)getODRVersionWithMetaURL:(id)arg0;
- (BOOL)exitNotiReturnLastScreenShoot;
- (id)hgOdrVersion;
- (unsigned long long)toolBarMenuHidden;
- (void)setShouldLoadingHidden:(BOOL)arg0;
- (void)setShouldLoadingToolBarMenuHidden:(BOOL)arg0;
- (BOOL)enableJSThreadCrashProtection;
- (void)setInHousePPEBOEInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
