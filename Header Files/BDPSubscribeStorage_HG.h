//
//     Generated by private class-dump
//

@class NSMutableDictionary, BDPUniqueID, BDPPopLimitInfo;
@protocol BDPKVInterface;

@interface BDPSubscribeStorage_HG : NSObject {
    unsigned long long _mainSwitch;
    BDPUniqueID *_uniqueID;
    id<BDPKVInterface> _storage;
    id<BDPKVInterface> _storageBackup;
    BDPPopLimitInfo *_popLimitInfo;
    NSMutableDictionary *_allTemplateInfoDict;
    NSMutableDictionary *_userSubscribeDict;
    NSMutableDictionary *_permissionViewInfo;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id<BDPKVInterface> storage;
@property (retain, nonatomic) id<BDPKVInterface> storageBackup;
@property (nonatomic) unsigned long long mainSwitch;

- (id)initWithUniqueID:(id)arg0 storage:(id)arg1;
- (void)updateSubscribeStatusWithUserSubscribeList:(id)arg0 enabled:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)subscribeTemplateWithSubscriptionList:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchAllSubscribeInfoIfNeeded:(id /* block */)arg0;
- (id)getUserAllSubscriptionDict;
- (unsigned long long)mainSwitch;
- (void)getTemplateDataIfNeededFor:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)getUserSwitchForTemplate:(id)arg0;
- (id)getInfoForTemplateType:(unsigned long long)arg0 timesType:(unsigned long long)arg1;
- (void)setMainSwitch:(unsigned long long)arg0;
- (double)getUserLastFetchTimestamp;
- (BOOL)createUserSubscribeInfoInStorageWithUserMainSwitch:(unsigned long long)arg0 longTermSubscribeList:(id)arg1 timeStamp:(double)arg2;
- (BOOL)updateStorageForTemplate:(id)arg0 withTemplateInfo:(id)arg1;
- (BOOL)updateStorageForSubscribePermissionViewInfo:(id)arg0 withKey:(id)arg1;
- (BOOL)updateStorageForTemplate:(id)arg0 withStatus:(unsigned long long)arg1;
- (id)storageBackup;
- (void)setStorageBackup:(id)arg0;
- (void)updateBackupStorage:(id)arg0;
- (void)setStorage:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)storage;
- (void)setUniqueID:(id)arg0;
- (id)getTemplateInfo:(id)arg0;

@end
