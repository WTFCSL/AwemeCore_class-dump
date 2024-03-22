//
//     Generated by private class-dump
//

@class IESLiveIMAppInfo, NSString, NSData, NSObject;
@protocol OS_dispatch_queue, IESLiveIMDecoder, IESLiveIMFetcher;

@interface IESLiveIMConfig : NSObject <IESLiveIMConfig> {
    BOOL _enableWS;
    BOOL enableExtraFrontier;
    BOOL allowReconnectCommand;
    BOOL isSupportZstd;
    IESLiveIMAppInfo *appInfo;
    id<IESLiveIMDecoder> decoder;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    id<IESLiveIMFetcher> shortLinkFetcher;
    id<IESLiveIMFetcher> longLinkFetcher;
    NSData *zstdDictData;
    NSString *zstdDictVersion;
}

@property (retain, nonatomic) IESLiveIMAppInfo *appInfo;
@property (retain, nonatomic) id<IESLiveIMDecoder> decoder;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (retain, nonatomic) id<IESLiveIMFetcher> shortLinkFetcher;
@property (retain, nonatomic) id<IESLiveIMFetcher> longLinkFetcher;
@property (nonatomic) BOOL enableWS;
@property (nonatomic) BOOL enableExtraFrontier;
@property (nonatomic) BOOL allowReconnectCommand;
@property (nonatomic) BOOL isSupportZstd;
@property (retain, nonatomic) NSData *zstdDictData;
@property (copy, nonatomic) NSString *zstdDictVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWithDefault;
+ (id)configWithBizConfig:(id)arg0;

- (void)setDecodeQueue:(id)arg0;
- (id)decodeQueue;
- (void)setIsSupportZstd:(BOOL)arg0;
- (void)setEnableWS:(BOOL)arg0;
- (BOOL)enableWS;
- (void)setShortLinkFetcher:(id)arg0;
- (void)setLongLinkFetcher:(id)arg0;
- (void)setEnableExtraFrontier:(BOOL)arg0;
- (id)longLinkFetcher;
- (id)shortLinkFetcher;
- (BOOL)allowReconnectCommand;
- (BOOL)isSupportZstd;
- (id)zstdDictVersion;
- (id)zstdDictData;
- (void)setZstdDictData:(id)arg0;
- (void)setZstdDictVersion:(id)arg0;
- (BOOL)enableExtraFrontier;
- (void)setAllowReconnectCommand:(BOOL)arg0;
- (void)setupConfigWithZstdDictInfo;
- (id)init;
- (void).cxx_destruct;
- (void)setDecoder:(id)arg0;
- (id)decoder;
- (id)appInfo;
- (void)setAppInfo:(id)arg0;

@end