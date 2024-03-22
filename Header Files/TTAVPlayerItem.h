//
//     Generated by private class-dump
//

@class NSError, NSURL, NSString;

@interface TTAVPlayerItem : NSObject <TTAVPlayerItemProtocol> {
    BOOL _playbackBufferEmpty;
    BOOL _playbackLikelyToKeepUp;
    BOOL _playbackBufferFull;
    NSURL *_url;
    long long _status;
    NSError *_error;
    long long _loadedProgress;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long loadedProgress;
@property (nonatomic, getter=isPlaybackBufferEmpty) BOOL playbackBufferEmpty;
@property (nonatomic, getter=isPlaybackLikelyToKeepUp) BOOL playbackLikelyToKeepUp;
@property (nonatomic, getter=isPlaybackBufferFull) BOOL playbackBufferFull;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerItemWithURL:(id)arg0;

- (void)handleNotify:(id)arg0;
- (void)onNotifyError:(id)arg0;
- (void)setPlaybackLikelyToKeepUp:(BOOL)arg0;
- (void)setLoadedProgress:(long long)arg0;
- (void)setPlaybackBufferEmpty:(BOOL)arg0;
- (long long)loadedProgress;
- (void)setPlaybackBufferFull:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setUrl:(id)arg0;
- (id)initWithURL:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setStatus:(long long)arg0;
- (void)setError:(id)arg0;
- (id)url;
- (id)error;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackBufferEmpty;

@end
