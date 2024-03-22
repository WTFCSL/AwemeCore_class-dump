//
//     Generated by private class-dump
//

@class NSArray, NSString, LOTAnimationView, UIImageView, UILabel, NSObject, UIButton;
@protocol OS_dispatch_source;

@interface AWETeenSpeechSearchViewController : UIViewController <UIViewControllerTransitioningDelegate, AWETeenSpeechServiceDelegate, UIGestureRecognizerDelegate> {
    BOOL _isFinish;
    BOOL _isTimerRunning;
    BOOL _isDismissing;
    id /* block */ _finishBlock;
    NSArray *_sugList;
    UILabel *_titleView;
    UIButton *_closeButton;
    NSString *_currentString;
    long long _currentState;
    long long _lastState;
    long long _longPressBeginState;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    long long _cutDownNumber;
    LOTAnimationView *_speechAnim;
    UIImageView *_defaultImageView;
    UILabel *_subLabel;
    UIButton *_retryButton;
    double _startTime;
}

@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *currentString;
@property (nonatomic) long long currentState;
@property (nonatomic) long long lastState;
@property (nonatomic) long long longPressBeginState;
@property (nonatomic) BOOL isFinish;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (nonatomic) BOOL isTimerRunning;
@property (nonatomic) long long cutDownNumber;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) LOTAnimationView *speechAnim;
@property (retain, nonatomic) UIImageView *defaultImageView;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSArray *sugList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFinish;
- (void)setIsFinish:(BOOL)arg0;
- (void)setIsTimerRunning:(BOOL)arg0;
- (BOOL)isTimerRunning;
- (void)p_setupUI;
- (id)p_mainAppWindow;
- (void)p_windowDidResignKeyNotification:(id)arg0;
- (void)applicationBecomeActive;
- (id)sugList;
- (void)setSugList:(id)arg0;
- (void)p_dismiss;
- (void)setDefaultImageView:(id)arg0;
- (id)defaultImageView;
- (id)speechAnim;
- (void)setSpeechAnim:(id)arg0;
- (void)p_startRecording;
- (void)p_cancleRecording;
- (void)setCurrentString:(id)arg0;
- (void)p_checkStates;
- (void)p_updateBeforeStatus;
- (void)p_updateRecordingDidStart;
- (void)p_updateRecordingStatus;
- (void)p_updateNosignStatus;
- (long long)longPressBeginState;
- (BOOL)teenModeSearchSpeechCrashFix;
- (void)setCutDownNumber:(long long)arg0;
- (long long)cutDownNumber;
- (void)cancelTimerWithCancelRecording;
- (void)p_stopRecording;
- (void)setLongPressBeginState:(long long)arg0;
- (id)p_reversedString:(id)arg0;
- (id)p_configShowString:(id)arg0;
- (void)p_clickSubLable;
- (void)p_didClickRetryBtn;
- (void)p_didClickLottieView;
- (void)p_didLongPreshLottieView:(id)arg0;
- (void)handleFailedWithErrorCode:(long long)arg0 errorMsg:(id)arg1 requestId:(id)arg2;
- (void)handleRecordResult:(id)arg0 isFinish:(BOOL)arg1 requestId:(id)arg2;
- (void)speechAudioDidStart;
- (void)setCurrentState:(long long)arg0;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)currentState;
- (void)close;
- (BOOL)isDismissing;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)setDispatchTimer:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)setTitleView:(id)arg0;
- (double)startTime;
- (void)applicationDidEnterBackground;
- (id)dispatchTimer;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)titleView;
- (long long)lastState;
- (void)setIsDismissing:(BOOL)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)subLabel;
- (void)setSubLabel:(id)arg0;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;
- (void)setLastState:(long long)arg0;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;
- (id)currentString;

@end