//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPluginDUXCustomImpl : NSObject <BDPDUXPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)showDUXDialogWithUniqueID:(id)arg0 title:(id)arg1 icon:(id)arg2 desc:(id)arg3 confirmBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;

@end
