//
//     Generated by private class-dump
//

@class UIImageView, AWEDoubleColumnSearchMerchandiseModel, UILabel, UIView, NSDictionary;

@interface AWEEcomSearchStateCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell> {
    UIView *_liveGoodsEmptyView;
    UIImageView *_searchIcon;
    UILabel *_title;
    UIImageView *_backGroundView;
    UILabel *_bottomTitle;
    AWEDoubleColumnSearchMerchandiseModel *_model;
    NSDictionary *_paramsInfo;
    UILabel *_rightTitle;
    UIImageView *_rightImageView;
}

@property (retain, nonatomic) UIView *liveGoodsEmptyView;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *backGroundView;
@property (retain, nonatomic) UILabel *bottomTitle;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) NSDictionary *paramsInfo;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UIImageView *rightImageView;

+ (double)heightForModel:(id)arg0 containerWidth:(double)arg1;
+ (id)identifier;

- (void)configWithModel:(id)arg0;
- (id)searchIcon;
- (void)setSearchIcon:(id)arg0;
- (void)setSearchInfoDict:(id)arg0;
- (id)paramsInfo;
- (void)setParamsInfo:(id)arg0;
- (id)backGroundView;
- (id)liveGoodsEmptyView;
- (void)jumpStore;
- (void)setLiveGoodsEmptyView:(id)arg0;
- (void)setBackGroundView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)updateUI;
- (void)setRightTitle:(id)arg0;
- (id)rightTitle;
- (id)bottomTitle;
- (void)setBottomTitle:(id)arg0;
- (void)setRightImageView:(id)arg0;
- (id)rightImageView;

@end
