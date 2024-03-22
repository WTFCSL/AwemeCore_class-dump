//
//     Generated by private class-dump
//

@class CADisplayLink;

@interface CJPayCounterLabel : UILabel {
    CADisplayLink *_timer;
    double _starNumber;
    double _endNumber;
    double _durationTime;
    double _lastTime;
    double _progressTime;
    id /* block */ _formatNumberBlock;
}

@property (retain, nonatomic) CADisplayLink *timer;
@property (nonatomic) double starNumber;
@property (nonatomic) double endNumber;
@property (nonatomic) double durationTime;
@property (nonatomic) double lastTime;
@property (nonatomic) double progressTime;
@property (copy, nonatomic) id /* block */ formatNumberBlock;

- (double)durationTime;
- (void)setEndNumber:(double)arg0;
- (void)setDurationTime:(double)arg0;
- (double)endNumber;
- (double)progressTime;
- (void)setProgressTime:(double)arg0;
- (void)p_cleanTimer;
- (void)p_fromNumber:(double)arg0 toNumber:(double)arg1 duration:(double)arg2 formatNumberBlock:(id /* block */)arg3;
- (void)setStarNumber:(double)arg0;
- (void)setFormatNumberBlock:(id /* block */)arg0;
- (id /* block */)formatNumberBlock;
- (void)p_changeNumber;
- (double)p_computeNumber;
- (double)p_bufferFunctionEaseInOut:(double)arg0;
- (void)cj_fromNumber:(double)arg0 toNumber:(double)arg1 duration:(double)arg2 format:(id /* block */)arg3;
- (void)cj_fromNumber:(double)arg0 toNumber:(double)arg1 duration:(double)arg2 attributedFormat:(id /* block */)arg3;
- (double)starNumber;
- (id)timer;
- (void)setLastTime:(double)arg0;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (double)lastTime;

@end