//
//     Generated by private class-dump
//

@class NSString, CECPublishPrivacyPermissionModel;

@interface CECPublishPrivacyRequestModel : AWEBaseApiModel {
    BOOL _postNewMoment;
    long long _requestStatusCode;
    NSString *_requestStatusMsg;
    CECPublishPrivacyPermissionModel *_publicModel;
    CECPublishPrivacyPermissionModel *_friendsModel;
    CECPublishPrivacyPermissionModel *_closeFriendsModel;
    CECPublishPrivacyPermissionModel *_partFriendModel;
}

@property (nonatomic) long long requestStatusCode;
@property (copy, nonatomic) NSString *requestStatusMsg;
@property (nonatomic) BOOL postNewMoment;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *publicModel;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *friendsModel;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *closeFriendsModel;
@property (retain, nonatomic) CECPublishPrivacyPermissionModel *partFriendModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)requestStatusMsg;
- (id)friendsModel;
- (id)closeFriendsModel;
- (id)partFriendModel;
- (BOOL)postNewMoment;
- (id)publicModel;
- (void)setPublicModel:(id)arg0;
- (void)setRequestStatusMsg:(id)arg0;
- (void)setPostNewMoment:(BOOL)arg0;
- (void)setFriendsModel:(id)arg0;
- (void)setCloseFriendsModel:(id)arg0;
- (void)setPartFriendModel:(id)arg0;
- (void).cxx_destruct;
- (long long)requestStatusCode;
- (void)setRequestStatusCode:(long long)arg0;

@end
