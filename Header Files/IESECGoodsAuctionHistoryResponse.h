//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface IESECGoodsAuctionHistoryResponse : IESECBaseApiModel {
    NSArray *_records;
    NSNumber *_offset;
}

@property (copy, nonatomic) NSArray *records;
@property (retain, nonatomic) NSNumber *offset;

+ (id)recordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setRecords:(id)arg0;
- (id)records;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)offset;

@end
