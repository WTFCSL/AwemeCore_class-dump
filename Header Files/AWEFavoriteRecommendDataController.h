//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEFavoriteRecommendDataController : NSObject {
    BOOL _isFromFansTool;
    BOOL _isRequestOnAir;
    NSArray *_dataSource;
}

@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isFromFansTool;

+ (BOOL)isHitABTest;
+ (BOOL)shouldShowRecommendCreateFavoriteBaseJudgment;
+ (BOOL)shouldRequestRecommendCreateFavoriteList;

- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)setIsFromFansTool:(BOOL)arg0;
- (void)updateCoverWithAwemeModel:(id)arg0 callback:(id /* block */)arg1;
- (BOOL)isFromFansTool;
- (void)refreshRecommendFavoriteListCallback:(id /* block */)arg0;
- (void)closeRecommendCreateFavoriteList;
- (void)coverImageForFirstRecommendItemCallback:(id /* block */)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;

@end
