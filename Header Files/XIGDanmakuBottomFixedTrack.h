//
//     Generated by private class-dump
//

@interface XIGDanmakuBottomFixedTrack : XIGDanmakuBaseTrack {
    double _danmakuLifeTime;
}

@property (nonatomic) double danmakuLifeTime;

- (void)applyNewLifeTime;
- (double)calculateLifeTimeForDanmakuDescriptor:(id)arg0;
- (void)layoutDidChanged;
- (void)updateDanmakuDescritor:(id)arg0;
- (double)danmakuLifeTime;
- (void)setDanmakuLifeTime:(double)arg0;
- (BOOL)canAddDanmaku:(id)arg0;
- (id)init;
- (id)trackType;

@end
