//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPPropGlobalInterfaceProvider : NSObject <IESGCPPropInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openGameCPUserListRulePage;
- (void)updatePropDataAuthStatusWithStatus:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)requestPropDataAuthStatusWithCompletion:(id /* block */)arg0;
- (BOOL)enableGameCPPropToPlayerRankPrivacy;

@end
