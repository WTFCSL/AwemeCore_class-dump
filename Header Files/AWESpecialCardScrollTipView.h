//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWESpecialCardScrollTipViewConfig;

@interface AWESpecialCardScrollTipView : UIView {
    AWESpecialCardScrollTipViewConfig *_config;
    UILabel *_scrollTipLabel;
    UIImageView *_moreImageView;
}

@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (copy, nonatomic) AWESpecialCardScrollTipViewConfig *config;

- (void)setMoreImageView:(id)arg0;
- (id)moreImageView;
- (id)scrollTipLabel;
- (void)setScrollTipLabel:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateColor;

@end
