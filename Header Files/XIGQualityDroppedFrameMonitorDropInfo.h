//
//     Generated by private class-dump
//

@interface XIGQualityDroppedFrameMonitorDropInfo : NSObject {
    unsigned long long _callbackCount;
    unsigned long long _seriousDroppedFrameCount;
    unsigned long long _lightDroppedFrameCount;
    unsigned long long _totalDroppedFrames;
    unsigned long long _totalDroppedFramesMoreThan3;
    unsigned long long _drop3FrameCount;
    unsigned long long _drop7FrameCount;
    unsigned long long _drop25FrameCount;
    unsigned long long _totalDropXCount;
    unsigned long long _drop1To2Count;
    unsigned long long _drop3To6Count;
    unsigned long long _drop7To13Count;
    unsigned long long _dropOver14Count;
    unsigned long long _jank;
    unsigned long long _bigJank;
}

@property unsigned long long callbackCount;
@property unsigned long long seriousDroppedFrameCount;
@property unsigned long long lightDroppedFrameCount;
@property unsigned long long totalDroppedFrames;
@property unsigned long long totalDroppedFramesMoreThan3;
@property unsigned long long drop3FrameCount;
@property unsigned long long drop7FrameCount;
@property unsigned long long drop25FrameCount;
@property unsigned long long totalDropXCount;
@property unsigned long long drop1To2Count;
@property unsigned long long drop3To6Count;
@property unsigned long long drop7To13Count;
@property unsigned long long dropOver14Count;
@property unsigned long long jank;
@property unsigned long long bigJank;

- (unsigned long long)jank;
- (void)setJank:(unsigned long long)arg0;
- (void)clearInfo;
- (void)setCallbackCount:(unsigned long long)arg0;
- (void)setSeriousDroppedFrameCount:(unsigned long long)arg0;
- (void)setLightDroppedFrameCount:(unsigned long long)arg0;
- (void)setTotalDroppedFrames:(unsigned long long)arg0;
- (void)setTotalDroppedFramesMoreThan3:(unsigned long long)arg0;
- (void)setDrop3FrameCount:(unsigned long long)arg0;
- (void)setDrop7FrameCount:(unsigned long long)arg0;
- (void)setDrop25FrameCount:(unsigned long long)arg0;
- (void)setTotalDropXCount:(unsigned long long)arg0;
- (void)setDrop1To2Count:(unsigned long long)arg0;
- (void)setDrop3To6Count:(unsigned long long)arg0;
- (void)setDrop7To13Count:(unsigned long long)arg0;
- (void)setDropOver14Count:(unsigned long long)arg0;
- (void)setBigJank:(unsigned long long)arg0;
- (unsigned long long)callbackCount;
- (unsigned long long)seriousDroppedFrameCount;
- (unsigned long long)lightDroppedFrameCount;
- (unsigned long long)totalDroppedFrames;
- (unsigned long long)totalDroppedFramesMoreThan3;
- (unsigned long long)drop3FrameCount;
- (unsigned long long)drop7FrameCount;
- (unsigned long long)drop25FrameCount;
- (unsigned long long)totalDropXCount;
- (unsigned long long)bigJank;
- (unsigned long long)drop1To2Count;
- (unsigned long long)drop3To6Count;
- (unsigned long long)drop7To13Count;
- (unsigned long long)dropOver14Count;
- (id)init;

@end
