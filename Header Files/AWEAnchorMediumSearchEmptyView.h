//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEAnchorMediumSearchEmptyView : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)setupEmptyViewUI;
- (void)setupEmptyViewTitle:(id)arg0 subtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;

@end