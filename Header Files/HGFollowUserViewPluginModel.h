//
//     Generated by private class-dump
//

@class HGFollowUserModel;

@interface HGFollowUserViewPluginModel : HGBasePluginModel {
    BOOL _hasFollowed;
    HGFollowUserModel *_userInfo;
}

@property (retain, nonatomic) HGFollowUserModel *userInfo;
@property (nonatomic) BOOL hasFollowed;

- (BOOL)hasFollowed;
- (void)setHasFollowed:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;

@end