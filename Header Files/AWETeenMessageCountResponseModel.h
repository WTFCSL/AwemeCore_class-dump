//
//     Generated by private class-dump
//

@class NSArray;

@interface AWETeenMessageCountResponseModel : AWEBaseApiModel {
    NSArray *_groups;
}

@property (copy, nonatomic) NSArray *groups;

+ (id)groupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)groups;
- (void).cxx_destruct;
- (void)setGroups:(id)arg0;

@end