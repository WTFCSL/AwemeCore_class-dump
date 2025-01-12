//
//     Generated by private class-dump
//

@protocol AWEDanmakuItemViewDelegate;

@interface AWEDanmakuRTLTrack : XIGDanmakuBaseTrack {
    id<AWEDanmakuItemViewDelegate> _itemViewdelegate;
}

@property (weak, nonatomic) id<AWEDanmakuItemViewDelegate> itemViewdelegate;

- (void)unloadDanmaku:(id)arg0;
- (void)addDanmaku:(id)arg0;
- (void)removeAllDanmakus;
- (void)updateWithPassingTime:(double)arg0;
- (double)calculateLifeTimeForDanmakuDescriptor:(id)arg0;
- (void)layoutDidChanged;
- (void)updateDanmakuDescritor:(id)arg0;
- (BOOL)canAddDanmaku:(id)arg0;
- (void)danmakuContentSizeDidChanged:(id)arg0;
- (void)relayoutDisplayingDanmakus;
- (void)adjustDanmakuPositionIfNeededBetweenPrevious:(id)arg0 current:(id)arg1;
- (double)minimumSpacingFor:(id)arg0 chasingDanmaku:(id)arg1;
- (double)spacingBetweenPreviousDanmaku:(id)arg0 chasingDanmaku:(id)arg1;
- (id)findLastRunningDanmaku;
- (double)calculateSpeedForDanmaku:(id)arg0;
- (void)setItemViewdelegate:(id)arg0;
- (id)itemViewdelegate;
- (BOOL)isDanmaku:(id)arg0 canOverTakeDanmaku:(id)arg1;
- (double)caculateDanmakuRemainLifeTime:(id)arg0;
- (id)getDanmakuCOntext:(id)arg0;
- (double)right;
- (void).cxx_destruct;
- (double)length;
- (id)trackType;

@end
