//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioChallengeServiceImpl : NSObject <AWEStudioChallengeServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestChallengeItemWithID:(id)arg0 isCommerce:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)requestHashTagItemWithName:(id)arg0 completion:(id /* block */)arg1;
- (void)requestChallengeItemWithID:(id)arg0 completion:(id /* block */)arg1;

@end
