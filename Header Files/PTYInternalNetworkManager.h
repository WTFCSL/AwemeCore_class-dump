//
//     Generated by private class-dump
//

@class NSString;

@interface PTYInternalNetworkManager : NSObject <PTYNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)request:(id)arg0 method:(id)arg1 headers:(id)arg2 body:(id)arg3 timeout:(double)arg4 callback:(id /* block */)arg5;
- (void)download:(id)arg0 headers:(id)arg1 destPath:(id)arg2 callback:(id /* block */)arg3;

@end
