//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveWebPPlayer, IESLiveChargeFullLoadingViewDelegate;

@interface IESLiveChargeFullLoadingView : UIView {
    id<IESLiveChargeFullLoadingViewDelegate> _delegate;
    UIView *_containerView;
    UIImageView<IESLiveWebPPlayer> *_imageView;
    UILabel *_textLabel;
    UIButton *_closeBtn;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (weak, nonatomic) id<IESLiveChargeFullLoadingViewDelegate> delegate;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)setupUIs;
- (void)updateTips:(id)arg0;
- (void)closeBtnClick;
- (id)textLabel;
- (void)dismiss;
- (void).cxx_destruct;
- (id)imageView;
- (void)show;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)setTextLabel:(id)arg0;

@end
