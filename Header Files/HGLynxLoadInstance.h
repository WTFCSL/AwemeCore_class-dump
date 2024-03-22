//
//     Generated by private class-dump
//

@class HGModel, NSString;

@interface HGLynxLoadInstance : HGBaseLoadInstance {
    NSString *_libString;
    long long _enterStartTimeMs;
    HGModel *_model;
}

@property (nonatomic) long long enterStartTimeMs;
@property (retain, nonatomic) HGModel *model;
@property (copy, nonatomic) NSString *libString;

+ (void)bootstrapLaunch;
+ (BOOL)shouldDownloadPkg:(id)arg0;
+ (id)validateMeta:(id)arg0;
+ (long long)type;

- (void)workBeforeClose;
- (void)getUpdatedMetaInfoModelCompletion:(id)arg0 model:(id)arg1;
- (void)appStartLoadingFilesWithModel:(id)arg0;
- (id)setupCommonAndTaskWithModel:(id)arg0 appConfigData:(id)arg1;
- (void)setLibString:(id)arg0;
- (void)becomeReadyStatus;
- (void)setEnterStartTimeMs:(long long)arg0;
- (long long)enterStartTimeMs;
- (void)readyToLoadAppWithModel:(id)arg0;
- (id)businessParamForEvent:(id)arg0;
- (id)libString;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end