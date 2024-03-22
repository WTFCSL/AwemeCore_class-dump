//
//     Generated by private class-dump
//

@class NSString;

@interface AWESmartPhoneManager : HTSService <AWESmartPhoneManager, BDASmartPhoneDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)smartPhoneHostURL;
- (void)smartPhoneOpenURL:(id)arg0;
- (void)callSmartPhoneWithConfig:(id)arg0;
- (void)callNormalPhoneWithConfig:(id)arg0;
- (void)fetchVirtualNumberWithConfig:(id)arg0 completion:(id /* block */)arg1;
- (void)callMultiplePhoneWithSmartPhoneModels:(id)arg0;
- (void)callMultiplePhoneWithSmartPhoneModels:(id)arg0 isNeedHideEmptyActionSheet:(BOOL)arg1;
- (id)paramsFromConfig:(id)arg0;

@end