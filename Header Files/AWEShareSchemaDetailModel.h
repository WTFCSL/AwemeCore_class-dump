//
//     Generated by private class-dump
//

@class AWEURLModel, AWEShareSchemaLongVideoModel, AWEShareSchemaSpecialConfigModel, AWEShareSchemaVideoModel, AWEShareSchemaChallengeModel, AWEShareSchemaPOIModel, AWEShareSchemaLiveFormatModel, AWEShareSchemaCircleModel, AWEFavoriteFolderBaseInfoModel, NSString, AWEShareSchemaPlayRemoteModel, AWEShareSchemaGoodsModel, AWEShareSchemaPOIGoodsModel, AWEShareSchemaLiveModel, AWEConversationCellInfoModel, AWECouponModel;

@interface AWEShareSchemaDetailModel : AWEBaseApiModel {
    BOOL _isCloseFriend;
    BOOL _isFriend;
    BOOL _isPrivateAccount;
    BOOL _isVisible;
    AWEShareSchemaVideoModel *_videoModel;
    NSString *_liveUserName;
    NSString *_liveRoomData;
    NSString *_userNickName;
    AWEShareSchemaChallengeModel *_challengeModel;
    NSString *_musicTitle;
    NSString *_POIName;
    NSString *_POIRankName;
    NSString *_goodsName;
    long long _followStatus;
    AWEURLModel *_avatarURL;
    NSString *_userID;
    NSString *_propName;
    AWECouponModel *_coupon;
    AWEShareSchemaGoodsModel *_goodsModel;
    AWEShareSchemaPOIModel *_poiModel;
    AWEShareSchemaPOIGoodsModel *_poiGoodsModel;
    AWEShareSchemaPlayRemoteModel *_playRemoteModel;
    AWEShareSchemaLiveFormatModel *_formatModel;
    AWEShareSchemaSpecialConfigModel *_configModel;
    AWEShareSchemaLiveModel *_liveRoomModel;
    NSString *_shopName;
    NSString *_authorName;
    NSString *_reposterName;
    NSString *_mixName;
    AWEShareSchemaCircleModel *_circleModel;
    NSString *_playletName;
    AWEFavoriteFolderBaseInfoModel *_collectionInfo;
    AWEShareSchemaLongVideoModel *_longVideoModel;
    AWEConversationCellInfoModel *_conversationCellInfoModel;
    long long _hasAppointment;
}

@property (retain, nonatomic) AWEShareSchemaVideoModel *videoModel;
@property (copy, nonatomic) NSString *liveUserName;
@property (copy, nonatomic) NSString *liveRoomData;
@property (copy, nonatomic) NSString *userNickName;
@property (retain, nonatomic) AWEShareSchemaChallengeModel *challengeModel;
@property (copy, nonatomic) NSString *musicTitle;
@property (copy, nonatomic) NSString *POIName;
@property (copy, nonatomic) NSString *POIRankName;
@property (copy, nonatomic) NSString *goodsName;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) AWECouponModel *coupon;
@property (retain, nonatomic) AWEShareSchemaGoodsModel *goodsModel;
@property (retain, nonatomic) AWEShareSchemaPOIModel *poiModel;
@property (retain, nonatomic) AWEShareSchemaPOIGoodsModel *poiGoodsModel;
@property (retain, nonatomic) AWEShareSchemaPlayRemoteModel *playRemoteModel;
@property (retain, nonatomic) AWEShareSchemaLiveFormatModel *formatModel;
@property (retain, nonatomic) AWEShareSchemaSpecialConfigModel *configModel;
@property (retain, nonatomic) AWEShareSchemaLiveModel *liveRoomModel;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *reposterName;
@property (copy, nonatomic) NSString *mixName;
@property (retain, nonatomic) AWEShareSchemaCircleModel *circleModel;
@property (copy, nonatomic) NSString *playletName;
@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *collectionInfo;
@property (retain, nonatomic) AWEShareSchemaLongVideoModel *longVideoModel;
@property (nonatomic) BOOL isCloseFriend;
@property (nonatomic) BOOL isFriend;
@property (nonatomic) BOOL isPrivateAccount;
@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) AWEConversationCellInfoModel *conversationCellInfoModel;
@property (nonatomic) long long hasAppointment;

+ (id)avatarURLJSONTransformer;
+ (id)videoModelJSONTransformer;
+ (id)challengeModelJSONTransformer;
+ (id)goodsModelJSONTransformer;
+ (id)playRemoteModelJSONTransformer;
+ (id)formatModelJSONTransformer;
+ (id)circleModelJSONTransformer;
+ (id)collectionInfoJSONTransformer;
+ (id)configModelJSONTransformer;
+ (id)longVideoModelJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setIsFriend:(BOOL)arg0;
- (void)setFollowStatus:(long long)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (id)mixName;
- (id)liveRoomModel;
- (void)setMixName:(id)arg0;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (id)coupon;
- (void)setCoupon:(id)arg0;
- (id)shopName;
- (void)setShopName:(id)arg0;
- (id)goodsName;
- (void)setGoodsName:(id)arg0;
- (id)playletName;
- (void)setPlayletName:(id)arg0;
- (id)poiModel;
- (void)setPoiModel:(id)arg0;
- (id)POIName;
- (void)setPOIName:(id)arg0;
- (id)liveRoomData;
- (id)liveUserName;
- (void)setLiveUserName:(id)arg0;
- (void)setLiveRoomData:(id)arg0;
- (id)userNickName;
- (void)setUserNickName:(id)arg0;
- (id)challengeModel;
- (void)setChallengeModel:(id)arg0;
- (id)musicTitle;
- (void)setMusicTitle:(id)arg0;
- (id)POIRankName;
- (void)setPOIRankName:(id)arg0;
- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (id)poiGoodsModel;
- (void)setPoiGoodsModel:(id)arg0;
- (id)playRemoteModel;
- (void)setPlayRemoteModel:(id)arg0;
- (id)formatModel;
- (void)setFormatModel:(id)arg0;
- (void)setLiveRoomModel:(id)arg0;
- (id)reposterName;
- (void)setReposterName:(id)arg0;
- (id)circleModel;
- (void)setCircleModel:(id)arg0;
- (id)longVideoModel;
- (void)setLongVideoModel:(id)arg0;
- (BOOL)isCloseFriend;
- (void)setIsCloseFriend:(BOOL)arg0;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:(BOOL)arg0;
- (id)conversationCellInfoModel;
- (void)setConversationCellInfoModel:(id)arg0;
- (long long)hasAppointment;
- (void)setHasAppointment:(long long)arg0;
- (id)userID;
- (id)collectionInfo;
- (void).cxx_destruct;
- (void)setIsVisible:(BOOL)arg0;
- (void)setUserID:(id)arg0;
- (void)setCollectionInfo:(id)arg0;
- (BOOL)isVisible;
- (id)authorName;
- (void)setAuthorName:(id)arg0;
- (BOOL)isFriend;
- (id)propName;
- (void)setPropName:(id)arg0;

@end
