//
//     Generated by private class-dump
//

@class AWEDouplusToastModel, NSString, NSArray;

@interface AWECommerceSettingsModel : AWEBaseApiModel {
    BOOL _avatarDecorationEnabled;
    BOOL _isAlertIAPUnwork;
    BOOL _douplusNativeSceneSwitch;
    AWEDouplusToastModel *_douplusToastModel;
    NSString *_IAPRefundString;
    NSString *_avatarDecorationURL;
    NSArray *_douplusIAPProductIDs;
    long long _douplusNativeScenePeriod;
}

@property (retain, nonatomic) AWEDouplusToastModel *douplusToastModel;
@property (copy, nonatomic) NSString *IAPRefundString;
@property (copy, nonatomic) NSString *avatarDecorationURL;
@property (nonatomic) BOOL avatarDecorationEnabled;
@property (nonatomic) BOOL isAlertIAPUnwork;
@property (copy, nonatomic) NSArray *douplusIAPProductIDs;
@property (nonatomic) BOOL douplusNativeSceneSwitch;
@property (nonatomic) long long douplusNativeScenePeriod;

+ (id)douplusToastModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isAlertIAPUnwork;
- (BOOL)douplusNativeSceneSwitch;
- (long long)douplusNativeScenePeriod;
- (id)douplusIAPProductIDs;
- (id)IAPRefundString;
- (id)douplusToastModel;
- (void)setDouplusToastModel:(id)arg0;
- (void)setIAPRefundString:(id)arg0;
- (id)avatarDecorationURL;
- (void)setAvatarDecorationURL:(id)arg0;
- (BOOL)avatarDecorationEnabled;
- (void)setAvatarDecorationEnabled:(BOOL)arg0;
- (void)setIsAlertIAPUnwork:(BOOL)arg0;
- (void)setDouplusIAPProductIDs:(id)arg0;
- (void)setDouplusNativeSceneSwitch:(BOOL)arg0;
- (void)setDouplusNativeScenePeriod:(long long)arg0;
- (void).cxx_destruct;

@end