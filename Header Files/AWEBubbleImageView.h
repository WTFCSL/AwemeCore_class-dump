//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBubbleImageView : UIImageView <AWEBubbleAnchor> {
    unsigned long long _direction;
    struct CGPoint { double x; double y; } _anchorAdjustment;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) struct CGPoint { double x; double y; } anchorAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)arg0 direction:(unsigned long long)arg1 anchorAdjustment:(struct CGPoint { double x0; double x1; })arg2;
- (struct CGPoint { double x0; double x1; })anchorPositionRelatedToLeftTop;
- (void)redrawStrokeIfNeeded;
- (void)drawStrokeIfNeeded;
- (struct CGPoint { double x0; double x1; })anchorAdjustment;
- (void)setAnchorAdjustment:(struct CGPoint { double x0; double x1; })arg0;
- (id)initWithImage:(id)arg0 direction:(unsigned long long)arg1;
- (unsigned long long)direction;
- (void)setDirection:(unsigned long long)arg0;

@end
