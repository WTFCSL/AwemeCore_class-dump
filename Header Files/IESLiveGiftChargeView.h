//
//     Generated by private class-dump
//

@class IESLiveGiftChargeItem, UIImageView, IESLiveDouyinChargeBannerView, UILabel, NSString, UIButton;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftChargeView : UIView <IESLiveWalletAction, IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol> {
    BOOL _didSetup;
    id<IESLiveRefactGiftPanelSectionVMProtocol> _sectionVM;
    IESLiveGiftChargeItem *_item;
    UIButton *_chargeContentView;
    unsigned long long _giftCurreny;
    UIImageView *_priceLeftIconImageView;
    UILabel *_balanceLabel;
    UIImageView *_priceRightIconImageView;
    IESLiveDouyinChargeBannerView *_chargeBannerView;
}

@property (nonatomic) unsigned long long giftCurreny;
@property (retain, nonatomic) UIButton *chargeContentView;
@property (retain, nonatomic) UIImageView *priceLeftIconImageView;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) UIImageView *priceRightIconImageView;
@property (retain, nonatomic) IESLiveDouyinChargeBannerView *chargeBannerView;
@property (nonatomic) BOOL didSetup;
@property (retain, nonatomic) IESLiveGiftChargeItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)diamondHasUpdated;
- (id)sectionVM;
- (void)setSectionVM:(id)arg0;
- (void)setChargeContentView:(id)arg0;
- (id)chargeContentView;
- (void)didChargeContentViewClicked:(id)arg0;
- (void)setPriceRightIconImageView:(id)arg0;
- (id)priceRightIconImageView;
- (void)setPriceLeftIconImageView:(id)arg0;
- (id)priceLeftIconImageView;
- (void)setGiftCurreny:(unsigned long long)arg0;
- (void)loadChargeSubViews;
- (void)trackChargeEntranceShow;
- (unsigned long long)giftCurreny;
- (id)chargeBannerView;
- (void)setChargeBannerView:(id)arg0;
- (void)updateContent;
- (id)item;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setItem:(id)arg0;
- (BOOL)didSetup;
- (void)setDidSetup:(BOOL)arg0;
- (id)balanceLabel;
- (void)setBalanceLabel:(id)arg0;

@end
