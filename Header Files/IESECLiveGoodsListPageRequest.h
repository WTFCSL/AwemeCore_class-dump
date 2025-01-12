//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;

@interface IESECLiveGoodsListPageRequest : IESECLiveAPIBaseRequest {
    BOOL _disableEntranceInfoOpt;
    BOOL _useRecommendStore;
    BOOL _isLinkMic;
    NSString *_entranceInfo;
    long long _offset;
    long long _limit;
    NSString *_uniqueIndex;
    NSDictionary *_extraParams;
    NSNumber *_livePanelHeightPercent;
    NSString *_containerRoomID;
    NSString *_storeID;
    NSString *_addressInfo;
    NSNumber *_requestDataType;
}

@property (nonatomic) BOOL disableEntranceInfoOpt;
@property (copy, nonatomic) NSString *entranceInfo;
@property (nonatomic) long long offset;
@property (nonatomic) long long limit;
@property (retain, nonatomic) NSString *uniqueIndex;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;
@property (nonatomic) BOOL useRecommendStore;
@property (nonatomic) BOOL isLinkMic;
@property (retain, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (retain, nonatomic) NSNumber *requestDataType;

- (id)extraParams;
- (void)setEntranceInfo:(id)arg0;
- (void)setExtraParams:(id)arg0;
- (id)buildParams;
- (id)entranceInfo;
- (void)setAddressInfo:(id)arg0;
- (id)livePanelHeightPercent;
- (void)setLivePanelHeightPercent:(id)arg0;
- (id)containerRoomID;
- (void)setContainerRoomID:(id)arg0;
- (void)setIsLinkMic:(BOOL)arg0;
- (id)uniqueIndex;
- (BOOL)isLinkMic;
- (BOOL)useRecommendStore;
- (id)requestDataType;
- (BOOL)disableEntranceInfoOpt;
- (void)setDisableEntranceInfoOpt:(BOOL)arg0;
- (void)setUniqueIndex:(id)arg0;
- (void)setUseRecommendStore:(BOOL)arg0;
- (void)setRequestDataType:(id)arg0;
- (id)storeID;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (void)setStoreID:(id)arg0;
- (long long)offset;
- (long long)limit;
- (void)setLimit:(long long)arg0;
- (id)addressInfo;

@end
