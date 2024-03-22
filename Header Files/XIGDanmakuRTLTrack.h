//
//     Generated by private class-dump
//

@interface XIGDanmakuRTLTrack : XIGDanmakuBaseTrack {
    double _danmakuLifeTime;
}

@property (nonatomic) double danmakuLifeTime;

- (double)calculateLifeTimeForDanmakuDescriptor:(id)arg0;
- (void)layoutDidChanged;
- (void)updateDanmakuDescritor:(id)arg0;
- (double)danmakuLifeTime;
- (void)setDanmakuLifeTime:(double)arg0;
- (BOOL)canAddDanmaku:(id)arg0;
- (void)applyNewLifeTimeWithFactor:(double)arg0;
- (void)danmakuContentSizeDidChanged:(id)arg0;
- (void)relayoutDisplayingDanmakus;
- (void)adjustDanmakuLifeTimeToFitNewFrame:(id)arg0;
- (BOOL)is:(id)arg0 canOverTake:(id)arg1;
- (void)adjustDanmakuPositionIfNeededBetweenPrevious:(id)arg0 current:(id)arg1;
- (double)minimumSpacingFor:(id)arg0 chasingDanmaku:(id)arg1;
- (double)spacingBetweenPreviousDanmaku:(id)arg0 chasingDanmaku:(id)arg1;
- (id)findLastRunningDanmaku;
- (double)calculateSpeedForDanmaku:(id)arg0;
- (double)right;
- (id)init;
- (double)length;
- (id)trackType;

@end