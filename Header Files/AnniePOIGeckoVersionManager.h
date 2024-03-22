//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, AnniePOICustomVersionSetting, NSMutableArray;

@interface AnniePOIGeckoVersionManager : NSObject <IESGurdEventDelegate> {
    NSMutableDictionary *_localMap;
    NSMutableDictionary *_settingMap;
    NSMutableArray *_settingChannelList;
    AnniePOICustomVersionSetting *_versionSetting;
}

@property (retain, nonatomic) NSMutableDictionary *localMap;
@property (retain, nonatomic) NSMutableDictionary *settingMap;
@property (retain, nonatomic) NSMutableArray *settingChannelList;
@property (retain, nonatomic) AnniePOICustomVersionSetting *versionSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customVersionSettings;
+ (id)sharedInstance;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)arg0 channel:(id)arg1 succeed:(BOOL)arg2 error:(id)arg3;
- (id)fixBulletSchemaURL:(id)arg0;
- (void)setLocalMap:(id)arg0;
- (void)setSettingChannelList:(id)arg0;
- (void)setSettingMap:(id)arg0;
- (void)configRemoteSetting;
- (void)setupCubeSchemaInterceptorBlock;
- (void)setupCubeFetchUniqueKeyBlock;
- (void)setVersionSetting:(id)arg0;
- (id)versionSetting;
- (id)settingChannelList;
- (id)settingMap;
- (void)bundleVersionMapWithChannel:(id)arg0;
- (id)geckoIdForChannel:(id)arg0;
- (id)geckoInfoKeyForChannel:(id)arg0 geckoId:(id)arg1;
- (id)localMap;
- (id)targetVersionCanUse:(id)arg0 trackParams:(id)arg1;
- (BOOL)hasGeckoResourcesForChannel:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end