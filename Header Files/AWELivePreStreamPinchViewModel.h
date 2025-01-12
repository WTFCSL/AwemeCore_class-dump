//
//     Generated by private class-dump
//

@class AWELivePreStreamContext, UIViewController, AWEAwemeModel;
@protocol AWEFeedRootViewControllerProtocol;

@interface AWELivePreStreamPinchViewModel : NSObject {
    BOOL _shouldEnterRoom;
    BOOL _shouldEnterPinchMode;
    BOOL _shouldTriggerTapTic;
    BOOL _isOverThresholdDuringPinch;
    AWEAwemeModel *_awemeModel;
    double _userPinchEndedValue;
    AWELivePreStreamContext *_context;
    UIViewController<AWEFeedRootViewControllerProtocol> *_rootViewController;
}

@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) UIViewController<AWEFeedRootViewControllerProtocol> *rootViewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double userPinchEndedValue;
@property (nonatomic) BOOL shouldEnterRoom;
@property (nonatomic) BOOL shouldEnterPinchMode;
@property (nonatomic) BOOL shouldTriggerTapTic;
@property (nonatomic) BOOL isOverThresholdDuringPinch;

+ (long long)pinchStyle;
+ (double)livePreViewPinchThresold;
+ (id)preStreamPinchViewModelWithContext:(id)arg0;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)addBindObserver;
- (BOOL)isOverThresholdDuringPinch;
- (void)setIsOverThresholdDuringPinch:(BOOL)arg0;
- (void)setUserPinchEndedValue:(double)arg0;
- (void)setShouldEnterRoom:(BOOL)arg0;
- (void)trackPinchEnded;
- (void)setShouldEnterPinchMode:(BOOL)arg0;
- (void)setShouldTriggerTapTic:(BOOL)arg0;
- (BOOL)shouldTriggerTapTic;
- (double)userPinchEndedValue;
- (BOOL)shouldEnterRoom;
- (BOOL)shouldEnterPinchMode;
- (id)initPreStreamPinchViewModelWithContext:(id)arg0;
- (void)shouldCleanScreen:(BOOL)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
