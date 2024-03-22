//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableSet;

@interface AWEHGPluginFollowCustomImpl : NSObject <HGAwemeFollowPluginDelegate, AWEUserDetailViewControllerMessage, HGAppInterfaceOrientationChangeMessage> {
    id /* block */ _delayAction;
    unsigned long long _originalOrientation;
    NSMutableDictionary *_completeBlocks;
    NSMutableSet *_followStateChecking;
    NSMutableDictionary *_followStatusDic;
}

@property (copy, nonatomic) id /* block */ delayAction;
@property (nonatomic) unsigned long long originalOrientation;
@property (retain, nonatomic) NSMutableDictionary *completeBlocks;
@property (retain, nonatomic) NSMutableSet *followStateChecking;
@property (retain, nonatomic) NSMutableDictionary *followStatusDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)interfaceOrientationChange:(id)arg0 targetOrientation:(long long)arg1 uniqueID:(id)arg2;
- (void)hg_openAwemeUserProfileV2ForUid:(id)arg0 securityUid:(id)arg1 uniqueID:(id)arg2 complete:(id /* block */)arg3;
- (void)hg_checkFollowAwemeStateForUid:(id)arg0 securityUid:(id)arg1 uniqueID:(id)arg2 complete:(id /* block */)arg3;
- (void)userDetailViewControllerLastUserStatus:(id)arg0;
- (void)recordSuid:(id)arg0 withUid:(id)arg1 uniqueID:(id)arg2;
- (long long)hgFollwStateForAwemeFollowState:(long long)arg0;
- (void)getAwemeUserInfo:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (id)followStateChecking;
- (id)followStatusDic;
- (void)showFollowCheckViewForUniqueID:(id)arg0 userModel:(id)arg1 complete:(id /* block */)arg2;
- (void)addComplete:(id /* block */)arg0 forUid:(id)arg1;
- (void)setDelayAction:(id /* block */)arg0;
- (void)followAwemeUser:(id)arg0 uniqueID:(id)arg1 complete:(id /* block */)arg2;
- (void)showFollowSuccessViewForUniqueID:(id)arg0;
- (void)exucteCompleteForUid:(id)arg0 withFollowState:(long long)arg1;
- (id /* block */)delayAction;
- (id)completeBlocks;
- (void)showFollowInfoViewForUniqueID:(id)arg0 withInfo:(id)arg1;
- (void)cancelButtonClick:(id)arg0;
- (void)avatarButtonClick:(id)arg0;
- (void)followButtonClick:(id)arg0;
- (void)hg_openAwemeUserProfileForUid:(id)arg0 securityUid:(id)arg1 enterFrom:(id)arg2 complete:(id /* block */)arg3;
- (void)hg_getAwemeUserInfo:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)hg_followAwemeUserUniqueID:(id)arg0 UserID:(id)arg1 complete:(id /* block */)arg2;
- (void)hg_addComplete:(id /* block */)arg0 forUid:(id)arg1;
- (void)setCompleteBlocks:(id)arg0;
- (void)setFollowStateChecking:(id)arg0;
- (void)setFollowStatusDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)originalOrientation;
- (void)setOriginalOrientation:(unsigned long long)arg0;

@end