//
//     Generated by private class-dump
//

@interface AWEShareQRCodeStage : AWEShareBaseStage {
    BOOL _shouldRun;
}

@property (nonatomic) BOOL shouldRun;

- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (void)trackQRCodeVCShowWithBeginTime:(double)arg0;
- (void)run;
- (BOOL)shouldRun;
- (void)setShouldRun:(BOOL)arg0;

@end
