//
//     Generated by private class-dump
//

@class HTSLiveGiftPanelTopDetail, HTSLiveCommonDetail, HTSLiveDiamondListBannerDetail, HTSLiveGiftPanelEntranceDetail, HTSLiveBannerDetail;

@interface HTSLiveTouchPositionDetail : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGiftPanelTopDetail *giftPanelTopDetail;
@property (nonatomic) BOOL hasGiftPanelTopDetail;
@property (retain, nonatomic) HTSLiveDiamondListBannerDetail *diamondListBannerDetail;
@property (nonatomic) BOOL hasDiamondListBannerDetail;
@property (retain, nonatomic) HTSLiveCommonDetail *commonDetail;
@property (nonatomic) BOOL hasCommonDetail;
@property (retain, nonatomic) HTSLiveBannerDetail *bannerDetail;
@property (nonatomic) BOOL hasBannerDetail;
@property (retain, nonatomic) HTSLiveGiftPanelEntranceDetail *giftPanelEntranceDetail;
@property (nonatomic) BOOL hasGiftPanelEntranceDetail;

+ (id)descriptor;

@end