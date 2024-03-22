//
//     Generated by private class-dump
//

@class NSTimer, NSMutableDictionary;
@protocol AWELandscapeGuideManagerDelegate, AWELandscapeGuideProtocol;

@interface AWELandscapeGuideManager : NSObject {
    BOOL _shouldTriggerTwentySeconds;
    BOOL _shouldTriggerThirtySeconds;
    BOOL _shouldTriggerPauseThreeSeconds;
    id<AWELandscapeGuideManagerDelegate> _delegate;
    NSMutableDictionary *_eventMapItemDict;
    id<AWELandscapeGuideProtocol> _currentGuide;
    NSTimer *_twentySecondsTimer;
    NSTimer *_thirtySecondsTimer;
    NSTimer *_pauseThreeSecondsTimer;
}

@property (retain, nonatomic) NSMutableDictionary *eventMapItemDict;
@property (retain, nonatomic) id<AWELandscapeGuideProtocol> currentGuide;
@property (retain, nonatomic) NSTimer *twentySecondsTimer;
@property (retain, nonatomic) NSTimer *thirtySecondsTimer;
@property (retain, nonatomic) NSTimer *pauseThreeSecondsTimer;
@property (nonatomic) BOOL shouldTriggerTwentySeconds;
@property (nonatomic) BOOL shouldTriggerThirtySeconds;
@property (nonatomic) BOOL shouldTriggerPauseThreeSeconds;
@property (weak, nonatomic) id<AWELandscapeGuideManagerDelegate> delegate;

- (void)triggerEvent:(long long)arg0;
- (void)hideGuide;
- (void)triggerEventWithQuiet:(BOOL)arg0;
- (void)resetPauseTimer:(BOOL)arg0;
- (void)registerGuide:(id)arg0 triggerEvent:(long long)arg1;
- (void)resetStayTimer:(BOOL)arg0;
- (id)eventMapItemDict;
- (void)setEventMapItemDict:(id)arg0;
- (id)currentGuide;
- (void)setCurrentGuide:(id)arg0;
- (BOOL)shouldTriggerPauseThreeSeconds;
- (BOOL)shouldTriggerTwentySeconds;
- (BOOL)shouldTriggerThirtySeconds;
- (BOOL)hasShownGuideToday:(id)arg0;
- (id)twentySecondsTimer;
- (void)setTwentySecondsTimer:(id)arg0;
- (id)thirtySecondsTimer;
- (void)setThirtySecondsTimer:(id)arg0;
- (void)setShouldTriggerTwentySeconds:(BOOL)arg0;
- (void)setShouldTriggerThirtySeconds:(BOOL)arg0;
- (id)pauseThreeSecondsTimer;
- (void)setPauseThreeSecondsTimer:(id)arg0;
- (void)setShouldTriggerPauseThreeSeconds:(BOOL)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
