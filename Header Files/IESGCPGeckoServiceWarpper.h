//
//     Generated by private class-dump
//

@class NSString;
@protocol IESGCPGeckoService;

@interface IESGCPGeckoServiceWarpper : NSObject <IESGCPGeckoService> {
    id<IESGCPGeckoService> _injectService;
}

@property (retain, nonatomic) id<IESGCPGeckoService> injectService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerAccessKey:(id)arg0 SDKVersion:(id)arg1;
- (id)rootDirForAccessKey:(id)arg0 channel:(id)arg1;
- (void)syncResourceWithAccessKey:(id)arg0 channels:(id)arg1 resourceVersion:(id)arg2 isColdLaunch:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)injectService;
- (void)setInjectService:(id)arg0;
- (void).cxx_destruct;

@end