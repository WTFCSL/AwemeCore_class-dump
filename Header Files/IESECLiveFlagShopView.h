//
//     Generated by private class-dump
//

@class IESECLiveGoodsListAuthorShopInfo, NSString, IESECLiveGoodsListAuthorShopWindowInfo, NSDictionary, IESECLiveStackView, YYLabel, NSNumber, IESECLiveContext;

@interface IESECLiveFlagShopView : UIView {
    IESECLiveContext *_liveContext;
    IESECLiveGoodsListAuthorShopInfo *_shopInfoModel;
    IESECLiveGoodsListAuthorShopWindowInfo *_shopWindowInfoModel;
    NSNumber *_listTopDisplayStatus;
    NSString *_shopEntranceLocation;
    IESECLiveStackView *_shopInfoStackView;
    YYLabel *_titleLabel;
    NSDictionary *_trackParams;
}

@property (retain, nonatomic) IESECLiveStackView *shopInfoStackView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopInfo *shopInfoModel;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopWindowInfo *shopWindowInfoModel;
@property (retain, nonatomic) NSNumber *listTopDisplayStatus;
@property (retain, nonatomic) NSString *shopEntranceLocation;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)shopInfoModel;
- (void)setShopInfoModel:(id)arg0;
- (void)setLiveContext:(id)arg0;
- (id)liveContext;
- (void)clickShopEntranceAction;
- (void)setShopInfoStackView:(id)arg0;
- (id)shopInfoStackView;
- (id)shopEntranceLocation;
- (id)listTopDisplayStatus;
- (id)addLiveInfoParamsToURL:(id)arg0;
- (id)shopWindowInfoModel;
- (void)setShopWindowInfoModel:(id)arg0;
- (void)setListTopDisplayStatus:(id)arg0;
- (void)setShopEntranceLocation:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end