//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface AWEFollowListVCDCell : UICollectionViewCell {
    id /* block */ _loadmoreButtonClickedBlock;
    UIView *_vcdView;
    UIView *_lineView;
    UILabel *_titleLabel;
    UIButton *_loadMoreButton;
}

@property (retain, nonatomic) UIView *vcdView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *loadMoreButton;
@property (copy, nonatomic) id /* block */ loadmoreButtonClickedBlock;

- (void)setLoadmoreButtonClickedBlock:(id /* block */)arg0;
- (id /* block */)loadmoreButtonClickedBlock;
- (void)configCell:(id)arg0 hasLoadMoreButton:(BOOL)arg1;
- (id)vcdView;
- (void)setVcdView:(id)arg0;
- (void)configFooterViewWihtText:(id)arg0 hasLoadMoreButton:(BOOL)arg1;
- (void)setLoadMoreButton:(id)arg0;
- (id)loadMoreButton;
- (void)loadMoreButtonClicked:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end
