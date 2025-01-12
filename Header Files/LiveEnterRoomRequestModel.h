//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;
@protocol IESLiveRoomService;

@interface LiveEnterRoomRequestModel : IESLiveDynamicModel {
    BOOL _isEnterFromSchema;
    NSString *_secRenqibaoBuyerid;
    NSString *_secDouPlusBuyerID;
    NSString *_creativeID;
    NSString *_reqID;
    NSString *_ecomGoodsList;
    NSNumber *_linkUserId;
    NSString *_shopGuideId;
    long long _requestSource;
    long long _filterSceneType;
    NSDictionary *_businessParams;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *liveReason;
@property (nonatomic) BOOL isLogin;
@property (copy, nonatomic) NSString *fromUserID;
@property (nonatomic) BOOL hasPreEntered;
@property (copy, nonatomic) NSString *enterSourceExtra;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) long long feedDrawTagId;
@property (retain, nonatomic) NSNumber *preferTagId;
@property (retain, nonatomic) NSString *secRenqibaoBuyerid;
@property (retain, nonatomic) NSString *secDouPlusBuyerID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSString *ecomGoodsList;
@property (retain, nonatomic) NSNumber *linkUserId;
@property (copy, nonatomic) NSString *shopGuideId;
@property (nonatomic) long long requestSource;
@property (nonatomic) BOOL isEnterFromSchema;
@property (nonatomic) long long filterSceneType;
@property (copy, nonatomic) NSDictionary *businessParams;

+ (id)initWithRoomModel:(id)arg0 context:(id)arg1 sourcePage:(id)arg2;
+ (id)adTrackExtraWithContext:(id)arg0;

- (id)businessParams;
- (void)setCreativeID:(id)arg0;
- (id)deviceScore;
- (id)secRenqibaoBuyerid;
- (void)setSecRenqibaoBuyerid:(id)arg0;
- (id)secDouPlusBuyerID;
- (void)setSecDouPlusBuyerID:(id)arg0;
- (void)setReqID:(id)arg0;
- (id)reqID;
- (id)shopGuideId;
- (void)setShopGuideId:(id)arg0;
- (void)setBusinessParams:(id)arg0;
- (id)initWithRoomModel:(id)arg0;
- (id)ecomGoodsList;
- (void)setEcomGoodsList:(id)arg0;
- (id)buildRequestParams;
- (BOOL)isEnterFromSchema;
- (void)setIsEnterFromSchema:(BOOL)arg0;
- (void)setFilterSceneType:(long long)arg0;
- (id)buildPreloadRequestParams;
- (long long)filterSceneType;
- (id)linkUserId;
- (void)setLinkUserId:(id)arg0;
- (void).cxx_destruct;
- (void)setRequestSource:(long long)arg0;
- (long long)requestSource;
- (id)creativeID;

@end
