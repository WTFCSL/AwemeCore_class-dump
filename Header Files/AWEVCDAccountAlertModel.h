//
//     Generated by private class-dump
//

@class AWEVCDAlertModel, AWEVCDUserModel;

@interface AWEVCDAccountAlertModel : AWEBaseApiModel {
    long long _accountAlertType;
    AWEVCDAlertModel *_authorizeAlert;
    AWEVCDAlertModel *_closeInterActionAlert;
    AWEVCDAlertModel *_importFansAlert;
    AWEVCDAlertModel *_finishInterActionAlert;
    AWEVCDUserModel *_vcdUserInfo;
    AWEVCDAlertModel *_relationAlert;
}

@property (nonatomic) long long accountAlertType;
@property (retain, nonatomic) AWEVCDAlertModel *authorizeAlert;
@property (retain, nonatomic) AWEVCDAlertModel *closeInterActionAlert;
@property (retain, nonatomic) AWEVCDAlertModel *importFansAlert;
@property (retain, nonatomic) AWEVCDAlertModel *finishInterActionAlert;
@property (retain, nonatomic) AWEVCDUserModel *vcdUserInfo;
@property (retain, nonatomic) AWEVCDAlertModel *relationAlert;

+ (id)accountAlertTypeJSONTransformer;
+ (id)authorizeAlertJSONTransformer;
+ (id)relationAlertJSONTransformer;
+ (id)closeInterActionAlertJSONTransformer;
+ (id)importFansAlertJSONTransformer;
+ (id)finishInterActionAlertJSONTransformer;
+ (id)vcdUserInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)vcdUserInfo;
- (long long)accountAlertType;
- (id)authorizeAlert;
- (id)relationAlert;
- (id)closeInterActionAlert;
- (id)importFansAlert;
- (id)finishInterActionAlert;
- (void)setAccountAlertType:(long long)arg0;
- (void)setAuthorizeAlert:(id)arg0;
- (void)setCloseInterActionAlert:(id)arg0;
- (void)setImportFansAlert:(id)arg0;
- (void)setFinishInterActionAlert:(id)arg0;
- (void)setVcdUserInfo:(id)arg0;
- (void)setRelationAlert:(id)arg0;
- (void).cxx_destruct;

@end