//
//     Generated by private class-dump
//

@interface AWEDanmakuResourceManager : NSObject {
    BOOL _isRequestConfig;
}

@property (nonatomic) BOOL isRequestConfig;

+ (id)sharedInstance;

- (BOOL)checkEnabled;
- (id)findLottieJSONPath:(id)arg0;
- (void)setIsRequestConfig:(BOOL)arg0;
- (void)downloadResourceIfNeeded;
- (void)cleanResourceIfNeeded;
- (void)deleteWithModels:(id)arg0;
- (void)downloadWithModels:(id)arg0;
- (void)downloadResourceIfNeededWithModel:(id)arg0;
- (void)deleteResourceIfNeededWithCompletion:(id /* block */)arg0;
- (id)pendantLocalPathWithModel:(id)arg0;
- (id)eggLocalPathWithModel:(id)arg0;
- (BOOL)isRequestConfig;

@end
