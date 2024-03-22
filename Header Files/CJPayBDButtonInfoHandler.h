//
//     Generated by private class-dump
//

@protocol CJPayTrackerProtocol;

@interface CJPayBDButtonInfoHandler : NSObject {
    id<CJPayTrackerProtocol> _trackDelegate;
}

@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

+ (id)findPwdUrlWithAppID:(id)arg0 merchantID:(id)arg1 smchID:(id)arg2;
+ (BOOL)showErrorTips:(id)arg0;
+ (id)shareInstance;

- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (BOOL)handleButtonInfo:(id)arg0 fromVC:(id)arg1 errorMsg:(id)arg2 withActions:(id)arg3 withAppID:(id)arg4 merchantID:(id)arg5;
- (BOOL)handleButtonInfo:(id)arg0 fromVC:(id)arg1 errorMsg:(id)arg2 withActions:(id)arg3 trackDelegate:(id)arg4 withAppID:(id)arg5 merchantID:(id)arg6;
- (void)handleButtonInfo:(id)arg0 fromVC:(id)arg1 errorMsg:(id)arg2 withActions:(id)arg3 withAppID:(id)arg4 merchantID:(id)arg5 alertCompletion:(id /* block */)arg6;
- (void)execActionWithActionNum:(id)arg0 buttonInfo:(id)arg1 withActions:(id)arg2 fromVC:(id)arg3 alertVC:(id)arg4;
- (void)p_presentAlertVC:(id)arg0 fromVC:(id)arg1;
- (void)p_trackerEvent:(id)arg0 buttonInfo:(id)arg1 params:(id)arg2;
- (void)p_trackIMServiceWithEvent:(id)arg0 buttonInfo:(id)arg1 params:(id)arg2;
- (void)p_closeAlertVC:(id)arg0 action:(id /* block */)arg1;
- (void).cxx_destruct;

@end