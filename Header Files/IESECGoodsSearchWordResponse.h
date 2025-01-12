//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECGoodsSearchWordResponse : IESECBaseApiModel <MTLJSONSerializing> {
    NSArray *_searchData;
    NSString *_logID;
}

@property (copy, nonatomic) NSArray *searchData;
@property (copy, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSearchData:(id)arg0;
- (id)searchData;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:(id)arg0;

@end
