//
//     Generated by private class-dump
//

@protocol IESLiveIMMessageCacheProvider <NSObject>

@property (nonatomic) long long maxDiscardableCacheSize;
@property (nonatomic) long long delaySyncThreshold;
@property (nonatomic) long long liveStreamDelayTime;

- (void)addMessage:(id)arg0 withType:(long long)arg1;
- (id)getMessages:(long long)arg0 withTime:(double)arg1;
- (id)getMessages:(long long)arg0 withCount:(long long)arg1;
- (id)getMessages:(long long)arg0 withCount:(long long)arg1 filterBlock:(id /* block */)arg2;
- (long long)maxDiscardableCacheSize;
- (void)setMaxDiscardableCacheSize:(long long)arg0;
- (long long)delaySyncThreshold;
- (void)setDelaySyncThreshold:(long long)arg0;
- (long long)liveStreamDelayTime;
- (void)setLiveStreamDelayTime:(long long)arg0;

@end
