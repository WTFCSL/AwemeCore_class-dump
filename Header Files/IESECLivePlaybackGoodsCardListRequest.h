//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECLivePlaybackGoodsCardListRequest : IESECLiveAPIBaseRequest {
    NSString *_entranceInfoJSONString;
    NSNumber *_page;
    NSNumber *_pageSize;
    NSString *_needPageTimestamp;
}

@property (copy, nonatomic) NSString *entranceInfoJSONString;
@property (copy, nonatomic) NSNumber *page;
@property (copy, nonatomic) NSNumber *pageSize;
@property (copy, nonatomic) NSString *needPageTimestamp;

- (id)buildParams;
- (void)setEntranceInfoJSONString:(id)arg0;
- (id)needPageTimestamp;
- (id)entranceInfoJSONString;
- (void)setNeedPageTimestamp:(id)arg0;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;
- (id)pageSize;
- (void)setPageSize:(id)arg0;

@end