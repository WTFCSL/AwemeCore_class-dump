//
//     Generated by private class-dump
//

@interface AWEShareTokenStage : AWEShareBaseStage {
    BOOL _shouldRun;
}

@property (nonatomic) BOOL shouldRun;

- (void)makeEventContext;
- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (void)openDestinationAppWithShareType:(id)arg0;
- (void)jumpWithoutAlert;
- (void)showAlertWithText:(id)arg0;
- (void)trackVSEvent:(id)arg0 withDict:(id)arg1;
- (void)trackTokenShowEvent;
- (void)trackTokenClickEvent;
- (void)trackTokenCancelEvent;
- (id)jumpAppNameWithShareType:(id)arg0;
- (void)run;
- (BOOL)shouldRun;
- (void)setShouldRun:(BOOL)arg0;

@end
