//
//     Generated by private class-dump
//

@class AWENowPlayingInfoCenter, NSMutableDictionary, AWEAwemeModel, NSString;
@protocol AWEFeedBackgroundPlayManagerDelegate;

@interface AWEFeedBackgroundPlayManager : NSObject <AWENowPlayingInfoPlayerProtocol, AWEFeedBackgroundPlayManagerProtocol> {
    BOOL _enableListenFeed;
    long long _numberOfListenFeedPage;
    NSMutableDictionary *_nowPlayingInfo;
    id<AWEFeedBackgroundPlayManagerDelegate> _delegate;
    AWEAwemeModel *_model;
    NSString *_enterMethod;
    NSString *_firstItemIDByLongPress;
    AWENowPlayingInfoCenter *_playingCenter;
}

@property (retain, nonatomic) AWENowPlayingInfoCenter *playingCenter;
@property (nonatomic) BOOL enableListenFeed;
@property (nonatomic) long long numberOfListenFeedPage;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (weak, nonatomic) id<AWEFeedBackgroundPlayManagerDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *firstItemIDByLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateOfHour:(long long)arg0 minute:(long long)arg1 date:(id)arg2;
+ (id)backgroundModeParams;
+ (BOOL)canUseListenFeed;
+ (double)filterViewHeight;
+ (BOOL)isSmallScreenPhone;
+ (BOOL)getIsSpeedSwitchOn;
+ (void)setIsSpeedSwitchOn:(BOOL)arg0;
+ (BOOL)isListenFeedTargetReferString:(id)arg0 enterFrom:(id)arg1;
+ (BOOL)canUseListenFeedUseNumberOfPage:(BOOL)arg0;
+ (BOOL)isLateNight;
+ (id)categoryHintTextForMixVideoModel:(id)arg0;
+ (id)sharedInstance;

- (void)setEnterMethod:(id)arg0;
- (void)playForRemoteControl;
- (void)pauseForRemoteControl;
- (void)seekToTimeForRemoteControl:(double)arg0;
- (void)playPrevForRemoteControl;
- (void)playNextForRemoteControl;
- (BOOL)canPlayForRemoteControl;
- (BOOL)canPauseForRemoteControl;
- (BOOL)canPlayPrevForRemoteControl;
- (BOOL)canPlayNextForRemoteControl;
- (BOOL)canSeekForRemoteControl;
- (id)enterMethod;
- (BOOL)isNormalTypeForPinchToListen:(id)arg0;
- (void)refreshNowPlayingInfo;
- (void)updateNowPlayingInfoPlayback;
- (BOOL)showListenFeedWithAwemeModel:(id)arg0 referString:(id)arg1 enterFrom:(id)arg2;
- (id)firstItemIDByLongPress;
- (void)setFirstItemIDByLongPress:(id)arg0;
- (void)setEnableListenFeed:(BOOL)arg0;
- (void)clearNowPlayingInfo;
- (void)resetNowPlayingInfo:(id)arg0;
- (BOOL)satisfyListenFeedForModel:(id)arg0;
- (long long)numberOfListenFeedPage;
- (void)setNumberOfListenFeedPage:(long long)arg0;
- (BOOL)shouldFilterListenFeedWithModel:(id)arg0 useExternalDataController:(BOOL)arg1;
- (void)clearCommand;
- (BOOL)enableListenFeed;
- (void)handleBackgroundPlayAutoNext;
- (BOOL)satisfyAwemeModel:(id)arg0;
- (BOOL)albumWithoutMusic:(id)arg0;
- (void)setupCommand;
- (BOOL)isEqualToCurrentID;
- (void)refreshNowPlayingInfoIsForce:(BOOL)arg0;
- (BOOL)satisfyExternalDataControllerListenFeedForModel:(id)arg0;
- (BOOL)shouldPlayWithMixPayedModel:(id)arg0;
- (id)playingCenter;
- (void)setPlayingCenter:(id)arg0;
- (id)nowPlayingInfo;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (void)setNowPlayingInfo:(id)arg0;
- (void)setDelegate:(id)arg0;

@end
