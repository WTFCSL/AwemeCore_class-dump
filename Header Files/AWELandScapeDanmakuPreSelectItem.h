//
//     Generated by private class-dump
//

@class AWEDanmakuUnitView;

@interface AWELandScapeDanmakuPreSelectItem : NSObject {
    AWEDanmakuUnitView *_danmakuUnitView;
    double _timestamp;
    struct CGPoint { double x; double y; } _pointInDanmakuUnitView;
    struct CGPoint { double x; double y; } _point;
}

@property (weak, nonatomic) AWEDanmakuUnitView *danmakuUnitView;
@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint { double x; double y; } pointInDanmakuUnitView;
@property (nonatomic) struct CGPoint { double x; double y; } point;

- (id)danmakuUnitView;
- (void)setDanmakuUnitView:(id)arg0;
- (struct CGPoint { double x0; double x1; })pointInDanmakuUnitView;
- (void)setPointInDanmakuUnitView:(struct CGPoint { double x0; double x1; })arg0;
- (double)timestamp;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })point;
- (void)setTimestamp:(double)arg0;
- (void)setPoint:(struct CGPoint { double x0; double x1; })arg0;

@end