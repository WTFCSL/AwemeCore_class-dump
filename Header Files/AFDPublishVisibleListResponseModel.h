//
//     Generated by private class-dump
//

@class NSArray;

@interface AFDPublishVisibleListResponseModel : AWEBaseApiModel {
    long long _totalCount;
    NSArray *_visibleUserList;
}

@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSArray *visibleUserList;

+ (id)visibleUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)visibleUserList;
- (void)setVisibleUserList:(id)arg0;
- (void).cxx_destruct;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg0;

@end
