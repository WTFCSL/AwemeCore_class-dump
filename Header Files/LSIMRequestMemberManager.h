//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface LSIMRequestMemberManager : NSObject {
    NSMutableDictionary *_requestOnAirDict;
}

@property (retain, nonatomic) NSMutableDictionary *requestOnAirDict;

+ (void)registerCategory;
+ (id)shared;

- (void)requestMemberInChatListWithManager:(id)arg0 conversations:(id)arg1 completion:(id /* block */)arg2;
- (void)requestMemberInChatListWithManager:(id)arg0 uidsMap:(id)arg1 extend:(id)arg2 completion:(id /* block */)arg3;
- (void)requestMemberInChatDetailWithManager:(id)arg0 conversation:(id)arg1 completion:(id /* block */)arg2;
- (void)lsimc_requestMemberInChatListWithManager:(id)arg0 conversations:(id)arg1 completion:(id /* block */)arg2;
- (void)lsimc_requestMemberInChatDetailWithManager:(id)arg0 conversation:(id)arg1 completion:(id /* block */)arg2;
- (void)requestMembersInCSChatListSceneWithConversations:(id)arg0 memberManager:(id)arg1 bizExt:(id)arg2 completion:(id /* block */)arg3;
- (void)requestMembersInCSChatDetailSceneWithConversation:(id)arg0 memberManager:(id)arg1 bizExt:(id)arg2 completion:(id /* block */)arg3;
- (void)requestMembersInKOLChatDetailSceneWithConversation:(id)arg0 memberManager:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isRequestOnAirWithMemberManager:(id)arg0;
- (void)setRequestOnAir:(BOOL)arg0 memberManager:(id)arg1;
- (id)requestOnAirDict;
- (void)setRequestOnAirDict:(id)arg0;
- (void).cxx_destruct;

@end