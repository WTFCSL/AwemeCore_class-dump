//
//     Generated by private class-dump
//

@class CADisplayLink;
@protocol IESECPDPSlideFoldProgressDelegate;

@interface IESECPDPSlideFoldProgress : NSObject {
    BOOL _isWorking;
    double _nowProgress;
    CADisplayLink *_displayLink;
    double _startProgress;
    double _targetProgress;
    unsigned long long _frameInterval;
    id<IESECPDPSlideFoldProgressDelegate> _delegate;
    double _unitProcess;
    unsigned long long _counter;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startProgress;
@property (nonatomic) double targetProgress;
@property (nonatomic) double nowProgress;
@property (nonatomic) unsigned long long frameInterval;
@property (weak, nonatomic) id<IESECPDPSlideFoldProgressDelegate> delegate;
@property (nonatomic) BOOL isWorking;
@property (nonatomic) double unitProcess;
@property (nonatomic) unsigned long long counter;

- (void)setIsWorking:(BOOL)arg0;
- (void)triggerDisplayLink:(id)arg0;
- (double)nowProgress;
- (double)unitProcess;
- (void)setNowProgress:(double)arg0;
- (void)setUnitProcess:(double)arg0;
- (id)initWithStartProgress:(double)arg0 frameInterval:(unsigned long long)arg1 delegate:(id)arg2;
- (void)postAction:(struct IESECPDPFoldAction { double x0; BOOL x1; })arg0;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)frameInterval;
- (unsigned long long)status;
- (void)invalidateDisplayLink;
- (void)setFrameInterval:(unsigned long long)arg0;
- (void)setCounter:(unsigned long long)arg0;
- (id)delegate;
- (id)displayLink;
- (void)setupDisplayLink;
- (unsigned long long)counter;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (double)startProgress;
- (void)setStartProgress:(double)arg0;
- (double)targetProgress;
- (void)setTargetProgress:(double)arg0;
- (BOOL)isWorking;

@end
