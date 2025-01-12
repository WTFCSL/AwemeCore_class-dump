//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWETeenLandscapeAlbumPanelSlidingTabCell : UICollectionViewCell {
    UILabel *_tabTitle;
    UIView *_indicatorView;
}

@property (retain, nonatomic) UILabel *tabTitle;
@property (retain, nonatomic) UIView *indicatorView;

+ (struct CGSize { double x0; double x1; })cellSizeWithTitle:(id)arg0 andFont:(id)arg1;

- (void)p_setupViews;
- (void)p_layoutViews;
- (void)configCellWithTabTitle:(id)arg0;
- (id)tabTitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)indicatorView;
- (void)setSelected:(BOOL)arg0;
- (void)setIndicatorView:(id)arg0;
- (void)setTabTitle:(id)arg0;

@end
