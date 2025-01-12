//
//     Generated by private class-dump
//

@class UIImageView, UIStackView, UIView;

@interface IESECGoodsFeedResourceCardStoreView : UIView {
    BOOL _hasBrandIcon;
    UIImageView *_storeAvatar;
    UIView *_entranceButton;
    UIStackView *_titleStack;
    UIStackView *_recommendStack;
    double _cardWidth;
}

@property (retain, nonatomic) UIImageView *storeAvatar;
@property (retain, nonatomic) UIView *entranceButton;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UIStackView *recommendStack;
@property (nonatomic) double cardWidth;

- (void)setupUIWithModel:(id)arg0;
- (void)addSubviews;
- (id)storeAvatar;
- (id)recommendStack;
- (id)entranceButton;
- (id)trimStoreTitle:(id)arg0 font:(id)arg1;
- (void)setStoreAvatar:(id)arg0;
- (void)setEntranceButton:(id)arg0;
- (void)setRecommendStack:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleStack;
- (void)setTitleStack:(id)arg0;
- (double)cardWidth;
- (void)setCardWidth:(double)arg0;

@end
