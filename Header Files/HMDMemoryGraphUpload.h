//
//     Generated by private class-dump
//

@class NSString, HMDDebugRealConfig;

@interface HMDMemoryGraphUpload : NSObject <AWECloudCommandProtocol> {
    HMDDebugRealConfig *_debugRealConfig;
}

@property (retain, nonatomic) HMDDebugRealConfig *debugRealConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (void)load;

- (void)excuteCommand:(id)arg0 completion:(id /* block */)arg1;
- (void)setDebugRealConfig:(id)arg0;
- (id)debugRealConfig;
- (void).cxx_destruct;

@end
