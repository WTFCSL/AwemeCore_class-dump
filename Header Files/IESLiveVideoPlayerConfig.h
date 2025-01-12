//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESLiveVideoPlayerConfig : NSObject {
    NSMutableDictionary *_videoDictionary;
}

@property (copy, nonatomic) NSMutableDictionary *videoDictionary;

+ (id)sharedConfig;

- (double)getVideoCurrentTime:(id)arg0;
- (void)updateVideoTime:(double)arg0 videoId:(id)arg1;
- (void)setVideoDictionary:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)videoDictionary;

@end
