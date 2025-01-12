//
//     Generated by private class-dump
//

@class NSString;

@protocol IESLiveVideoPlayerProvider <NSObject>

@property (readonly, copy, nonatomic) NSString *vid;
@property (readonly, nonatomic) unsigned long long loadState;
@property (readonly, nonatomic) unsigned long long playbackState;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) double cacheProgress;
@property (readonly, nonatomic) double duration;

- (id)vid;
- (double)cacheProgress;
- (void)seekToProgress:(double)arg0;
- (void)attachOnSmallWindow:(id)arg0;
- (void)detachWindow;
- (void)reloadVideoUrl:(id)arg0;
- (void)reloadVideoId:(id)arg0;
- (unsigned long long)playbackState;
- (void)setStartTime:(double)arg0;
- (unsigned long long)loadState;
- (void)close;
- (void)stop;
- (void)show;
- (double)duration;
- (void)hide;
- (double)progress;
- (id)playerView;
- (void)play;
- (void)pause;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)setLoop:(BOOL)arg0;

@end
