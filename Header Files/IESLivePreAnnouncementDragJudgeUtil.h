//
//     Generated by private class-dump
//

@class CAShapeLayer, UIImageView, UIView, UILabel, IESLivePreAnnouncementPanelViewNew;

@interface IESLivePreAnnouncementDragJudgeUtil : NSObject {
    UIView *_borderView;
    CAShapeLayer *_dottedLineBorder;
    UIView *_topGreyView;
    UIView *_bottomGreyView;
    UIImageView *_deleteIconView;
    UILabel *_deleteTip;
    IESLivePreAnnouncementPanelViewNew *_announcementView;
    struct CGPoint { double x; double y; } _lastPosition;
    struct CGPoint { double x; double y; } _currentPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _borderViewFrame;
}

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CAShapeLayer *dottedLineBorder;
@property (retain, nonatomic) UIView *topGreyView;
@property (retain, nonatomic) UIView *bottomGreyView;
@property (retain, nonatomic) UIImageView *deleteIconView;
@property (retain, nonatomic) UILabel *deleteTip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } borderViewFrame;
@property (nonatomic) struct CGPoint { double x; double y; } currentPosition;
@property (weak, nonatomic) IESLivePreAnnouncementPanelViewNew *announcementView;
@property (nonatomic) struct CGPoint { double x; double y; } lastPosition;

- (id)announcementView;
- (void)setAnnouncementView:(id)arg0;
- (id)topGreyView;
- (void)setTopGreyView:(id)arg0;
- (void)panAction:(id)arg0;
- (void)setBorderViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGPoint { double x0; double x1; })checkPosition:(struct CGPoint { double x0; double x1; })arg0 editMode:(BOOL)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderViewFrame;
- (id)bottomGreyView;
- (void)setDottedLineBorder:(id)arg0;
- (id)dottedLineBorder;
- (void)setDeleteIconView:(id)arg0;
- (id)deleteIconView;
- (void)setDeleteTip:(id)arg0;
- (id)deleteTip;
- (void)setBottomGreyView:(id)arg0;
- (void)enterEditStyle;
- (void)exitEditStyle;
- (void)sendNewPosition:(struct CGPoint { double x0; double x1; })arg0;
- (id)initWithAnnouncementView:(id)arg0;
- (void)showWithNode;
- (void)updateQuadrantPositon:(struct CGPoint { double x0; double x1; })arg0;
- (void)dragSucceed;
- (void)dragFail;
- (void)dismissAction;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })currentPosition;
- (void)setupUI;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (void)setCurrentPosition:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })lastPosition;
- (void)setLastPosition:(struct CGPoint { double x0; double x1; })arg0;

@end