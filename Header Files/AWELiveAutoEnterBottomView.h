//
//     Generated by private class-dump
//

@class UILabel, IESLiveImageView;

@interface AWELiveAutoEnterBottomView : UIView {
    IESLiveImageView *_iconImageView;
    UILabel *_textLabel;
}

@property (retain, nonatomic) IESLiveImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setTextLabel:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;

@end