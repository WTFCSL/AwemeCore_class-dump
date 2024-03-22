//
//     Generated by private class-dump
//

@class NSString;

@interface IESSCFadeInOutAudioTransition : NSObject <IESSCAudioTransition> {
    NSString *_identifier;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (void)applyPreviousAudioMixInputParameters:(id)arg0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (void)applyNextAudioMixInputParameters:(id)arg0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setIdentifier:(id)arg0;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end
