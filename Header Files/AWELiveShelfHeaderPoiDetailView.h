//
//     Generated by private class-dump
//

@class UIStackView, UIImageView, UILabel, UIView, UIButton;

@interface AWELiveShelfHeaderPoiDetailView : UIView {
    BOOL _isSupportJumpPoiDetail;
    id /* block */ _poiTitleClickedBlock;
    UIButton *_poiTitle;
    UIImageView *_rankTagIconImageView;
    UILabel *_rankTagTitleLabel;
    UIView *_rankTagBackground;
    UIStackView *_titleStackView;
    UIStackView *_poiDetailView;
    UILabel *_distanceLabel;
    UILabel *_addressLabel;
    UIView *_line;
    UILabel *_rankLabel;
    UIView *_line2;
}

@property (retain, nonatomic) UIButton *poiTitle;
@property (retain, nonatomic) UIImageView *rankTagIconImageView;
@property (retain, nonatomic) UILabel *rankTagTitleLabel;
@property (retain, nonatomic) UIView *rankTagBackground;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UIStackView *poiDetailView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIView *line2;
@property (nonatomic) BOOL isSupportJumpPoiDetail;
@property (copy, nonatomic) id /* block */ poiTitleClickedBlock;

- (id)line2;
- (void)setLine2:(id)arg0;
- (id)poiDetailView;
- (void)setPoiDetailView:(id)arg0;
- (void)setIsSupportJumpPoiDetail:(BOOL)arg0;
- (id)poiTitle;
- (id)rankTagBackground;
- (id)rankTagIconImageView;
- (id)rankTagTitleLabel;
- (id /* block */)poiTitleClickedBlock;
- (void)poiTitleClicked:(id)arg0;
- (void)setupWithTitle:(id)arg0 Distance:(id)arg1 address:(id)arg2 rank:(id)arg3 poiRankTag:(id)arg4 isShowPoiRankTag:(BOOL)arg5 isSupportJumpPoiDetail:(BOOL)arg6;
- (void)setPoiTitleClickedBlock:(id /* block */)arg0;
- (void)setPoiTitle:(id)arg0;
- (void)setRankTagIconImageView:(id)arg0;
- (void)setRankTagTitleLabel:(id)arg0;
- (void)setRankTagBackground:(id)arg0;
- (BOOL)isSupportJumpPoiDetail;
- (void).cxx_destruct;
- (id)distanceLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)line;
- (void)setLine:(id)arg0;
- (void)setDistanceLabel:(id)arg0;
- (void)setupUI;
- (id)addressLabel;
- (void)setAddressLabel:(id)arg0;
- (id)titleStackView;
- (void)setTitleStackView:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;

@end
