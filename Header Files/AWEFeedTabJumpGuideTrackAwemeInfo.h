//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedTabJumpGuideTrackAwemeInfo : NSObject {
    BOOL _didShow;
    long long _videoExposeCount;
    long long _recvTime;
    long long _maxPlayProgress;
    NSString *_notShowReason;
    NSString *_trigger;
}

@property (nonatomic) long long videoExposeCount;
@property (nonatomic) long long recvTime;
@property (nonatomic) long long maxPlayProgress;
@property (copy, nonatomic) NSString *notShowReason;
@property (copy, nonatomic) NSString *trigger;
@property (nonatomic) BOOL didShow;

- (void)setDidShow:(BOOL)arg0;
- (id)notShowReason;
- (void)setNotShowReason:(id)arg0;
- (long long)videoExposeCount;
- (void)setVideoExposeCount:(long long)arg0;
- (long long)recvTime;
- (void)setRecvTime:(long long)arg0;
- (long long)maxPlayProgress;
- (void)setMaxPlayProgress:(long long)arg0;
- (void).cxx_destruct;
- (id)trigger;
- (void)setTrigger:(id)arg0;
- (BOOL)didShow;

@end
