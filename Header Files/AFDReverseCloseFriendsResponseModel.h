//
//     Generated by private class-dump
//

@class NSArray;

@interface AFDReverseCloseFriendsResponseModel : AWEBaseApiModel {
    NSArray *_reverseUser;
    long long _count;
    NSArray *_reverseUidList;
}

@property (retain, nonatomic) NSArray *reverseUser;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSArray *reverseUidList;

+ (id)reverseUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)reverseUidList;
- (id)reverseUser;
- (void)setReverseUser:(id)arg0;
- (void)setReverseUidList:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)count;

@end
