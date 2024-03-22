//
//     Generated by private class-dump
//

@class NSArray;
@protocol BDUGLuckyMemoryMonitorSettingsEntryModel;

@interface BDUGLuckyMemoryMonitorSettingsModel : BDUGLuckyJSONModel {
    BOOL _memCollectEnable;
    BOOL _memCollectEnableVcInitHook;
    BOOL _memCollectEnableVcWillAppearHook;
    BOOL _memCollectEnableVcDidDisappearHook;
    NSArray<BDUGLuckyMemoryMonitorSettingsEntryModel> *_memCollectStrategies;
}

@property (nonatomic) BOOL memCollectEnable;
@property (nonatomic) BOOL memCollectEnableVcInitHook;
@property (nonatomic) BOOL memCollectEnableVcWillAppearHook;
@property (nonatomic) BOOL memCollectEnableVcDidDisappearHook;
@property (copy, nonatomic) NSArray<BDUGLuckyMemoryMonitorSettingsEntryModel> *memCollectStrategies;

- (BOOL)memCollectEnable;
- (void)setMemCollectEnable:(BOOL)arg0;
- (BOOL)memCollectEnableVcInitHook;
- (void)setMemCollectEnableVcInitHook:(BOOL)arg0;
- (BOOL)memCollectEnableVcWillAppearHook;
- (void)setMemCollectEnableVcWillAppearHook:(BOOL)arg0;
- (BOOL)memCollectEnableVcDidDisappearHook;
- (void)setMemCollectEnableVcDidDisappearHook:(BOOL)arg0;
- (id)memCollectStrategies;
- (void)setMemCollectStrategies:(id)arg0;
- (void).cxx_destruct;

@end