//
//     Generated by private class-dump
//

@class CSJLiveAdCustomConfig;

@interface CSJAdSDKInternalModel : NSObject {
    CSJLiveAdCustomConfig *_liveAdConfig;
}

@property (readonly, nonatomic) CSJLiveAdCustomConfig *liveAdConfig;

+ (id)sharedInstance;

- (void)registerLiveAdCustomConfig:(id)arg0;
- (id)liveAdConfig;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;

@end
