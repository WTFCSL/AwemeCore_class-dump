//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@protocol IESECRelationGoodsCardPlayerProtocol <NSObject>

@property (readonly, nonatomic) BOOL showGoodsPromotionVideo;
@property (readonly, nonatomic) BOOL showGoodsMainVideo;
@property (readonly, copy, nonatomic) NSString *goodsVideoID;
@property (readonly, copy, nonatomic) NSString *goodsMainVideoURL;
@property (readonly, copy, nonatomic) NSNumber *goodsMainVideoDuration;
@property (readonly, nonatomic) BOOL showGoodsLive;
@property (readonly, copy, nonatomic) NSString *goodsLiveStreamData;

- (id)goodsVideoID;
- (id)goodsMainVideoURL;
- (id)goodsLiveStreamData;
- (BOOL)showGoodsPromotionVideo;
- (BOOL)showGoodsMainVideo;
- (id)goodsMainVideoDuration;
- (BOOL)showGoodsLive;

@end
