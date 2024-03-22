//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEIMSecondaryCommentResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    long long _cursor;
    NSArray *_comments;
}

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *comments;
@property (nonatomic) BOOL hasMore;

+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(long long)arg0;
- (id)comments;
- (void)setComments:(id)arg0;

@end
