//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDXBridgeLocalServiceOptimizationStrategyPreCacheList : BDXBridgeModel {
    NSString *_page;
    NSString *_name;
    NSArray *_strategy;
}

@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *strategy;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)strategy;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;
- (void)setName:(id)arg0;
- (id)name;
- (void)setStrategy:(id)arg0;

@end
