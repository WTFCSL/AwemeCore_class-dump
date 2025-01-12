//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWENearbyShopCardBySyncMsgInfo : NSObject {
    BOOL _hasAlreadyRefreshCard;
    BOOL _isNearbyTab;
    BOOL _isFromPullMsg;
    BOOL _isFirstPresentationCard;
    long long _msgType;
    NSString *_logId;
    NSString *_poiId;
    double _serverTs;
    double _receivedTs;
    NSDictionary *_msgData;
    long long _bizType;
}

@property (nonatomic) BOOL isFirstPresentationCard;
@property (nonatomic) long long msgType;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) double serverTs;
@property (nonatomic) double receivedTs;
@property (copy, nonatomic) NSDictionary *msgData;
@property (nonatomic) BOOL hasAlreadyRefreshCard;
@property (nonatomic) BOOL isNearbyTab;
@property (nonatomic) BOOL isFromPullMsg;
@property (nonatomic) long long bizType;

- (long long)bizType;
- (void)setBizType:(long long)arg0;
- (id)logId;
- (void)setLogId:(id)arg0;
- (id)msgData;
- (void)setMsgData:(id)arg0;
- (BOOL)isFromPullMsg;
- (void)setIsFromPullMsg:(BOOL)arg0;
- (BOOL)hasAlreadyRefreshCard;
- (void)setHasAlreadyRefreshCard:(BOOL)arg0;
- (id)initWithShopMsg:(id)arg0;
- (double)serverTs;
- (void)setServerTs:(double)arg0;
- (double)receivedTs;
- (void)setReceivedTs:(double)arg0;
- (BOOL)isNearbyTab;
- (void)setIsNearbyTab:(BOOL)arg0;
- (BOOL)isFirstPresentationCard;
- (void)setIsFirstPresentationCard:(BOOL)arg0;
- (void).cxx_destruct;
- (id)poiId;
- (void)setPoiId:(id)arg0;
- (long long)msgType;
- (void)setMsgType:(long long)arg0;

@end
