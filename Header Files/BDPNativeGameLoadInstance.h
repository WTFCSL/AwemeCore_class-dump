//
//     Generated by private class-dump
//

@interface BDPNativeGameLoadInstance : BDPBaseLoadInstance {
    BOOL _hasUpdate;
}

@property (nonatomic) BOOL hasUpdate;

+ (void)bootstrapLaunch;
+ (BOOL)shouldDownloadPkg:(id)arg0;
+ (id)validateMeta:(id)arg0;
+ (id)setupCustomMetaRequesterInfo:(id)arg0;
+ (long long)type;

- (void)workBeforeClose:(id)arg0;
- (void)appStartLoadingFilesWithModel:(id)arg0;
- (id)setupCommonAndTaskWithModel:(id)arg0 appConfigData:(id)arg1;
- (void)becomeReadyStatus;
- (void)readyToLoadAppWithModel:(id)arg0;
- (id)businessParamForEvent:(id)arg0;
- (void)firstFrameDidShow;
- (void)pkgDownloadCompletion:(id)arg0 model:(id)arg1;
- (void)getUpdatedPkgCompletion:(id)arg0 model:(id)arg1;
- (void)md5Invalid;
- (BOOL)hasUpdate;
- (void)setHasUpdate:(BOOL)arg0;
- (void)afterColdBootDoneWithConfigDic:(id)arg0 model:(id)arg1;
- (void)updateModelExtension;
- (unsigned long long)checkModelStatus:(id)arg0 reader:(id)arg1;
- (void)checkForUpdateReadyWithResult:(BOOL)arg0;
- (void)loadInstanceDidCreated:(BOOL)arg0;
- (void)commonAndTaskSetupDone:(BOOL)arg0;
- (void)firstFrameDidShowWithExtraParams:(id)arg0;
- (long long)getToolbarThemeStyle;
- (void)pr_trackerDomReadyEventWithParams:(id)arg0;

@end
