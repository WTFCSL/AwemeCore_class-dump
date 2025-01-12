//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEPOICubeConfig, AWELiveLifeBridgeRegister;

@interface AWEPOICubeModel : NSObject {
    BOOL _enableUIOperationQueue;
    NSString *_lynxUrl;
    id _bizData;
    NSDictionary *_bizGlobalProps;
    long long _height;
    long long _preloadType;
    AWEPOICubeConfig *_config;
    NSString *_uniqueTag;
    NSDictionary *_trackParams;
    NSString *_lynxUrlBeforeIntercept;
}

@property (retain, nonatomic) AWELiveLifeBridgeRegister *liveLifeBridgeRegister;
@property (retain, nonatomic) NSString *lynxUrl;
@property (retain, nonatomic) id bizData;
@property (retain, nonatomic) NSDictionary *bizGlobalProps;
@property (nonatomic) long long height;
@property (nonatomic) long long preloadType;
@property (retain, nonatomic) AWEPOICubeConfig *config;
@property (copy, nonatomic) NSString *uniqueTag;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *lynxUrlBeforeIntercept;
@property (nonatomic) BOOL enableUIOperationQueue;

- (id)lynxUrl;
- (void)setBizData:(id)arg0;
- (id)trackParams;
- (void)setPreloadType:(long long)arg0;
- (void)setTrackParams:(id)arg0;
- (id)bizData;
- (void)setLynxUrl:(id)arg0;
- (id)initWithLynxModel:(id)arg0;
- (id)bizGlobalProps;
- (void)setBizGlobalProps:(id)arg0;
- (id)uniqueTag;
- (void)setUniqueTag:(id)arg0;
- (id)lynxUrlBeforeIntercept;
- (void)setLynxUrlBeforeIntercept:(id)arg0;
- (BOOL)enableUIOperationQueue;
- (void)setEnableUIOperationQueue:(BOOL)arg0;
- (void)updateConfigWithContext:(id)arg0;
- (id)liveLifeBridgeRegister;
- (void)setLiveLifeBridgeRegister:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (long long)height;
- (id)config;
- (void)setHeight:(long long)arg0;
- (long long)preloadType;

@end
