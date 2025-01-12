//
//     Generated by private class-dump
//

@interface AWEAwemeLongVideoAdTrackMediator : NSObject {
    BOOL _shouldLongVideoReplay;
    BOOL _hasOver;
    BOOL _shouldIgnoreShortOver;
    double _totalTime;
}

@property (nonatomic) double totalTime;
@property (nonatomic) BOOL hasOver;
@property (nonatomic) BOOL shouldIgnoreShortOver;
@property (nonatomic) BOOL shouldLongVideoReplay;

+ (id)sharedInstance;

- (void)adShortVideoPlayTrackWith:(id)arg0;
- (BOOL)isValidModel:(id)arg0;
- (void)setShouldLongVideoReplay:(BOOL)arg0;
- (void)setHasOver:(BOOL)arg0;
- (id)getAdShortVideoTrackTimeKeyWith:(id)arg0;
- (void)setShouldIgnoreShortOver:(BOOL)arg0;
- (void)adShortVideoBreakTrackWith:(id)arg0 extra:(id)arg1;
- (id)getAdLongVideoTrackTimeKeyWith:(id)arg0;
- (BOOL)shouldIgnoreShortOver;
- (BOOL)hasOver;
- (BOOL)_isValidModel:(id)arg0;
- (void)adShortVideoBreakTrackWith:(id)arg0 extra:(id)arg1 isSlid:(BOOL)arg2;
- (void)adShortVideoOverTrackWith:(id)arg0;
- (void)adShortVideoReplayTrackWith:(id)arg0 eventName:(id)arg1;
- (void)adShortVideoPauseTrackWith:(id)arg0;
- (void)adShortVideoResumeTrackWith:(id)arg0;
- (BOOL)shouldLongVideoReplay;
- (double)totalTime;
- (void)setTotalTime:(double)arg0;

@end
