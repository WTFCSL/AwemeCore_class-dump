//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWELongPressPanelAdsActionFeedbackSectionModel;

@interface AWELongPressPanelAdsActionFeedbackSectionHeaderView : UICollectionReusableView {
    UILabel *_titleLabel;
    UIImageView *_imageView;
    AWELongPressPanelAdsActionFeedbackSectionModel *_model;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWELongPressPanelAdsActionFeedbackSectionModel *model;

- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupViews;

@end
