//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface AWECommentGuideLunaAnchorView : UIView {
    id /* block */ _clickBlock;
    id /* block */ _displayBlock;
    UIImageView *_iconImageView;
    UILabel *_preTitleLabel;
    UIButton *_songButton;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (retain, nonatomic) UIButton *songButton;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ displayBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (id)preTitleLabel;
- (void)setPreTitleLabel:(id)arg0;
- (id)songButton;
- (void)p_didClickSong;
- (void)setSongButton:(id)arg0;
- (void)setDisplayBlock:(id /* block */)arg0;
- (id /* block */)displayBlock;
- (void)updateWithAnchorTitle:(id)arg0 songTitle:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setUpUI;

@end