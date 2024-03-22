//
//     Generated by private class-dump
//

@class NSHashTable;

@interface IESLiveVideoPlayerManager : NSObject {
    BOOL _enableEyesProtect;
    id /* block */ _eyesProtectLutImageBlock;
    NSHashTable *_videoPlayerTable;
    double _eyesProtectFilterValue;
}

@property (retain, nonatomic) NSHashTable *videoPlayerTable;
@property (nonatomic) BOOL enableEyesProtect;
@property (nonatomic) double eyesProtectFilterValue;
@property (copy, nonatomic) id /* block */ eyesProtectLutImageBlock;

+ (id)sharedInstance;

- (void)updateLivePlayersEyesProtectState:(BOOL)arg0 intensityValue:(double)arg1;
- (id)createVideoPlayer;
- (id /* block */)eyesProtectLutImageBlock;
- (void)setEyesProtectLutImageBlock:(id /* block */)arg0;
- (BOOL)enableEyesProtect;
- (void)setEnableEyesProtect:(BOOL)arg0;
- (double)eyesProtectFilterValue;
- (void)setEyesProtectFilterValue:(double)arg0;
- (void)p_appendManagerPlayer:(id)arg0;
- (id)videoPlayerTable;
- (void)setVideoPlayerTable:(id)arg0;
- (id)createVideoWithVideoId:(id)arg0;
- (void).cxx_destruct;

@end