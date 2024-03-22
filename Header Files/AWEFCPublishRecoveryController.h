//
//     Generated by private class-dump
//

@interface AWEFCPublishRecoveryController : AWEBaseController {
    BOOL _hasShowVideoRecoveryAlert;
}

@property (nonatomic) BOOL hasShowVideoRecoveryAlert;

- (void)task:(id)arg0 willAppendWithInfo:(id)arg1;
- (void)splashViewDidDisappear:(id)arg0;
- (void)awesomeSplashRemoved:(id)arg0;
- (void)recoveryVideoBackupIfNeed;
- (void)bizDowngradeDelayRecoveryVideoBackupIfNeed;
- (BOOL)isActiveForBackup;
- (BOOL)hasShowVideoRecoveryAlert;
- (void)setHasShowVideoRecoveryAlert:(BOOL)arg0;
- (void)viewDidAppear;
- (void)dealloc;
- (void)viewDidLoad;

@end