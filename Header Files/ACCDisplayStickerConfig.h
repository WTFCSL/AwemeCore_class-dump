//
//     Generated by private class-dump
//

@interface ACCDisplayStickerConfig : ACCStickerConfig {
    BOOL _syncAlignPosition;
    BOOL _syncCoordinateChange;
    BOOL _hideBGVisualEffect;
    BOOL _shouldBGViewRasterize;
    BOOL _forceFixLocation;
    double _scalingRatio;
    struct CGPoint { double x; double y; } _alignPointOffset;
}

@property (nonatomic) struct CGPoint { double x; double y; } alignPointOffset;
@property (nonatomic) BOOL syncAlignPosition;
@property (nonatomic) BOOL syncCoordinateChange;
@property (nonatomic) BOOL hideBGVisualEffect;
@property (nonatomic) BOOL shouldBGViewRasterize;
@property (nonatomic) double scalingRatio;
@property (nonatomic) BOOL forceFixLocation;

- (void)setScalingRatio:(double)arg0;
- (double)scalingRatio;
- (void)setAlignPointOffset:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)hideBGVisualEffect;
- (BOOL)shouldBGViewRasterize;
- (BOOL)forceFixLocation;
- (void)setHideBGVisualEffect:(BOOL)arg0;
- (void)setShouldBGViewRasterize:(BOOL)arg0;
- (void)setSyncAlignPosition:(BOOL)arg0;
- (void)setSyncCoordinateChange:(BOOL)arg0;
- (void)setForceFixLocation:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })alignPointOffset;
- (BOOL)syncAlignPosition;
- (BOOL)syncCoordinateChange;

@end
