//
//     Generated by private class-dump
//

@class NSData, NSMutableArray, VEAmazingEffectRenderer;

@interface VEStopMotionUtil : NSObject {
    void *stopMotionKeyBuffer;
    NSData *_SlamBuffer;
    NSData *_lastFrameBachBuffer;
    NSMutableArray *_stopMotionOrderedPts;
    long long _stopMotionKeyPTS;
    VEAmazingEffectRenderer *_renderer;
    unsigned long long _shadowCount;
    double _allRenderCost;
    double _readFileCost;
    double _bufferSerialitionCost;
}

@property (retain, nonatomic) NSData *SlamBuffer;
@property (retain, nonatomic) NSData *lastFrameBachBuffer;
@property (retain, nonatomic) NSMutableArray *stopMotionOrderedPts;
@property (nonatomic) long long stopMotionKeyPTS;
@property (retain, nonatomic) VEAmazingEffectRenderer *renderer;
@property (nonatomic) unsigned long long shadowCount;
@property (nonatomic) double allRenderCost;
@property (nonatomic) double readFileCost;
@property (nonatomic) double bufferSerialitionCost;

- (void)setStopMotionBufferForPts:(int)arg0 stopMotionPath:(id)arg1;
- (id)initWithStopMotionResultPath:(id)arg0 shadowCount:(unsigned long long)arg1 withAmazingRender:(id)arg2;
- (void)setShadowCount:(unsigned long long)arg0;
- (void)setStopMotionKeyPTS:(long long)arg0;
- (void)readSlamebufferNameFromPath:(id)arg0;
- (void)setSlamBuffer:(id)arg0;
- (void)setLastFrameBachBuffer:(id)arg0;
- (void)setStopMotionOrderedPts:(id)arg0;
- (id)stopMotionOrderedPts;
- (long long)stopMotionKeyPTS;
- (double)allRenderCost;
- (double)readFileCost;
- (double)bufferSerialitionCost;
- (id)SlamBuffer;
- (unsigned long long)shadowCount;
- (void)setReadFileCost:(double)arg0;
- (void)setBufferSerialitionCost:(double)arg0;
- (id)lastFrameBachBuffer;
- (void)setAllRenderCost:(double)arg0;
- (void).cxx_destruct;
- (void)setRenderer:(id)arg0;
- (void)dealloc;
- (id)renderer;

@end
