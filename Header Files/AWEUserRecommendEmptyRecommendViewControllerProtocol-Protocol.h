//
//     Generated by private class-dump
//

@class AWEUserModel;

@protocol AWEUserRecommendEmptyRecommendViewControllerProtocol <NSObject>

@property (retain, nonatomic) AWEUserModel *user;

- (void)playRecommendViewAnimation:(BOOL)arg0;
- (void)updateWithEmptyType:(long long)arg0;
- (id)initWithUserID:(id)arg0 type:(long long)arg1 extraDict:(id)arg2;
- (BOOL)hasRecommendData;
- (void)setUser:(id)arg0;
- (id)user;
- (double)contentHeight;
- (void)setType:(long long)arg0;

@end