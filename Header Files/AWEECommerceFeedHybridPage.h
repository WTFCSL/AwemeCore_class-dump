//
//     Generated by private class-dump
//

@interface AWEECommerceFeedHybridPage : AWEBaseApiModel {
    BOOL _hasMore;
    long long _cursor;
}

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)cursor;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(long long)arg0;

@end
