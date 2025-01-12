//
//     Generated by private class-dump
//

@interface IESLivePlaybackDanmakuChannel : IESLiveDanmakuChannel {
    BOOL _officialIsWaiting;
    long long _channelIndex;
    long long _showingSpecialCount;
}

@property (nonatomic) long long channelIndex;
@property (nonatomic) long long showingSpecialCount;
@property (nonatomic) BOOL officialIsWaiting;

- (void)setChannelIndex:(long long)arg0;
- (void)removeAllDanmuku;
- (id)initWithChannelType:(unsigned long long)arg0 contentView:(id)arg1 settings:(id)arg2 offsetY:(double)arg3;
- (id)p_dequeueReusableDanmukuViewWithNode:(id)arg0;
- (long long)showingSpecialCount;
- (void)setShowingSpecialCount:(long long)arg0;
- (BOOL)officialIsWaiting;
- (id)p_findDanmuViewForNode:(id)arg0;
- (BOOL)addDanmukuNode:(id)arg0;
- (void)checkChannelIsAvailable;
- (void)setOfficialIsWaiting:(BOOL)arg0;
- (long long)channelIndex;

@end
