//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWETeenHotSpotTitleView : UIView {
    UIView *_titleContainer;
    UILabel *_titleLabel;
    UIView *_subTitleContainer;
    UILabel *_subTitleLabel;
    UIImageView *_hotSpotBgView;
    UIImageView *_hotSpotLabel;
}

@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subTitleContainer;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *hotSpotBgView;
@property (retain, nonatomic) UIImageView *hotSpotLabel;

- (void)p_setupView;
- (id)hotSpotLabel;
- (void)setHotSpotLabel:(id)arg0;
- (void)updateWithHotSpotModel:(id)arg0;
- (id)subTitleContainer;
- (id)hotSpotBgView;
- (void)setSubTitleContainer:(id)arg0;
- (void)setHotSpotBgView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)titleContainer;
- (void)setTitleContainer:(id)arg0;

@end
