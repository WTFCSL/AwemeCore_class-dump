//
//     Generated by private class-dump
//

@class NSArray, NSNumber, NSString;

@interface AWEFavoriteFileVideoResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_awemeList;
    NSNumber *_cursor;
    NSNumber *_favoriteStatusCode;
    NSString *_favoriteStatusMsg;
    NSString *_logid;
    NSArray *_disabledItemIds;
}

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *favoriteStatusCode;
@property (retain, nonatomic) NSString *favoriteStatusMsg;
@property (retain, nonatomic) NSString *logid;
@property (copy, nonatomic) NSArray *disabledItemIds;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logid;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (void)setLogid:(id)arg0;
- (id)favoriteStatusCode;
- (id)disabledItemIds;
- (void)setDisabledItemIds:(id)arg0;
- (id)favoriteStatusMsg;
- (void)setFavoriteStatusMsg:(id)arg0;
- (void)setFavoriteStatusCode:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
