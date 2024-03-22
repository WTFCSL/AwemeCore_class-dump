//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;

@protocol ACCVideoDataCanvasStateProtocol <MTLJSONSerializing>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } standPlayerFrame;
@property (nonatomic) double standPlayerRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minCanvasSize;
@property (nonatomic) unsigned long long appliedType;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standPlayerFrame;
- (void)setStandPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStandPlayerRatio:(double)arg0;
- (double)standPlayerRatio;
- (struct CGSize { double x0; double x1; })minCanvasSize;
- (unsigned long long)appliedType;
- (void)setAppliedType:(unsigned long long)arg0;

@end
