//
//     Generated by private class-dump
//

@interface IESLiveComponentsTraceInfo : NSObject {
    BOOL _finished;
    unsigned long long _stage;
    double _start;
    double _end;
}

@property (nonatomic) unsigned long long stage;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) BOOL finished;

- (void)setEnd:(double)arg0;
- (void)setFinished:(BOOL)arg0;
- (double)end;
- (void)setStart:(double)arg0;
- (unsigned long long)stage;
- (double)duration;
- (double)start;
- (void)setStage:(unsigned long long)arg0;
- (BOOL)finished;

@end