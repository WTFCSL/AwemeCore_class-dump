//
//     Generated by private class-dump
//

@class UIButton, UIImageView, AWENewVideoCoverEditSelectHintView;

@interface AWENewVideoCoverEditStickerView : ACCGestureResponsibleStickerView {
    BOOL _editAnchorSettedForRotateAndScale;
    BOOL _editNeedResetPanOffset;
    BOOL _panForRotateAndScale;
    AWENewVideoCoverEditSelectHintView *_editSelectedHintView;
    UIButton *_selectedHintDeleteButton;
    UIImageView *_selectedHintRotateView;
    struct CGPoint { double x; double y; } _panRotateLastPoint;
    struct CGPoint { double x; double y; } _panScaleLastPoint;
    struct CGPoint { double x; double y; } _panRectCenterView;
}

@property (retain, nonatomic) AWENewVideoCoverEditSelectHintView *editSelectedHintView;
@property (retain, nonatomic) UIButton *selectedHintDeleteButton;
@property (retain, nonatomic) UIImageView *selectedHintRotateView;
@property (nonatomic) BOOL editAnchorSettedForRotateAndScale;
@property (nonatomic) BOOL editNeedResetPanOffset;
@property (nonatomic) BOOL panForRotateAndScale;
@property (nonatomic) struct CGPoint { double x; double y; } panRotateLastPoint;
@property (nonatomic) struct CGPoint { double x; double y; } panScaleLastPoint;
@property (nonatomic) struct CGPoint { double x; double y; } panRectCenterView;

- (void)doDeselect;
- (void)handlePanGesture:(id)arg0 withNewCenter:(struct CGPoint { double x0; double x1; })arg1;
- (void)doSelect;
- (id)editSelectedHintView;
- (void)updateSelectedHintViewFrame;
- (id)videoCoverConfig;
- (id)selectedHintDeleteButton;
- (id)selectedHintRotateView;
- (void)setPanRotateLastPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setPanScaleLastPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)inRotationPosition:(struct CGPoint { double x0; double x1; })arg0;
- (void)setPanForRotateAndScale:(BOOL)arg0;
- (void)setPanRectCenterView:(struct CGPoint { double x0; double x1; })arg0;
- (void)setAnchorForRotateAndScaleWithPanGesture:(id)arg0;
- (BOOL)panForRotateAndScale;
- (double)rotateForPanPosition:(struct CGPoint { double x0; double x1; })arg0;
- (double)scaleForPanPostion:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)anchorSettedForRotateAndScale;
- (void)setAnchorSettedForRotateAndScale:(BOOL)arg0;
- (void)setNeedResetPanOffset:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })panRotateLastPoint;
- (struct CGPoint { double x0; double x1; })panRectCenterView;
- (struct CGPoint { double x0; double x1; })panScaleLastPoint;
- (void)hintDeleteAction;
- (BOOL)needResetPanOffset;
- (void)setEditSelectedHintView:(id)arg0;
- (void)setSelectedHintDeleteButton:(id)arg0;
- (void)setSelectedHintRotateView:(id)arg0;
- (BOOL)editAnchorSettedForRotateAndScale;
- (void)setEditAnchorSettedForRotateAndScale:(BOOL)arg0;
- (BOOL)editNeedResetPanOffset;
- (void)setEditNeedResetPanOffset:(BOOL)arg0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)handleTapGesture:(id)arg0;
- (void)handleRotationGesture:(id)arg0;
- (double)handleScale:(double)arg0;

@end
