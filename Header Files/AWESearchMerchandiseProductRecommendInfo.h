//
//     Generated by private class-dump
//

@class AWESearchMerchandiseCommentInfo, AWESearchMerchandiseIconRecommendAreaStruct, AWESearchMerchandiseKOLInfo, AWESearchMerchandiseLeaderboard, AWESearchMerchandiseShopInfo, AWESearchMerchandiseUserInfo, AWESearchMerchandiseProductDoubleInfos, AWESearchMerchandiseCommonInfo;

@interface AWESearchMerchandiseProductRecommendInfo : AWEBaseApiModel {
    AWESearchMerchandiseCommentInfo *_commentInfo;
    AWESearchMerchandiseLeaderboard *_leaderBoard;
    AWESearchMerchandiseKOLInfo *_KOLInfo;
    AWESearchMerchandiseShopInfo *_comparePriceInfo;
    AWESearchMerchandiseShopInfo *_shopInfo;
    AWESearchMerchandiseUserInfo *_userInfo;
    AWESearchMerchandiseCommonInfo *_commonInfo;
    AWESearchMerchandiseProductDoubleInfos *_doubleCommonInfo;
    AWESearchMerchandiseIconRecommendAreaStruct *_iconRecommendArea;
}

@property (retain, nonatomic) AWESearchMerchandiseCommentInfo *commentInfo;
@property (retain, nonatomic) AWESearchMerchandiseLeaderboard *leaderBoard;
@property (retain, nonatomic) AWESearchMerchandiseKOLInfo *KOLInfo;
@property (retain, nonatomic) AWESearchMerchandiseShopInfo *comparePriceInfo;
@property (retain, nonatomic) AWESearchMerchandiseShopInfo *shopInfo;
@property (retain, nonatomic) AWESearchMerchandiseUserInfo *userInfo;
@property (retain, nonatomic) AWESearchMerchandiseCommonInfo *commonInfo;
@property (retain, nonatomic) AWESearchMerchandiseProductDoubleInfos *doubleCommonInfo;
@property (retain, nonatomic) AWESearchMerchandiseIconRecommendAreaStruct *iconRecommendArea;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCommentInfo:(id)arg0;
- (id)leaderBoard;
- (void)setLeaderBoard:(id)arg0;
- (id)KOLInfo;
- (void)setKOLInfo:(id)arg0;
- (id)comparePriceInfo;
- (void)setComparePriceInfo:(id)arg0;
- (id)shopInfo;
- (void)setShopInfo:(id)arg0;
- (id)doubleCommonInfo;
- (void)setDoubleCommonInfo:(id)arg0;
- (id)iconRecommendArea;
- (void)setIconRecommendArea:(id)arg0;
- (id)commonInfo;
- (void)setCommonInfo:(id)arg0;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;
- (id)commentInfo;

@end