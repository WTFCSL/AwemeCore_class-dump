//
//     Generated by private class-dump
//

@class NSArray;

@interface AWETeenHotSpotListResponse : AWEBaseApiModel {
    NSArray *_hotSpotList;
}

@property (copy, nonatomic) NSArray *hotSpotList;

+ (id)hotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)hotSpotList;
- (void)setHotSpotList:(id)arg0;
- (void).cxx_destruct;

@end