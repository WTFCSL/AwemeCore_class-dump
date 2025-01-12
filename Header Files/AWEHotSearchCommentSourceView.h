//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEHotSearchCommentSourceView : UICollectionReusableView {
    id /* block */ _tappedBlock;
    UIImageView *_coverImageView;
    UIImageView *_coverPlayButton;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *coverPlayButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) id /* block */ tappedBlock;

- (void)awe_themeDidChange:(long long)arg0;
- (void)configWithCellModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setTappedBlock:(id /* block */)arg0;
- (id /* block */)tappedBlock;
- (void)onTapped:(id)arg0;
- (id)coverPlayButton;
- (id)descriptionStringForAweme:(id)arg0;
- (void)relayoutLabelsWithNeedHideContent:(BOOL)arg0;
- (void)setCoverPlayButton:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
