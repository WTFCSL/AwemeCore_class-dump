//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEWatchVideoLaterResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_items;
    NSArray *_invalidItemIDs;
    NSNumber *_cursor;
    NSNumber *_listNum;
}

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *invalidItemIDs;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *listNum;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)listNum;
- (void)setListNum:(id)arg0;
- (id)invalidItemIDs;
- (void)setInvalidItemIDs:(id)arg0;
- (id)cursor;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
