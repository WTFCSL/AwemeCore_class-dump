//
//     Generated by private class-dump
//

@class NSString;

@interface AWEWebViewPrefetchManager : NSObject <IESPrefetchCapability>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)networkForRequest:(id)arg0 completion:(id /* block */)arg1;

@end