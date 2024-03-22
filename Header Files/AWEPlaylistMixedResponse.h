//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEPlaylistMixedResponse : AWEBaseApiModel {
    BOOL _myHasMore;
    BOOL _mixedHasMore;
    BOOL _hasMore;
    NSArray *_myLists;
    NSArray *_mixedList;
    long long _myCursor;
    NSNumber *_myTotalCount;
    NSArray *_collectionLists;
    long long _cursor;
    NSNumber *_totalCount;
}

@property (retain, nonatomic) NSArray *myLists;
@property (nonatomic) BOOL myHasMore;
@property (retain, nonatomic) NSArray *mixedList;
@property (nonatomic) BOOL mixedHasMore;
@property (nonatomic) long long myCursor;
@property (retain, nonatomic) NSNumber *myTotalCount;
@property (retain, nonatomic) NSArray *collectionLists;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSNumber *totalCount;

+ (id)myListsJSONTransformer;
+ (id)collectionListsJSONTransformer;
+ (id)mixedListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mixedList;
- (id)myLists;
- (BOOL)myHasMore;
- (long long)myCursor;
- (void)setMyHasMore:(BOOL)arg0;
- (BOOL)mixedHasMore;
- (void)setMixedHasMore:(BOOL)arg0;
- (void)setMyCursor:(long long)arg0;
- (void)setMyLists:(id)arg0;
- (void)setMixedList:(id)arg0;
- (id)myTotalCount;
- (void)setMyTotalCount:(id)arg0;
- (id)collectionLists;
- (void)setCollectionLists:(id)arg0;
- (long long)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)totalCount;
- (void)setCursor:(long long)arg0;
- (void)setTotalCount:(id)arg0;

@end