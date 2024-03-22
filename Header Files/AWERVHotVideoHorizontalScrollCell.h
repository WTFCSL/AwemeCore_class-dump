//
//     Generated by private class-dump
//

@class UIImageView, AWEFeedInsetsLabel, UILabel, AWERVHotVideoPlayCoverView;

@interface AWERVHotVideoHorizontalScrollCell : UICollectionViewCell {
    UIImageView *_coverImageView;
    AWEFeedInsetsLabel *_tagLabel;
    UILabel *_descLabel;
    AWERVHotVideoPlayCoverView *_maskCoverView;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEFeedInsetsLabel *tagLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWERVHotVideoPlayCoverView *maskCoverView;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)maskCoverView;
- (void)configCellWithModel:(id)arg0 currentPlayModelItemId:(id)arg1;
- (void)setMaskCoverView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end