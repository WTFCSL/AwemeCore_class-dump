//
//     Generated by private class-dump
//

@class HTSLiveDressListResponse_Data, NSArray, NSString, NSNumber, NSObject, IESLiveFetchNewDressTaskThrottle;
@protocol OS_dispatch_queue, IESLivePrivilegeDressAPI;

@interface IESLiveDressManager : NSObject <IESLiveFetchNewDressTaskThrottleDelegate, IESLivePrivilegeGlobalModuleDressService> {
    HTSLiveDressListResponse_Data *_dressListModel;
    NSObject<OS_dispatch_queue> *_queue;
    IESLiveFetchNewDressTaskThrottle *_taskThrottle;
    NSNumber *_roomID;
    id<IESLivePrivilegeDressAPI> _dressApi;
}

@property (retain, nonatomic) HTSLiveDressListResponse_Data *dressListModel;
@property (readonly, nonatomic) NSArray *dressList;
@property (readonly, copy, nonatomic) NSString *dressListVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IESLiveFetchNewDressTaskThrottle *taskThrottle;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) id<IESLivePrivilegeDressAPI> dressApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDressDataWithDressID:(id)arg0;
- (id)dressFromDressID:(id)arg0 error:(id *)arg1;
- (void)dressFromDressID:(id)arg0 isWaitDownload:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setDressListModel:(id)arg0;
- (id)dressListModel;
- (id)dressApi;
- (id)taskThrottle;
- (void)scheduleUnionTask:(id)arg0;
- (void)setTaskThrottle:(id)arg0;
- (void)setDressApi:(id)arg0;
- (id)getDressDataVersion;
- (void)updateDressListWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)borderFromDressID:(id)arg0 completion:(id /* block */)arg1;
- (void)p_loadDataFromCache;
- (void)p_loadLocalDressListModelWithCompletion:(id /* block */)arg0;
- (void)p_appendNewDress:(id)arg0;
- (id)dressListVersion;
- (void)ts_fetchDressListWithRoomID:(id)arg0 verison:(id)arg1 dressIDs:(id)arg2 error:(id)arg3 response:(id)arg4 duration:(double)arg5;
- (void)updateDressListWithTask:(id)arg0;
- (void)updateDressListWithRoomID:(id)arg0 dressIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)p_saveDataToCache;
- (void)borderFromDressID:(id)arg0 isWaitDownload:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)ts_dressID:(id)arg0 dressType:(int)arg1 dressListModel:(id)arg2 error:(id)arg3 duration:(double)arg4;
- (void)userEnterFromDressID:(id)arg0 isWaitDownload:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dressFromDressID:(id)arg0 completion:(id /* block */)arg1;
- (id)dressList;
- (void)p_fetchNewDress:(id)arg0 completion:(id /* block */)arg1;
- (void)ts_dressID:(id)arg0 dressType:(int)arg1 dressListModel:(id)arg2 error:(id)arg3 duration:(double)arg4 inSyncMode:(BOOL)arg5;
- (void)userEnterFromDressID:(id)arg0 completion:(id /* block */)arg1;
- (void)guestBattleFromDressID:(id)arg0 completion:(id /* block */)arg1;
- (void)openAssetFromDressID:(id)arg0 completion:(id /* block */)arg1;
- (void)profileSkinFromDressID:(id)arg0 completion:(id /* block */)arg1;
- (id)profileSkinFromDressID:(id)arg0 error:(id *)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)queue;
- (void)setQueue:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
