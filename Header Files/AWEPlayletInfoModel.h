//
//     Generated by private class-dump
//

@class AWEURLModel, AWEDiscoverDPlayletRankCardModel, AWEPlayletStatisticsModel, NSNumber, NSDictionary, AWEPaymentEntertainmentProductModel, AWEVideoChargeStrategyStruct, AWEPlayletChargeInfoModel, NSString, NSArray, AWEUserModel, AWEShareModel, AWEPlayletStatusModel, AWEPlayletSchemaModel;

@interface AWEPlayletInfoModel : AWEBaseApiModel {
    BOOL _isExclusive;
    NSString *_playletID;
    NSString *_playletName;
    AWEURLModel *_coverUrl;
    AWEURLModel *_iconUrl;
    AWEPlayletStatisticsModel *_staticsModel;
    AWEPlayletStatusModel *_statusModel;
    NSString *_desc;
    AWEUserModel *_author;
    NSString *_extra;
    AWEShareModel *_shareInfo;
    unsigned long long _playletType;
    NSNumber *_createTime;
    NSNumber *_updateTime;
    NSNumber *_ids;
    NSNumber *_watchedEpisode;
    NSString *_watchedItem;
    AWEDiscoverDPlayletRankCardModel *_rankModel;
    NSArray *_contentTypesArray;
    NSNumber *_playletPrice;
    NSArray *_recommendColorArray;
    AWEVideoChargeStrategyStruct *_chargeStrategyModel;
    AWEPlayletChargeInfoModel *_paymentChargeInfoModel;
    AWEPaymentEntertainmentProductModel *_paymentEntertainmentProductModel;
}

@property (retain, nonatomic) NSArray *shareExtVideoCoverURLs;
@property (retain, nonatomic) NSArray *shareExtVideoCoverItems;
@property (nonatomic) BOOL hasTracked;
@property (readonly, nonatomic) long long statusErrorCode;
@property (retain, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (copy, nonatomic) NSDictionary *videoplay_tracker;
@property (nonatomic) long long reasonCategory;
@property (nonatomic) long long reasonDetail;
@property (copy, nonatomic) NSString *playletID;
@property (copy, nonatomic) NSString *playletName;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) AWEPlayletStatisticsModel *staticsModel;
@property (retain, nonatomic) AWEPlayletStatusModel *statusModel;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWEUserModel *author;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (nonatomic) unsigned long long playletType;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSNumber *updateTime;
@property (retain, nonatomic) NSNumber *ids;
@property (retain, nonatomic) NSNumber *watchedEpisode;
@property (retain, nonatomic) NSString *watchedItem;
@property (retain, nonatomic) AWEDiscoverDPlayletRankCardModel *rankModel;
@property (retain, nonatomic) NSArray *contentTypesArray;
@property (retain, nonatomic) NSNumber *playletPrice;
@property (nonatomic) BOOL isExclusive;
@property (copy, nonatomic) NSArray *recommendColorArray;
@property (retain, nonatomic) AWEVideoChargeStrategyStruct *chargeStrategyModel;
@property (retain, nonatomic) AWEPlayletChargeInfoModel *paymentChargeInfoModel;
@property (retain, nonatomic) AWEPaymentEntertainmentProductModel *paymentEntertainmentProductModel;

+ (id /* block */)isEqualBlock;
+ (id)coverUrlJSONTransformer;
+ (id)paymentEntertainmentProductModelJSONTransformer;
+ (id)paymentChargeInfoModelJSONTransformer;
+ (id)iconUrlJSONTransformer;
+ (id)statusModelJSONTransformer;
+ (id)staticsModelJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)shareInfoModelJSONTransformer;
+ (id)chargeStrategyModelJSONTransformer;
+ (id)rankModelJSONTransformer;
+ (id)contentTypesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (BOOL)hasTracked;
- (void)setHasTracked:(BOOL)arg0;
- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (id)schemaModel;
- (id)playletID;
- (id)staticsModel;
- (id)coverUrl;
- (BOOL)isTheLastEpisode;
- (void)setStaticsModel:(id)arg0;
- (id)watchedItem;
- (void)setWatchedItem:(id)arg0;
- (id)watchedEpisode;
- (void)setWatchedEpisode:(id)arg0;
- (id)chargeStrategyModel;
- (void)setChargeStrategyModel:(id)arg0;
- (id)paymentChargeInfoModel;
- (void)setPaymentChargeInfoModel:(id)arg0;
- (id)paymentEntertainmentProductModel;
- (void)setPaymentEntertainmentProductModel:(id)arg0;
- (id)shareExtVideoCoverURLs;
- (void)setShareExtVideoCoverURLs:(id)arg0;
- (id)rankModel;
- (id)playletName;
- (void)setRankModel:(id)arg0;
- (id)contentTypesArray;
- (id)getPlayletContentTypeStr;
- (id)playletPrice;
- (void)setPlayletID:(id)arg0;
- (void)setPlayletName:(id)arg0;
- (unsigned long long)playletType;
- (void)setPlayletType:(unsigned long long)arg0;
- (void)setContentTypesArray:(id)arg0;
- (void)setPlayletPrice:(id)arg0;
- (id)recommendColorArray;
- (void)setRecommendColorArray:(id)arg0;
- (id)shareExtVideoCoverItems;
- (void)setShareExtVideoCoverItems:(id)arg0;
- (void)setSchemaModel:(id)arg0;
- (long long)statusErrorCode;
- (id)videoplay_tracker;
- (long long)reasonCategory;
- (long long)reasonDetail;
- (void)setVideoplay_tracker:(id)arg0;
- (BOOL)updatedInPastDays:(long long)arg0;
- (BOOL)hasCompleteEnd;
- (void)setReasonCategory:(long long)arg0;
- (void)setReasonDetail:(long long)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setCreateTime:(id)arg0;
- (id)updateTime;
- (id)extra;
- (id)shareInfo;
- (void)setShareInfo:(id)arg0;
- (id)author;
- (void)setAuthor:(id)arg0;
- (id)createTime;
- (BOOL)isExclusive;
- (void)setDesc:(id)arg0;
- (id)ids;
- (void)setUpdateTime:(id)arg0;
- (void)setIds:(id)arg0;
- (void)setIsExclusive:(BOOL)arg0;
- (id)statusModel;
- (void)setStatusModel:(id)arg0;

@end
