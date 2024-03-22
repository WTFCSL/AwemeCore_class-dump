//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, AWEDanmakuActivityConfigModel, NSMutableArray, AWEPlayInteractionDanmakuStylesInfo;

@interface AWEDanmakuConfigSettingManager : NSObject <AWEUserMessage, AWEDanmakuSettingManagerProtocol> {
    BOOL _needFakeDanmakuSwitch;
    BOOL _hasRequestConfGet;
    AWEPlayInteractionDanmakuStylesInfo *_verticalStylesInfo;
    AWEPlayInteractionDanmakuStylesInfo *_landScapeStylesInfo;
    NSMutableDictionary *_followStatusChangeDict;
    NSMutableArray *_danmakuMaterialNames;
    AWEDanmakuActivityConfigModel *_danmakuActivityConfig;
    AWEPlayInteractionDanmakuStylesInfo *_verticalDefaultStylesInfo;
    AWEPlayInteractionDanmakuStylesInfo *_landScapeDefaultStylesInfo;
    AWEPlayInteractionDanmakuStylesInfo *_remoteVerticalResponseInfo;
    AWEPlayInteractionDanmakuStylesInfo *_remotelandScapeResponseInfo;
}

@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *verticalStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *landScapeStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *verticalDefaultStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *landScapeDefaultStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *remoteVerticalResponseInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *remotelandScapeResponseInfo;
@property (nonatomic) BOOL needFakeDanmakuSwitch;
@property (retain, nonatomic) NSMutableDictionary *followStatusChangeDict;
@property (nonatomic) BOOL hasRequestConfGet;
@property (retain, nonatomic) NSMutableArray *danmakuMaterialNames;
@property (retain, nonatomic) AWEDanmakuActivityConfigModel *danmakuActivityConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)enableVerticalDanmaku;
+ (BOOL)enableDanmakuMask;
+ (id)fetchDanmakuConfigUrl;
+ (BOOL)enableAuthorSupportVerticalDanmaku;
+ (unsigned long long)verticalDanmakuStyle;
+ (id)updateDanmakuConfigUrl;
+ (id)danmakuPriorityOrder;
+ (long long)maxShieldWord;
+ (BOOL)enableDanmakuLimitDescription;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (id)aAWEPadModuleAdapter;
- (id)verticalStylesInfo;
- (void)updateSwitchOn:(BOOL)arg0 danmakuScene:(unsigned long long)arg1;
- (BOOL)enableLandScapeDanmaku;
- (void)updateDanmakuMaskSwitchOn:(BOOL)arg0;
- (void)uploadDanmakuShieldIfNeed;
- (void)uploadDanmakuSettingsIfNeed:(unsigned long long)arg0;
- (id)followStatusChangeDict;
- (id)landScapeStylesInfo;
- (BOOL)hasRequestConfGet;
- (void)requestDanmakuSettingsForNextEffective;
- (id)danmakuMaterialNames;
- (void)setDanmakuActivityConfig:(id)arg0;
- (id)danmakuActivityConfig;
- (id)getRequestLogID:(id)arg0;
- (void)awe_uploadDanmakuShieldIfNeed;
- (BOOL)enableDanmakuSwitchSame;
- (id)loadVerticalDanmakuSettingsCache;
- (id)loadLandScapeDanmakuSettingsCache;
- (id)defaultDanmakuSettingForScene:(unsigned long long)arg0;
- (BOOL)needFetchDanmakuSetting;
- (void)requestDanmakuSettings;
- (void)configDanmakuConfigFromCacheIfNeed;
- (void)updateDanmakuAlpha:(double)arg0 danmakuScene:(unsigned long long)arg1;
- (void)updateDanmakuShootSpeed:(unsigned long long)arg0 danmakuScene:(unsigned long long)arg1;
- (void)updateDanmakuFontSize:(unsigned long long)arg0 danmakuScene:(unsigned long long)arg1;
- (void)updateVerticalDanmakuSettingsCache:(id)arg0;
- (void)updateLandScapeDanmakuSettingsCache:(id)arg0;
- (id)verticalDefaultStylesInfo;
- (id)landScapeDefaultStylesInfo;
- (void)setHasRequestConfGet:(BOOL)arg0;
- (void)updateDanmakuCacheSettingIfNeed:(id)arg0 danmakuScene:(unsigned long long)arg1;
- (void)setRemotelandScapeResponseInfo:(id)arg0;
- (void)setRemoteVerticalResponseInfo:(id)arg0;
- (void)setNeedFakeDanmakuSwitch:(BOOL)arg0;
- (id)remoteVerticalResponseInfo;
- (void)uploadDanmakuSettingsWithParams:(id)arg0;
- (id)remotelandScapeResponseInfo;
- (void)setFollowStatusChangeDict:(id)arg0;
- (void)resetDefaultDanmakuSettingForScene:(unsigned long long)arg0;
- (BOOL)enableDanmakuCacheRemove;
- (void)updateDanmakuDisplayArea:(unsigned long long)arg0 danmakuScene:(unsigned long long)arg1;
- (void)awe_updateShieldSwitch:(BOOL)arg0;
- (void)awe_updateShieldWords:(id)arg0;
- (void)setVerticalStylesInfo:(id)arg0;
- (void)setLandScapeStylesInfo:(id)arg0;
- (BOOL)needFakeDanmakuSwitch;
- (void)setDanmakuMaterialNames:(id)arg0;
- (void)setVerticalDefaultStylesInfo:(id)arg0;
- (void)setLandScapeDefaultStylesInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)dealloc;

@end