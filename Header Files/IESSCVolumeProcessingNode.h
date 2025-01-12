//
//     Generated by private class-dump
//

@class NSString;

@interface IESSCVolumeProcessingNode : NSObject <IESSCAudioProcessingNode> {
    float _startVolume;
    float _endVolume;
    id /* block */ _timingFunction;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) float startVolume;
@property (nonatomic) float endVolume;
@property (copy, nonatomic) id /* block */ timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStartVolume:(float)arg0;
- (float)startVolume;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 renderInfo:(id)arg1;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0 startVolume:(float)arg1 endVolume:(float)arg2;
- (float)endVolume;
- (void)setEndVolume:(float)arg0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setTimingFunction:(id /* block */)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id /* block */)timingFunction;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;

@end
