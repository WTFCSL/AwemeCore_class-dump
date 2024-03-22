//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEVideoHallBottomBarView : UIView {
    UIView *_videoHallBottomButton;
    UILabel *_bottomButtonLabel;
    UIImageView *_bottomButtonLeftIcon;
    UIImageView *_bottomButtonRightIcon;
}

@property (retain, nonatomic) UIView *videoHallBottomButton;
@property (retain, nonatomic) UILabel *bottomButtonLabel;
@property (retain, nonatomic) UIImageView *bottomButtonLeftIcon;
@property (retain, nonatomic) UIImageView *bottomButtonRightIcon;

- (void)handleClickBottomButton;
- (id)videoHallBottomButton;
- (id)bottomButtonLeftIcon;
- (id)bottomButtonLabel;
- (id)bottomButtonRightIcon;
- (void)setVideoHallBottomButton:(id)arg0;
- (void)setBottomButtonLabel:(id)arg0;
- (void)setBottomButtonLeftIcon:(id)arg0;
- (void)setBottomButtonRightIcon:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
