//
//     Generated by private class-dump
//

@class IESLiveNativeAppShelfCellCommonEdgeView, UIButton, IESLiveAudienceShelfCardExtraInfo, IESLiveNativeAppShelfCellAudienceCouponInfoView, ShelfCardInfo, IESLiveNativeAppShelfCellAudienceCoverImageView, IESLiveNativeAppShelfCellAudienceTitleLabel;

@interface IESLiveAudienceShelfBaseCell : UITableViewCell {
    BOOL _hasCommodity;
    IESLiveAudienceShelfCardExtraInfo *_cardExtraInfo;
    ShelfCardInfo *_cardInfo;
    IESLiveNativeAppShelfCellCommonEdgeView *_edgeView;
    IESLiveNativeAppShelfCellAudienceTitleLabel *_titleLabel;
    IESLiveNativeAppShelfCellAudienceCoverImageView *_coverImageView;
    IESLiveNativeAppShelfCellAudienceCouponInfoView *_couponInfoView;
    UIButton *_getButton;
}

@property (retain, nonatomic) IESLiveNativeAppShelfCellCommonEdgeView *edgeView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAudienceTitleLabel *titleLabel;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAudienceCoverImageView *coverImageView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAudienceCouponInfoView *couponInfoView;
@property (retain, nonatomic) UIButton *getButton;
@property (retain, nonatomic) IESLiveAudienceShelfCardExtraInfo *cardExtraInfo;
@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (nonatomic) BOOL hasCommodity;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)getButton;
- (void)setGetButton:(id)arg0;
- (id)edgeView;
- (void)setEdgeView:(id)arg0;
- (id)couponInfoView;
- (void)setCouponInfoView:(id)arg0;
- (BOOL)hasCommodity;
- (void)setCardExtraInfo:(id)arg0;
- (void)updateShelfModel:(id)arg0 cardExtraInfo:(id)arg1;
- (id)getProductTraceParams;
- (id)cardExtraInfo;
- (void)trackCardWithEvent:(id)arg0;
- (void)setHasCommodity:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)cardInfo;
- (void)setCardInfo:(id)arg0;

@end
