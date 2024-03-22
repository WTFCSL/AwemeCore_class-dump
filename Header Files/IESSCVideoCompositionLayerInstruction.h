//
//     Generated by private class-dump
//

@protocol IESSCVideo, ISSCVideoTimeline, IESSCVideoTransition;

@interface IESSCVideoCompositionLayerInstruction : NSObject {
    int _trackID;
    id<IESSCVideo> _imageSourceProvider;
    id<ISSCVideoTimeline> _videoComposition;
    id<IESSCVideoTransition> _transition;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _prefferdTransform;
}

@property (nonatomic) int trackID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } prefferdTransform;
@property (retain, nonatomic) id<IESSCVideo> imageSourceProvider;
@property (retain, nonatomic) id<ISSCVideoTimeline> videoComposition;
@property (retain, nonatomic) id<IESSCVideoTransition> transition;

- (id)initWithTrackID:(int)arg0 videoComposition:(id)arg1;
- (void)setImageSourceProvider:(id)arg0;
- (void)setPrefferdTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (id)imageSourceProvider;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })prefferdTransform;
- (void)setTransition:(id)arg0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (id)init;
- (id)transition;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (int)trackID;
- (void)setTrackID:(int)arg0;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg0;

@end