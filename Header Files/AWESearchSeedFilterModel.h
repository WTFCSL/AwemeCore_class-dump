//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWESearchSeedFilterModel : AWEBaseApiModel {
    NSArray *_filterSections;
    NSNumber *_rank;
}

@property (readonly, nonatomic) NSArray *filterSections;
@property (retain, nonatomic) NSNumber *rank;

+ (id)filterSectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)filterSections;
- (void)setRank:(id)arg0;
- (id)rank;
- (void).cxx_destruct;

@end
