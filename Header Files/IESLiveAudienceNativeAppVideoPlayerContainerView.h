//
//     Generated by private class-dump
//

@class UIButton, UIView;
@protocol IESLiveAudienceNativeAppVideoPlayerContainerViewDelegate;

@interface IESLiveAudienceNativeAppVideoPlayerContainerView : UIView {
    id<IESLiveAudienceNativeAppVideoPlayerContainerViewDelegate> _delegate;
    UIView *_contentView;
    UIButton *_closeButton;
    struct CGPoint { double x; double y; } _movementStartPoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _movementStartFrame;
}

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGPoint { double x; double y; } movementStartPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } movementStartFrame;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<IESLiveAudienceNativeAppVideoPlayerContainerViewDelegate> delegate;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
+ (id)showOnView:(id)arg0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFloatOnViewFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withView:(id)arg1;

- (void)setMovementStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setMovementStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGPoint { double x0; double x1; })movementStartPoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })movementStartFrame;
- (void)animateToAdjustedFrame;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)delegate;
- (void)closeAction;
- (void)pan:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)tapAction;

@end
