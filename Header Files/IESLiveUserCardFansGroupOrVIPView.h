//
//     Generated by private class-dump
//

@class UIView, IESLiveProfileBusinessArea, UIImageView, IESLiveGiftExhibitionBanner, IESLiveUserCardStore, IESLiveHonorWallElement, HTSLiveAmazingBackgroundView;

@interface IESLiveUserCardFansGroupOrVIPView : UIView {
    BOOL _twoElementMode;
    IESLiveUserCardStore *_store;
    IESLiveProfileBusinessArea *_businessArea;
    IESLiveGiftExhibitionBanner *_giftExhibitionData;
    IESLiveHonorWallElement *_fansGroupElement;
    HTSLiveAmazingBackgroundView *_fansGroupBackgroundColorView;
    UIView *_fansGroupText;
    UIView *_fansGroupNumber;
    UIImageView *_fansGroupRightImageView;
    IESLiveHonorWallElement *_vipElement;
    HTSLiveAmazingBackgroundView *_vipBackgroundColorView;
    UIView *_vipText;
    UIView *_vipStatus;
    UIImageView *_vipRightRightImageView;
}

@property (nonatomic) BOOL twoElementMode;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveProfileBusinessArea *businessArea;
@property (retain, nonatomic) IESLiveGiftExhibitionBanner *giftExhibitionData;
@property (retain, nonatomic) IESLiveHonorWallElement *fansGroupElement;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *fansGroupBackgroundColorView;
@property (retain, nonatomic) UIView *fansGroupText;
@property (retain, nonatomic) UIView *fansGroupNumber;
@property (retain, nonatomic) UIImageView *fansGroupRightImageView;
@property (retain, nonatomic) IESLiveHonorWallElement *vipElement;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *vipBackgroundColorView;
@property (retain, nonatomic) UIView *vipText;
@property (retain, nonatomic) UIView *vipStatus;
@property (retain, nonatomic) UIImageView *vipRightRightImageView;

- (id)vipStatus;
- (void)setGiftExhibitionData:(id)arg0;
- (id)giftExhibitionData;
- (void)setBusinessArea:(id)arg0;
- (void)setTwoElementMode:(BOOL)arg0;
- (id)businessArea;
- (void)setFansGroupElement:(id)arg0;
- (void)setVipElement:(id)arg0;
- (id)fansGroupBackgroundColorView;
- (BOOL)twoElementMode;
- (void)doFansGroupTapped;
- (id)fansGroupElement;
- (void)setFansGroupText:(id)arg0;
- (id)fansGroupText;
- (void)setFansGroupNumber:(id)arg0;
- (id)fansGroupNumber;
- (id)fansGroupRightImageView;
- (id)fansGroupBackgroundPath;
- (id)vipBackgroundColorView;
- (id)vipElement;
- (void)setVipText:(id)arg0;
- (id)vipText;
- (void)setVipStatus:(id)arg0;
- (id)vipRightRightImageView;
- (id)vipBackgroundPath;
- (void)doVIPTapped;
- (id)createColors:(id)arg0;
- (BOOL)showCurrentAnchorPage;
- (void)setFansGroupBackgroundColorView:(id)arg0;
- (void)setFansGroupRightImageView:(id)arg0;
- (void)setVipBackgroundColorView:(id)arg0;
- (void)setVipRightRightImageView:(id)arg0;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)textColor;
- (void)setupUI;
- (double)containerWidth;

@end