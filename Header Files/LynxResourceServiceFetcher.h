//
//     Generated by private class-dump
//

@class NSString;

@interface LynxResourceServiceFetcher : NSObject <LynxResourceFetcher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)ensureLynxService;
+ (id)getLynxService;

- (id /* block */)loadResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (void)loadResourceWithURLString:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)requestAsyncWithResourceRequest:(id)arg0 type:(long long)arg1 lynxResourceLoadCompletedBlock:(id /* block */)arg2;
- (id)requestSyncWithResourceRequest:(id)arg0 type:(long long)arg1;

@end
