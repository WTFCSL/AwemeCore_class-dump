//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;
@protocol IESGCPListPopupBackgroundViewDelegate;

@interface IESGCPListPopupBackgroundView : UIView {
    UILabel *_titleLabel;
    UIImageView *_backgroundImageView;
    UIButton *_leftBarButton;
    UIButton *_rightBarButton;
    id<IESGCPListPopupBackgroundViewDelegate> _delegate;
    UIView *_contentViewWrapper;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentViewWrapper;
@property (retain, nonatomic) UIButton *rightBarButton;
@property (retain, nonatomic) UIButton *leftBarButton;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (weak, nonatomic) id<IESGCPListPopupBackgroundViewDelegate> delegate;

- (void)initUserInterface;
- (id)contentViewWrapper;
- (void)setContentViewWrapper:(id)arg0;
- (double)rightExtraOffset;
- (void)leftBarButtonDidClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 titleText:(id)arg1;
- (void)setLeftBarButtonHidden:(BOOL)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)titleLabel;
- (id)delegate;
- (void)addContentView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (void)setRightBarButton:(id)arg0;
- (void)setLeftBarButton:(id)arg0;
- (id)rightBarButton;
- (id)leftBarButton;

@end
