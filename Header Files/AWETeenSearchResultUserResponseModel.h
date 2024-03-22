//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWETeenSearchResultUserResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_userList;
    unsigned long long _count;
    NSNumber *_cursor;
}

@property (copy, nonatomic) NSArray *userList;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUserList:(id)arg0;
- (void)setCount:(unsigned long long)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (id)userList;

@end
