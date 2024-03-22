//
//     Generated by private class-dump
//

@class HGGamePlatformBase, NSString;

@interface HGSonicLoaderImpl : NSObject <SonicLoaderService> {
    HGGamePlatformBase *_platform;
}

@property (retain, nonatomic) HGGamePlatformBase *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)load:(id)arg0 callback:(id /* block */)arg1;
- (id)loadMedia:(id)arg0;
- (void)loadUrl:(id)arg0 callback:(id /* block */)arg1;
- (id)initWithRuntime:(id)arg0;
- (id)load:(id)arg0;
- (void).cxx_destruct;
- (void)setPlatform:(id)arg0;
- (id)platform;

@end