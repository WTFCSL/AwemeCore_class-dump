//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWETeenSearchGeneralResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_cardList;
    NSString *_searchID;
    unsigned long long _cursor;
}

@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cardList;
- (void)setCardList:(id)arg0;
- (unsigned long long)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(unsigned long long)arg0;
- (id)searchID;
- (void)setSearchID:(id)arg0;

@end
