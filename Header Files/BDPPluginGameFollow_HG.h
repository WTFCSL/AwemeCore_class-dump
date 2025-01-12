//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, BDPFollowUserModel, BDPUniqueID;

@interface BDPPluginGameFollow_HG : BDPBridgeInstancePlugin <BDPFollowUserViewFollowLogicProtocol_HG> {
    BOOL _isPrefetchingInfos;
    BOOL _isFollowed;
    BOOL _isPrefetchingInfosSucceed;
    BDPUniqueID *_uniqueID;
    BDPFollowUserModel *_userInfo;
    NSMutableDictionary *_btnDataDict;
    NSMutableDictionary *_btnDict;
    id /* block */ _prefetchingAllInfosCallBack;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFollowUserModel *userInfo;
@property (nonatomic) BOOL isPrefetchingInfos;
@property (nonatomic) BOOL isFollowed;
@property (nonatomic) BOOL isPrefetchingInfosSucceed;
@property (copy, nonatomic) id /* block */ prefetchingAllInfosCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseRequestFollowUser:(id)arg0 andJsonObj:(id)arg1 response:(id)arg2;
- (void)requestFollowUserWithCallback:(id /* block */)arg0;
- (BOOL)hasFollowed;
- (void)_onClickFollowEntry:(id)arg0;
- (void)setIsFollowed:(BOOL)arg0;
- (BOOL)isFollowed;
- (BOOL)isPrefetchingInfos;
- (void)_fetchAllFollowInfosByForce:(id /* block */)arg0;
- (void)setIsPrefetchingInfos:(BOOL)arg0;
- (void)setIsPrefetchingInfosSucceed:(BOOL)arg0;
- (id /* block */)prefetchingAllInfosCallBack;
- (BOOL)isPrefetchingInfosSucceed;
- (void)setPrefetchingAllInfosCallBack:(id /* block */)arg0;
- (void)createFollowButtonWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)operateFollowButtonWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)checkFollowStateWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;
- (void)dealloc;

@end
