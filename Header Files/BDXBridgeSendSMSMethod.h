//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeSendSMSMethod : BDXBridgeMethod <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (void)messageComposeViewController:(id)arg0 didFinishWithResult:(long long)arg1;
- (id)methodName;

@end