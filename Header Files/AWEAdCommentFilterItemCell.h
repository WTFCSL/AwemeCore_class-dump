//
//     Generated by private class-dump
//

@class UILabel, AWEAdFeedCommentFilterModel;

@interface AWEAdCommentFilterItemCell : UICollectionViewCell {
    UILabel *_titleLabel;
    AWEAdFeedCommentFilterModel *_filterModel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEAdFeedCommentFilterModel *filterModel;

- (void)configViews;
- (void)setFilterModel:(id)arg0;
- (id)filterModel;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;

@end