//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEProfileLynxTabBottomView : UIView {
    id /* block */ _didClick;
    UIView *_containerView;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_iconImage;
    UILabel *_contentLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) id /* block */ didClick;

- (id /* block */)didClick;
- (void)setDidClick:(id /* block */)arg0;
- (void)didClickView;
- (void)setImageWithURL:(id)arg0 defaultImage:(id)arg1;
- (id)iconImage;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)contentView;
- (void)setImage:(id)arg0;
- (void)setContent:(id)arg0;
- (id)containerView;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg0;
- (void)setIconImage:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end