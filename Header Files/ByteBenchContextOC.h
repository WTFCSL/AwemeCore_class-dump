//
//     Generated by private class-dump
//

@class NSString;

@interface ByteBenchContextOC : NSObject {
    BOOL _mBoe;
    BOOL _mRefactor;
    BOOL _isInit;
    int _mAid;
    int _mBid;
    int _mstatus;
    int _mUpdateVersionCode;
    NSString *_mDeviceModel;
    NSString *_mAppName;
    NSString *_mAppVersion;
    NSString *_mDid;
    NSString *_mUid;
    NSString *_mBaseUrl;
    NSString *_mWorkspace;
}

@property (copy, nonatomic) NSString *mDeviceModel;
@property (nonatomic) int mAid;
@property (nonatomic) int mBid;
@property (nonatomic) int mstatus;
@property (copy, nonatomic) NSString *mAppName;
@property (copy, nonatomic) NSString *mAppVersion;
@property (copy, nonatomic) NSString *mDid;
@property (copy, nonatomic) NSString *mUid;
@property (nonatomic) BOOL mBoe;
@property (nonatomic) BOOL mRefactor;
@property (copy, nonatomic) NSString *mBaseUrl;
@property (nonatomic) int mUpdateVersionCode;
@property (copy, nonatomic) NSString *mWorkspace;
@property BOOL isInit;

+ (id)sharedInstance;

- (void)setIsInit:(BOOL)arg0;
- (BOOL)isInit;
- (int)getAid;
- (void)initAllModules:(id)arg0;
- (id)mDeviceModel;
- (void)setMDeviceModel:(id)arg0;
- (int)mAid;
- (void)setMAid:(int)arg0;
- (int)mBid;
- (void)setMBid:(int)arg0;
- (int)mstatus;
- (void)setMstatus:(int)arg0;
- (id)mAppName;
- (void)setMAppName:(id)arg0;
- (void)setMAppVersion:(id)arg0;
- (id)mDid;
- (void)setMDid:(id)arg0;
- (id)mUid;
- (void)setMUid:(id)arg0;
- (BOOL)mBoe;
- (void)setMBoe:(BOOL)arg0;
- (BOOL)mRefactor;
- (void)setMRefactor:(BOOL)arg0;
- (id)mBaseUrl;
- (void)setMBaseUrl:(id)arg0;
- (int)mUpdateVersionCode;
- (void)setMUpdateVersionCode:(int)arg0;
- (void)setMWorkspace:(id)arg0;
- (int)initByConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)mWorkspace;
- (id)mAppVersion;

@end