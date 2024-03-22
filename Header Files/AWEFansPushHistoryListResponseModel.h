//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEFansPushHistoryListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_userList;
    NSNumber *_total;
    NSNumber *_cursor;
}

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUserList:(id)arg0;
- (id)cursor;
- (id)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (id)userList;
- (void)setTotal:(id)arg0;

@end
