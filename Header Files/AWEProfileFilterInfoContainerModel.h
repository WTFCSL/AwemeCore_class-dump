//
//     Generated by private class-dump
//

@class AWEProfileFilterConfigModel;

@interface AWEProfileFilterInfoContainerModel : AWEBaseApiModel {
    AWEProfileFilterConfigModel *_filterConfig;
}

@property (retain, nonatomic) AWEProfileFilterConfigModel *filterConfig;

+ (id)postFilterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setFilterConfig:(id)arg0;
- (id)filterConfig;
- (void).cxx_destruct;

@end
