//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEBarrageResponseModel : AWEBaseApiModel {
    BOOL _hasCommentNow;
    NSArray *_dataList;
    long long _closeFriendUserCount;
    long long _landingTabType;
}

@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) long long closeFriendUserCount;
@property (nonatomic) BOOL hasCommentNow;
@property (nonatomic) long long landingTabType;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setDataList:(id)arg0;
- (long long)landingTabType;
- (void)setLandingTabType:(long long)arg0;
- (long long)closeFriendUserCount;
- (void)setCloseFriendUserCount:(long long)arg0;
- (BOOL)hasCommentNow;
- (void)setHasCommentNow:(BOOL)arg0;
- (void).cxx_destruct;
- (id)dataList;

@end
