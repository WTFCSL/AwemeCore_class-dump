//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString;

@interface ACCMomentService : NSObject {
    BOOL _isWaitingUpdateConfig;
    BOOL _isForeground;
    NSArray *_crops;
    id /* block */ _assetFilter;
    unsigned long long _bimPerCallbackCount;
    id /* block */ _bimCompletion;
    NSMutableDictionary *_didPublishMomentIdDict;
    NSMutableDictionary *_usedTemplates;
}

@property (nonatomic) BOOL isWaitingUpdateConfig;
@property (nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL bimModelRequire;
@property (nonatomic) unsigned long long bimPerCallbackCount;
@property (copy, nonatomic) id /* block */ bimCompletion;
@property (retain, nonatomic) NSMutableDictionary *didPublishMomentIdDict;
@property (retain, nonatomic) NSMutableDictionary *usedTemplates;
@property (nonatomic) unsigned long long scanLimitCount;
@property (nonatomic) double scanRedundancyScale;
@property (copy, nonatomic) NSArray *crops;
@property (copy, nonatomic) id /* block */ assetFilter;
@property (readonly, nonatomic) BOOL isAlready;
@property (nonatomic) BOOL multiThreadOptimize;
@property (nonatomic) long long scanQueueOperationCount;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (copy, nonatomic) NSString *aimPannelName;

+ (id)shareInstance;

- (void)requestTemplateWithMoment:(id)arg0 verifyTemplate:(id /* block */)arg1 callback:(id /* block */)arg2;
- (long long)scanQueueOperationCount;
- (BOOL)multiThreadOptimize;
- (void)setBimCompletion:(id /* block */)arg0;
- (void)setMultiThreadOptimize:(BOOL)arg0;
- (void)setScanQueueOperationCount:(long long)arg0;
- (unsigned long long)scanLimitCount;
- (void)setScanLimitCount:(unsigned long long)arg0;
- (void)replaceCompletion:(id /* block */)arg0;
- (double)scanRedundancyScale;
- (void)setCrops:(id)arg0;
- (id /* block */)assetFilter;
- (id)crops;
- (void)setAssetFilter:(id /* block */)arg0;
- (void)setScanRedundancyScale:(double)arg0;
- (id /* block */)bimCompletion;
- (BOOL)bimModelRequire;
- (void)updateBIMModel;
- (unsigned long long)bimPerCallbackCount;
- (void)startForegroundMediaScanWithPerCallbackCount:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)startBackgroundMediaScanWithCompletion:(id /* block */)arg0;
- (void)setBimPerCallbackCount:(unsigned long long)arg0;
- (void)startBackgroundMediaScanWithForce:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setIsWaitingUpdateConfig:(BOOL)arg0;
- (id)usedTemplates;
- (id)didPublishMomentIdDict;
- (BOOL)isAlready;
- (void)updateModelIfNotReady;
- (void)updateConfigModel;
- (void)cleanScanResultNotExistWithCompletion:(id /* block */)arg0;
- (void)stopMediaScan;
- (void)requestMomentsWithUpdateFlag:(BOOL)arg0 verifyTemplate:(id /* block */)arg1 callback:(id /* block */)arg2;
- (void)markMomentAlreadyPublish:(id)arg0;
- (void)setAimPannelName:(id)arg0;
- (id)aimPannelName;
- (BOOL)isWaitingUpdateConfig;
- (void)setDidPublishMomentIdDict:(id)arg0;
- (void)setUsedTemplates:(id)arg0;
- (id)init;
- (void)clearAllData;
- (void).cxx_destruct;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg0;
- (void)memoryWarning:(id)arg0;
- (id)urlPrefix;

@end