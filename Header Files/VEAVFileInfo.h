//
//     Generated by private class-dump
//

@interface VEAVFileInfo : NSObject {
    BOOL _hasVideo;
    BOOL _hasAudio;
    unsigned int _codecType;
    long long _bitrate;
    double _audioDuration;
    double _videoDuration;
    struct CGSize { double width; double height; } _videoSize;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
}

@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) unsigned int codecType;
@property (nonatomic) long long bitrate;
@property (nonatomic) double audioDuration;
@property (nonatomic) double videoDuration;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (id)init;
- (long long)bitrate;
- (BOOL)hasVideo;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setHasVideo:(BOOL)arg0;
- (BOOL)hasAudio;
- (double)videoDuration;
- (id)initWithAsset:(id)arg0;
- (void)setHasAudio:(BOOL)arg0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)setBitrate:(long long)arg0;
- (void)setVideoDuration:(double)arg0;
- (double)audioDuration;
- (void)setAudioDuration:(double)arg0;
- (unsigned int)codecType;
- (void)setCodecType:(unsigned int)arg0;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)setVideoSize:(struct CGSize { double x0; double x1; })arg0;

@end