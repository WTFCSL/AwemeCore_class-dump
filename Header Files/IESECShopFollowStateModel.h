//
//     Generated by private class-dump
//

@class NSString, IESECShopFollowConfigModel;

@interface IESECShopFollowStateModel : IESECBaseApiModel {
    BOOL _shouldShowShopEntry;
    NSString *_followBtnDisplay;
    long long _shopBtnLocation;
    long long _followStatus;
    IESECShopFollowConfigModel *_followConfig;
}

@property (copy, nonatomic) NSString *followBtnDisplay;
@property (nonatomic) long long shopBtnLocation;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL shouldShowShopEntry;
@property (retain, nonatomic) IESECShopFollowConfigModel *followConfig;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (BOOL)shouldShowShopEntry;
- (id)followConfig;
- (void)setFollowConfig:(id)arg0;
- (id)followBtnDisplay;
- (void)setFollowBtnDisplay:(id)arg0;
- (long long)shopBtnLocation;
- (void)setShopBtnLocation:(long long)arg0;
- (void)setShouldShowShopEntry:(BOOL)arg0;
- (void).cxx_destruct;

@end
