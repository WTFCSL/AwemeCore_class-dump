//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AFDUserActionManager : NSObject <AFDUserActionManagerProtocol> {
    NSMutableDictionary *_actionsStacks;
}

@property (retain, nonatomic) NSMutableDictionary *actionsStacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addPermissionUserActionWithLevel:(long long)arg0 aweme:(id)arg1 info:(id)arg2;
- (id)actionsStacks;
- (void)addUserAction:(id)arg0;
- (void)setActionsStacks:(id)arg0;
- (void).cxx_destruct;

@end