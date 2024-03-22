//
//     Generated by private class-dump
//

@class LynxContext, NSString, NSDictionary, JSModule;

@interface BDPLynxBridgeLynxModule : NSObject <BDPReachabilityStateDelegate, LynxContextModule> {
    BOOL _isOneCard;
    BOOL _isFirstTimeNetStateChange;
    LynxContext *_lynxContext;
    id _moduleContext;
    NSString *_groupID;
    NSString *_cardID;
    NSString *_storagePath;
    NSString *_verifyURL;
    NSString *_publishVersion;
    NSDictionary *_customFileds;
    double _verifyStartTime;
    long long _socketTaskID;
    long long _requestTaskID;
    JSModule *_innerJSModule;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) LynxContext *lynxContext;
@property (retain, nonatomic) JSModule *innerJSModule;
@property (weak, nonatomic) id moduleContext;
@property BOOL isFirstTimeNetStateChange;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *storagePath;
@property (copy, nonatomic) NSString *verifyURL;
@property (copy, nonatomic) NSString *publishVersion;
@property (retain, nonatomic) NSDictionary *customFileds;
@property (nonatomic) BOOL isOneCard;
@property (nonatomic) double verifyStartTime;
@property (nonatomic) long long socketTaskID;
@property (nonatomic) long long requestTaskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id extraData;

+ (id)methodLookup;
+ (void)setName:(id)arg0;
+ (id)name;

- (void)setupObserver;
- (void)setLynxContext:(id)arg0;
- (id)lynxContext;
- (void)onSocketTaskStateChange:(id)arg0 withMessage:(id)arg1 error:(id)arg2;
- (id)JSONValue:(id)arg0;
- (id)verifyURL;
- (void)setVerifyURL:(id)arg0;
- (void)setIsOneCard:(BOOL)arg0;
- (id)publishVersion;
- (void)setPublishVersion:(id)arg0;
- (id)customFileds;
- (void)setCustomFileds:(id)arg0;
- (void)trackerEvent:(id)arg0 Param:(id)arg1;
- (void)tt_getAppInfoSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_navigateToMiniProgram:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getLaunchOptionsSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getSystemInfo:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getSystemInfoSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getGeneralInfo:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getNetworkType:(id)arg0 callback:(id /* block */)arg1;
- (id)netHandleHeader:(id)arg0 url:(id)arg1 type:(long long)arg2;
- (BOOL)netIsValidMethod:(id)arg0;
- (long long)requestTaskID;
- (void)setRequestTaskID:(long long)arg0;
- (void)netRemoveRequestTaskWithId:(unsigned long long)arg0;
- (void)emitMethod:(id)arg0 withParams:(id)arg1;
- (void)netAddRequestTask:(id)arg0 withId:(unsigned long long)arg1;
- (id)netRequestTaskOfId:(unsigned long long)arg0;
- (id)netMultipartBodyWithName:(id)arg0 fileName:(id)arg1 fileData:(id)arg2 otherFormData:(id)arg3;
- (void)tt_operateRequestTask:(id)arg0 callback:(id /* block */)arg1;
- (id)netRequestTasksDict;
- (void)multipartFormData:(id)arg0 WithStr:(id)arg1;
- (void)tt_createRequestTask:(id)arg0 callback:(id /* block */)arg1;
- (double)verifyStartTime;
- (void)setVerifyStartTime:(double)arg0;
- (void)tt_createUploadTask:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_operateUploadTask:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_createDownloadTask:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_operateDownloadTask:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_createVerifyRequestTask:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_operateVerifyRequestTask:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_callHostMethod:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_reportAnalytics:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_openSchema:(id)arg0 callback:(id /* block */)arg1;
- (long long)socketTaskID;
- (void)setSocketTaskID:(long long)arg0;
- (void)tt_createSocketTask:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_operateSocketTask:(id)arg0 callback:(id /* block */)arg1;
- (id)storageForCard:(id)arg0;
- (void)tt_setStorage:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getStorage:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_removeStorage:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_clearStorage:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getStorageInfo:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_setStorageSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getStorageSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_removeStorageSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_clearStorageSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getStorageInfoSync:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_showToast:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_hideToast:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_showModal:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_showActionSheet:(id)arg0 callback:(id /* block */)arg1;
- (void)tt_getConnectedWifi:(id)arg0 callback:(id /* block */)arg1;
- (id)invoke:(id)arg0 param:(id)arg1 callback:(id /* block */)arg2;
- (id)innerMethodLookup;
- (BOOL)isOneCard;
- (BOOL)isSyncEvent:(id)arg0;
- (id)innerJSModule;
- (void)setInnerJSModule:(id)arg0;
- (BOOL)isFirstTimeNetStateChange;
- (void)setIsFirstTimeNetStateChange:(BOOL)arg0;
- (id)initWithLynxContext:(id)arg0;
- (id)initWithLynxContext:(id)arg0 WithParam:(id)arg1;
- (void)setGroupID:(id)arg0;
- (unsigned long long)deviceOrientation;
- (id)storagePath;
- (id)groupID;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)onReachabilityChange:(unsigned long long)arg0;
- (void)dealloc;
- (void)setStoragePath:(id)arg0;
- (id)cardID;
- (void)setCardID:(id)arg0;
- (id)moduleContext;
- (void)setModuleContext:(id)arg0;

@end
