//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPublishUserDeclarationService : HTSService <AWEPublishUserDeclarationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enabledInAdavancedSettings;
- (void)fetchDataWithCreationId:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)enabled;

@end