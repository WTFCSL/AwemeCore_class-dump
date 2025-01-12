//
//     Generated by private class-dump
//

@class AWERLInsetsVirtualNode, NSString, AWEPersonalCenterAccountSwitchComponent, AWEProfileNicknameVirtualNode;

@interface AWEPersonalCenterNicknameComponent : AWERLComponent <AWEUserMessage, AWEPersonalCenterComponentProtocol> {
    BOOL _canShowSwitchAccount;
    double _minHeight;
    id /* block */ _nameMaxWidthBlock;
    AWERLInsetsVirtualNode *_nameEditButtonNode;
    AWEPersonalCenterAccountSwitchComponent *_accountSwitchComponent;
    AWEProfileNicknameVirtualNode *_nickNameNode;
    AWERLInsetsVirtualNode *_containerNode;
}

@property (retain, nonatomic) AWERLInsetsVirtualNode *nameEditButtonNode;
@property (retain, nonatomic) AWEPersonalCenterAccountSwitchComponent *accountSwitchComponent;
@property (nonatomic) BOOL canShowSwitchAccount;
@property (retain, nonatomic) AWEProfileNicknameVirtualNode *nickNameNode;
@property (retain, nonatomic) AWERLInsetsVirtualNode *containerNode;
@property (nonatomic) double minHeight;
@property (copy, nonatomic) id /* block */ nameMaxWidthBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDYProfileHeaderActionControllerDOUYINLiteAdapterClass;

- (void)didDeleteAccountWithUserID:(id)arg0;
- (id)buildSubComponents;
- (void)updateComponentData:(id)arg0;
- (id)virtualNodeWithChildren:(id)arg0;
- (id)containerNode;
- (id)aAWEDYProfileHeaderActionControllerDOUYINLiteAdapter;
- (void)setContainerNode:(id)arg0;
- (id)initWithData:(id)arg0 context:(id)arg1 minHeight:(double)arg2;
- (void)checkCanShowSwitchAccount:(BOOL)arg0;
- (id)accountSwitchComponent;
- (id)nameEditButtonNode;
- (id)nickNameNode;
- (void)didTapContainer;
- (BOOL)canShowSwitchAccount;
- (void)nameEditButtonTapped;
- (void)nameEditButtonTappedWith:(BOOL)arg0;
- (void)trackNameEditButtonClickWith:(id)arg0;
- (BOOL)showQuickSwitchWithContext;
- (void)setCanShowSwitchAccount:(BOOL)arg0;
- (id /* block */)nameMaxWidthBlock;
- (void)setNameMaxWidthBlock:(id /* block */)arg0;
- (void)setNameEditButtonNode:(id)arg0;
- (void)setAccountSwitchComponent:(id)arg0;
- (void)setNickNameNode:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setMinHeight:(double)arg0;
- (void)dealloc;
- (double)minHeight;
- (void)updateName;

@end
