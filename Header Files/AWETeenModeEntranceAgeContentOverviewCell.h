//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWETeenModeEntranceAgeContentOverviewCell : UICollectionViewCell {
    BOOL _isSmallScreen;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_tagLabel;
    UIView *_tagView;
}

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *tagView;
@property (nonatomic) BOOL isSmallScreen;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)p_setupUI;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)updateTagLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isSmallScreen;
- (void)setTitleLabel:(id)arg0;
- (void)setIsSmallScreen:(BOOL)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
