//
//     Generated by private class-dump
//

@class NSArray, BDPQueue, NSString, BDPUniqueID;

@interface BDPPluginUser : BDPBridgeInstancePlugin <BDPPrivacyRegulationViewDelegate> {
    BOOL _isLoginFinish;
    BOOL _isHostLoginFinish;
    BOOL _phoneNumberListFirstShow;
    BDPUniqueID *_uniqueID;
    BDPQueue *_queue;
    long long _chosenPhoneNumID;
    NSArray *_bindPhoneNumber;
    NSArray *_phoneNumbers;
}

@property (nonatomic) BOOL isLoginFinish;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPQueue *queue;
@property (nonatomic) long long chosenPhoneNumID;
@property (copy, nonatomic) NSArray *bindPhoneNumber;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (nonatomic) BOOL phoneNumberListFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tma_loginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (BOOL)isLoginFinish;
- (void)setIsLoginFinish:(BOOL)arg0;
- (void)loginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getUserInfoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)checkSessionWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getUseDurationWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)dealUserRelationWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_webviewGetPhoneNumberWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_serviceGetPhoneNumberWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)hostLoginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getHostInfoSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)bindPhoneNumber;
- (void)clickPrivacyViewWithType:(unsigned long long)arg0;
- (BOOL)isAweType;
- (void)fetchUserInfoWithCredentials:(BOOL)arg0 identityAuth:(BOOL)arg1 needIDs:(BOOL)arg2 infoType:(id)arg3 dataKey:(id)arg4 trackerEvent:(id)arg5 trackerEventPair:(id)arg6 trackerAttributes:(id)arg7 uniqueID:(id)arg8 callback:(id /* block */)arg9;
- (void)trackAuthirzeResultIfNeed:(id)arg0 result:(BOOL)arg1;
- (void)getPhoneNumberWithParam:(id)arg0 subTitle:(id)arg1 callback:(id /* block */)arg2 instance:(id)arg3;
- (void)getClueComponentTitleWithId:(id)arg0 appId:(id)arg1 completion:(id /* block */)arg2;
- (void)getUserTotalInfoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)processAggrementArray:(id)arg0;
- (void)totalInfoTrackerWithJustShown:(BOOL)arg0 success:(BOOL)arg1;
- (void)getUserTotalInfoWithRequestParam:(id)arg0 completion:(id /* block */)arg1;
- (id)defaultPhoneNumberManageLynxPageUrlStr;
- (void)getPhoneNumberListWithPhoneNumber:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldShowPhoneNumberList;
- (id)getPhoneNumberDefaultArray:(id)arg0;
- (void)setBindPhoneNumber:(id)arg0;
- (void)postPhoneNumberProcessWithPhoneNumber:(id)arg0 param:(id)arg1 subTitle:(id)arg2 uniqueID:(id)arg3 callback:(id /* block */)arg4 instance:(id)arg5 authState:(id)arg6 commonAttributes:(id)arg7;
- (void)getPhoneNumberWithCommonAttributes:(id)arg0 param:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3 needCompletion:(BOOL)arg4 completion:(id /* block */)arg5;
- (long long)chosenPhoneNumID;
- (void)setChosenPhoneNumID:(long long)arg0;
- (void)openPhoneNumberManageLynxPage;
- (BOOL)phoneNumberListFirstShow;
- (void)updatePhoneNumberList:(id)arg0;
- (void)setPhoneNumberListFirstShow:(BOOL)arg0;
- (id)getErrorTypeWithError:(id)arg0;
- (void)getUserProfileWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getOpenDataWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (id)phoneNumbers;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setPhoneNumbers:(id)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;

@end
