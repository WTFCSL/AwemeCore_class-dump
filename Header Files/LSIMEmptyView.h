//
//     Generated by private class-dump
//

@class UIButton, NSString, UIImageView, UIImage, UILabel, YYLabel;
@protocol LSIMEmptyViewDelegate;

@interface LSIMEmptyView : UIView {
    UIImage *_iconImage;
    NSString *_titleText;
    NSString *_infoText;
    NSString *_actionText;
    NSString *_guideText;
    id<LSIMEmptyViewDelegate> _delegate;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    YYLabel *_infoLabel;
    UIButton *_actionBtn;
    UIButton *_guideBtn;
}

@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) YYLabel *infoLabel;
@property (readonly, nonatomic) UIButton *actionBtn;
@property (readonly, nonatomic) UIButton *guideBtn;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSString *actionText;
@property (copy, nonatomic) NSString *guideText;
@property (weak, nonatomic) id<LSIMEmptyViewDelegate> delegate;

- (void)setGuideText:(id)arg0;
- (id)guideText;
- (id)guideBtn;
- (id)actionBtn;
- (void)btnClicked:(id)arg0;
- (id)iconImage;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)titleText;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)iconImageView;
- (void)setIconImage:(id)arg0;
- (void)setupUI;
- (void)setInfoText:(id)arg0;
- (id)actionText;
- (void)setActionText:(id)arg0;
- (id)infoLabel;
- (id)infoText;

@end