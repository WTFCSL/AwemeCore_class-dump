//
//     Generated by private class-dump
//

@class NSTimer, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEFeedInteractionModeManager : NSObject {
    BOOL _isInInteractionMode;
    BOOL _hidePauseIcon;
    double _startPlayTimestamp;
    double _endPlayTimestamp;
    NSTimer *_timer;
    AWEPageContext<AWEPlayInteractionContextProtocol> *_context;
    double _enterTimestamp;
    double _exitTimestamp;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (nonatomic) double enterTimestamp;
@property (nonatomic) double exitTimestamp;
@property (nonatomic) BOOL hidePauseIcon;
@property (nonatomic) BOOL isInInteractionMode;
@property (nonatomic) double startPlayTimestamp;
@property (nonatomic) double endPlayTimestamp;

+ (double)autoDismissTime;
+ (BOOL)enableInteractionMode;
+ (BOOL)playCompleteExitInteractionMode;
+ (BOOL)enableInteractionModeSwitch;
+ (id)allowEventTypes;
+ (id)disallowAwemeTypes;
+ (BOOL)shouldCompensateADs;
+ (id)interactionDict;
+ (BOOL)pauseButtonInLeft;
+ (BOOL)clickPauseExitInteractionMode;
+ (BOOL)shouldShowAnchorView:(id)arg0;
+ (id)sharedManager;

- (BOOL)hidePauseIcon;
- (double)enterTimestamp;
- (void)setEnterTimestamp:(double)arg0;
- (BOOL)isInInteractionMode;
- (void)setIsInInteractionMode:(BOOL)arg0;
- (void)setStartPlayTimestamp:(double)arg0;
- (double)startPlayTimestamp;
- (void)exitInteractionMode:(id)arg0 withMethod:(id)arg1;
- (void)enterInteractionMode:(id)arg0;
- (BOOL)canEnterInteractionMode:(id)arg0;
- (BOOL)canEnterInteractionWithModel:(id)arg0 contextEnterFrom:(id)arg1;
- (void)setHidePauseIcon:(BOOL)arg0;
- (void)setExitTimestamp:(double)arg0;
- (void)setEndPlayTimestamp:(double)arg0;
- (double)endPlayTimestamp;
- (BOOL)shouldShowSwitchWithModel:(id)arg0;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (double)exitTimestamp;
- (void)cancelTimer;
- (void)setTimer:(id)arg0;
- (id)context;
- (void)timerFired;
- (void)resumeTimer;
- (void)setupContext;

@end
