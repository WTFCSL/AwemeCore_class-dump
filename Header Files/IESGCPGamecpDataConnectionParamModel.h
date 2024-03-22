//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface IESGCPGamecpDataConnectionParamModel : IESLiveBridgeModel {
    NSString *_unifiedGameId;
    NSString *_promoterId;
    NSString *_scene;
    NSString *_actionString;
    NSString *_roomId;
    NSNumber *_isAds;
    NSString *_requestId;
    NSNumber *_isPromotionGame;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *unifiedGameId;
@property (copy, nonatomic) NSString *promoterId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *actionString;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSNumber *isAds;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSNumber *isPromotionGame;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (void)setExtra:(id)arg0;
- (id)isAds;
- (void)setIsAds:(id)arg0;
- (void)setIsPromotionGame:(id)arg0;
- (id)unifiedGameId;
- (void)setUnifiedGameId:(id)arg0;
- (id)isPromotionGame;
- (id)promoterId;
- (void)setPromoterId:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)requestId;
- (id)scene;
- (void)setRequestId:(id)arg0;
- (id)actionString;
- (void)setActionString:(id)arg0;

@end
