//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBizDeskPluginHybridImpl : NSObject <CJPayBizDeskPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (id)deskVCBizParams:(id)arg0 bizurl:(id)arg1 response:(id)arg2 completionBlock:(id /* block */)arg3;

@end
