//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGPluginRequestParamsImpl : NSObject <HGRequestParamsPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)enableUserAgentFetch;
- (void)fetchLastestUserAgentWithCompletion:(id /* block */)arg0;

@end