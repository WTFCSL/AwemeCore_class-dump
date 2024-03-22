//
//     Generated by private class-dump
//

@class NSString, AWEPerfLoadRequest, AWEProfileResponseModel, NSDictionary, NSMutableArray;

@interface AWEProfilePreloadUser : NSObject <AWEUserMessage, AWEProfilePreloadProtocol> {
    BOOL isPreloadAction;
    BOOL _isFromCache;
    long long status;
    NSDictionary *paramDictionary;
    double _beginTime;
    double _endTime;
    NSDictionary *_netStageStatisDict;
    AWEProfileResponseModel *_responseModel;
    NSString *_userID;
    NSString *_secUserID;
    unsigned long long _consumeCount;
    unsigned long long _maxConsumeCount;
    NSMutableArray *_waitCompletionBlocks;
    AWEPerfLoadRequest *_preloadLoadRequest;
}

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) unsigned long long consumeCount;
@property (nonatomic) unsigned long long maxConsumeCount;
@property (retain, nonatomic) NSMutableArray *waitCompletionBlocks;
@property (retain, nonatomic) AWEProfileResponseModel *responseModel;
@property (retain, nonatomic) AWEPerfLoadRequest *preloadLoadRequest;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSDictionary *netStageStatisDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isPreloadAction;
@property (retain, nonatomic) NSDictionary *paramDictionary;
@property (nonatomic) long long status;

+ (id)memoryCacheKeyWith:(id)arg0 secUserID:(id)arg1 paramDictionary:(id)arg2;
+ (id)preloaderWithUserID:(id)arg0 secUserID:(id)arg1 isPreload:(BOOL)arg2 maxConsumeCount:(unsigned long long)arg3 paramDictionary:(id)arg4 completion:(id /* block */)arg5;
+ (long long)profilePreloadType;
+ (id)preloadLoadRequesstKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)setParamDictionary:(id)arg0;
- (id)paramDictionary;
- (unsigned long long)consumeCount;
- (void)setConsumeCount:(unsigned long long)arg0;
- (id)netStageStatisDict;
- (BOOL)isPreloadAction;
- (void)setIsPreloadAction:(BOOL)arg0;
- (void)setNetStageStatisDict:(id)arg0;
- (void)setMaxConsumeCount:(unsigned long long)arg0;
- (unsigned long long)maxConsumeCount;
- (id)waitCompletionBlocks;
- (void)setPreloadLoadRequest:(id)arg0;
- (id)preloadLoadRequest;
- (void)setWaitCompletionBlocks:(id)arg0;
- (void)privateLoadUserWithCompletion:(id /* block */)arg0;
- (void)loadUserWithCompletion:(id /* block */)arg0;
- (id)userID;
- (id)init;
- (void).cxx_destruct;
- (long long)status;
- (void)setUserID:(id)arg0;
- (void)setBeginTime:(double)arg0;
- (BOOL)isFromCache;
- (double)endTime;
- (void)setStatus:(long long)arg0;
- (void)setIsFromCache:(BOOL)arg0;
- (void)dealloc;
- (void)setEndTime:(double)arg0;
- (double)beginTime;
- (id)responseModel;
- (void)setResponseModel:(id)arg0;

@end