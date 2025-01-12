//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWELiveShelfModel : NSObject {
    NSString *_aggCardId;
    NSString *_roomId;
    NSString *_sourceType;
    NSString *_anchorId;
    NSString *_pageSource;
    NSString *_couponIds;
    NSString *_anchorProductId;
    NSString *_fromPosition;
    NSDictionary *_extraRequestPara;
    NSString *_envAddressInfo;
    double _openShelfTimeStamp;
    long long _pageType;
    long long _openType;
    id /* block */ _envRequestParams;
}

@property (copy, nonatomic) NSString *aggCardId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *pageSource;
@property (copy, nonatomic) NSString *couponIds;
@property (copy, nonatomic) NSString *anchorProductId;
@property (copy, nonatomic) NSString *fromPosition;
@property (copy, nonatomic) NSDictionary *extraRequestPara;
@property (copy, nonatomic) NSString *envAddressInfo;
@property (nonatomic) double openShelfTimeStamp;
@property (nonatomic) long long pageType;
@property (nonatomic) long long openType;
@property (copy, nonatomic) id /* block */ envRequestParams;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (long long)openType;
- (void)setOpenType:(long long)arg0;
- (id)pageSource;
- (void)setPageSource:(id)arg0;
- (id)aggCardId;
- (void)setEnvAddressInfo:(id)arg0;
- (void)setEnvRequestParams:(id /* block */)arg0;
- (id)envAddressInfo;
- (id /* block */)envRequestParams;
- (void)setOpenShelfTimeStamp:(double)arg0;
- (void)setAggCardId:(id)arg0;
- (void)setFromPosition:(id)arg0;
- (id)anchorProductId;
- (void)setAnchorProductId:(id)arg0;
- (void)setCouponIds:(id)arg0;
- (void)setExtraRequestPara:(id)arg0;
- (id)couponIds;
- (id)fromPosition;
- (id)extraRequestParamsCollect;
- (double)openShelfTimeStamp;
- (id)extraRequestPara;
- (long long)pageType;
- (void)setSourceType:(id)arg0;
- (id)sourceType;
- (void).cxx_destruct;
- (void)setPageType:(long long)arg0;

@end
