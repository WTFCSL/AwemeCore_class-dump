//
//     Generated by private class-dump
//

@class UIColor, AWERLFlexChildVirtualNode, AWERLFlexVirtualNode, AWEPersonalCenterAvatarComponent, AWEPersonalCenterNicknameComponent, NSString;

@interface AWEPersonalCenterAvatarBlockComponent : AWERLComponent <AWEPersonalCenterComponentProtocol, AWEPersonalCenterAvatarBlockComponentProtocol> {
    AWEPersonalCenterAvatarComponent *_avatarComponent;
    AWERLFlexVirtualNode *_containerNode;
    UIColor *_transMyProfileNodeBackgroundColor;
    AWERLFlexChildVirtualNode *_transMyProfileNode;
    double _containerWidth;
    AWEPersonalCenterNicknameComponent *_nicknameComponent;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _transMyProfileBtnFrame;
}

@property (retain, nonatomic) AWERLFlexVirtualNode *containerNode;
@property (retain, nonatomic) UIColor *transMyProfileNodeBackgroundColor;
@property (retain, nonatomic) AWERLFlexChildVirtualNode *transMyProfileNode;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEPersonalCenterAvatarComponent *avatarComponent;
@property (retain, nonatomic) AWEPersonalCenterNicknameComponent *nicknameComponent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transMyProfileBtnFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSubComponents;
- (void)updateComponentData:(id)arg0;
- (id)virtualNodeWithChildren:(id)arg0;
- (void)updateContainerWidth:(double)arg0;
- (id)containerNode;
- (double)defaultSpaceHeight;
- (void)setContainerNode:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfTransMyProfileBtn;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerPadding;
- (id)avatarComponent;
- (id)nicknameComponent;
- (id)transMyProfileNode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transMyProfileBtnFrame;
- (id)transMyProfileButton;
- (void)setTransMyProfileNodeBackgroundColor:(id)arg0;
- (id)transMyProfileNodeBackgroundColor;
- (void)setTransMyProfileBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)transferToMyProfilePage;
- (id)initWithWidth:(double)arg0 data:(id)arg1 context:(id)arg2;
- (void)setAvatarComponent:(id)arg0;
- (void)setTransMyProfileNode:(id)arg0;
- (void)setNicknameComponent:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end
