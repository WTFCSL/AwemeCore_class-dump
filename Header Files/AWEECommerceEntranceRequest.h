//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEGoodsEnterFullScreenRequest, AWEAwemeModel, AWEModernShopRequest, NSNumber;

@interface AWEECommerceEntranceRequest : NSObject {
    BOOL _followStatus;
    BOOL _avoidHalfMode;
    long long _type;
    AWEAwemeModel *_aweme;
    NSString *_sourcePage;
    NSString *_promotionID;
    AWEGoodsEnterFullScreenRequest *_fullScreenRequest;
    AWEModernShopRequest *_modernShopRequest;
    NSString *_enterMethod;
    NSString *_carrierType;
    NSDictionary *_extraData;
    long long _internalFeedType;
    NSNumber *_visitStartTime;
    NSString *_sourceBtmToken;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) AWEGoodsEnterFullScreenRequest *fullScreenRequest;
@property (retain, nonatomic) AWEModernShopRequest *modernShopRequest;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *carrierType;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) long long internalFeedType;
@property (nonatomic) BOOL followStatus;
@property (nonatomic) BOOL avoidHalfMode;
@property (retain, nonatomic) NSNumber *visitStartTime;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (BOOL)followStatus;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setFollowStatus:(BOOL)arg0;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)setCarrierType:(id)arg0;
- (id)promotionID;
- (void)setSourceBtmToken:(id)arg0;
- (void)setPromotionID:(id)arg0;
- (void)setSourcePage:(id)arg0;
- (void)setAvoidHalfMode:(BOOL)arg0;
- (id)sourceBtmToken;
- (id)sourcePage;
- (id)carrierType;
- (void)setVisitStartTime:(id)arg0;
- (void)setModernShopRequest:(id)arg0;
- (id)modernShopRequest;
- (BOOL)avoidHalfMode;
- (id)fullScreenRequest;
- (void)setFullScreenRequest:(id)arg0;
- (long long)internalFeedType;
- (void)setInternalFeedType:(long long)arg0;
- (id)visitStartTime;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setExtraData:(id)arg0;
- (id)extraData;

@end
