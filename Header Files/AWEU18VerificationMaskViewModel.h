//
//     Generated by private class-dump
//

@class AWEU18VerificationMaskViewLayoutContext, NSObject;
@protocol OS_dispatch_source, AWEU18VerificationMaskContextProtocol;

@interface AWEU18VerificationMaskViewModel : NSObject {
    BOOL _isShowing;
    BOOL _isTabbarHidden;
    BOOL _isStartingTimer;
    NSObject<AWEU18VerificationMaskContextProtocol> *_context;
    AWEU18VerificationMaskViewLayoutContext *_layoutContext;
    NSObject<OS_dispatch_source> *_timer;
    long long _blockDuration;
    double _enterBackgroundTS;
}

@property (retain, nonatomic) NSObject<AWEU18VerificationMaskContextProtocol> *context;
@property (retain, nonatomic) AWEU18VerificationMaskViewLayoutContext *layoutContext;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isTabbarHidden;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL isStartingTimer;
@property (nonatomic) long long blockDuration;
@property (nonatomic) double enterBackgroundTS;
@property (readonly, nonatomic) unsigned long long inProgressVerifyType;

- (void)setIsShowing:(BOOL)arg0;
- (id)enterFrom;
- (long long)blockDuration;
- (void)setBlockDuration:(long long)arg0;
- (void)didAppBecomeActive;
- (void)willAppResignActive;
- (unsigned long long)inProgressVerifyType;
- (BOOL)isStartingTimer;
- (void)setIsStartingTimer:(BOOL)arg0;
- (id)makeViewLayoutContext;
- (void)startTimerWithHandler:(id /* block */)arg0;
- (void)updateShowingStatus:(BOOL)arg0;
- (void)updateTabbarHiddenStatus:(BOOL)arg0;
- (void)gotoVerify;
- (BOOL)isTabbarHidden;
- (void)refreshBlockDuration;
- (void)setEnterBackgroundTS:(double)arg0;
- (void)setIsTabbarHidden:(BOOL)arg0;
- (id)nonNullStringWithValue:(id)arg0 defaultValue:(id)arg1;
- (id)laterHintTextWithBlockDuration:(int)arg0;
- (double)enterBackgroundTS;
- (id)timer;
- (void)setLayoutContext:(id)arg0;
- (id)layoutContext;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)cancelTimer;
- (BOOL)isShowing;
- (void)setTimer:(id)arg0;
- (id)context;
- (void)resumeTimer;
- (void)dealloc;
- (id)scene;
- (BOOL)isMorning;
- (void)updateContext:(id)arg0;
- (void)suspendTimer;

@end
