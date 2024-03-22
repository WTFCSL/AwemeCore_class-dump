//
//     Generated by private class-dump
//

@class NSArray, NSNumber, NSString;

@interface AWEHotSearchCommentFeedResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_commentCardList;
    NSNumber *_cursor;
    NSString *_bottomPlaceHolder;
}

@property (retain, nonatomic) NSArray *commentCardList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *bottomPlaceHolder;

+ (id)commentCardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentCardList;
- (id)bottomPlaceHolder;
- (void)setCommentCardList:(id)arg0;
- (void)setBottomPlaceHolder:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
