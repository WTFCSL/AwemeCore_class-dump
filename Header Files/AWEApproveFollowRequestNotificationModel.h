//
//     Generated by private class-dump
//

@class AWEUserModel;

@interface AWEApproveFollowRequestNotificationModel : AWEBaseApiModel {
    AWEUserModel *_userInfo;
}

@property (retain, nonatomic) AWEUserModel *userInfo;

+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;

@end
