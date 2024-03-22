//
//     Generated by private class-dump
//

@class YYCache, AWEStudioSpecialPlusModel, NSString;

@interface AWEStudioSuperEntranceConfigManager : HTSService <AWEStudioSuperEntranceConfigManager, AWEStudioUserMessageProtocol, AWEAppStudioSettingMessageProtocol> {
    YYCache *_yyCache;
    YYCache *_specialPulsCache;
    AWEStudioSpecialPlusModel *_specialPlusConfigModel;
}

@property (retain, nonatomic) YYCache *yyCache;
@property (retain, nonatomic) YYCache *specialPulsCache;
@property (retain, nonatomic) AWEStudioSpecialPlusModel *specialPlusConfigModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configModel;
+ (id)yyCache;
+ (id)specialPulsCache;
+ (id)specialPulsConfigModel;
+ (void)updateSpecialPlusConfigModel;
+ (void)cacheSpecialPlusConfigModel:(id)arg0;
+ (void)cleanCache;
+ (id)sharedManager;

- (void)didFinishLogout;
- (id)configModel;
- (id)yyCache;
- (void)setYyCache:(id)arg0;
- (void)settingDidChange;
- (id)specialPulsCache;
- (void)updateSpecialPlusConfigModel;
- (void)cacheSpecialPlusConfigModel:(id)arg0;
- (id)specialPlusConfigModel;
- (id)cachedSpecialPlusConfigModel;
- (id)cachedConfigModel;
- (void)cacheConfigModel:(id)arg0;
- (void)setSpecialPulsCache:(id)arg0;
- (void)setSpecialPlusConfigModel:(id)arg0;
- (void).cxx_destruct;
- (id)initPrivate;
- (void)dealloc;

@end
