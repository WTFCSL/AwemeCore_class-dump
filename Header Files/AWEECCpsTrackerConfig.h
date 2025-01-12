//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEECCpsTrackerRetryConfig;

@interface AWEECCpsTrackerConfig : MTLModel <MTLJSONSerializing> {
    BOOL _useNewApi;
    BOOL _useOldApi;
    NSArray *_reportParamsConfig;
    AWEECCpsTrackerRetryConfig *_retryConfig;
    NSArray *_blockList;
    NSString *_version;
}

@property (retain, nonatomic) NSArray *reportParamsConfig;
@property (retain, nonatomic) AWEECCpsTrackerRetryConfig *retryConfig;
@property (retain, nonatomic) NSArray *blockList;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL useNewApi;
@property (nonatomic) BOOL useOldApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reportParamsConfigJSONTransformer;
+ (id)retryConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)reportParamsConfig;
- (void)setReportParamsConfig:(id)arg0;
- (id)retryConfig;
- (void)setRetryConfig:(id)arg0;
- (BOOL)useNewApi;
- (void)setUseNewApi:(BOOL)arg0;
- (BOOL)useOldApi;
- (void)setUseOldApi:(BOOL)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setBlockList:(id)arg0;
- (id)blockList;

@end
