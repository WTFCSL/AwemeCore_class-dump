//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEGeoLocationResponseModel : ACCBaseApiModel {
    NSArray *_results;
}

@property (copy, nonatomic) NSArray *results;

+ (id)resultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setResults:(id)arg0;
- (id)results;

@end
