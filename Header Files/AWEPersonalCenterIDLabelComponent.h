//
//     Generated by private class-dump
//

@class NSString, AWERLVirtualNode, AWERLLabelVirtualNode, AWERLFlexVirtualNode, AWEUserModel, AWEProfileHeaderContext;

@interface AWEPersonalCenterIDLabelComponent : AWERLComponent <AWEPersonalCenterComponentProtocol> {
    AWERLFlexVirtualNode *_containerNode;
    AWERLLabelVirtualNode *_privateNode;
    AWERLLabelVirtualNode *_idLabelNode;
    AWERLVirtualNode *_qrCodeNode;
    double _containerWidth;
    AWEUserModel *_user;
    AWEProfileHeaderContext *_headerContext;
}

@property (retain, nonatomic) AWERLFlexVirtualNode *containerNode;
@property (retain, nonatomic) AWERLLabelVirtualNode *privateNode;
@property (retain, nonatomic) AWERLLabelVirtualNode *idLabelNode;
@property (retain, nonatomic) AWERLVirtualNode *qrCodeNode;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEProfileHeaderContext *headerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateComponentData:(id)arg0;
- (id)virtualNodeWithChildren:(id)arg0;
- (void)updateContainerWidth:(double)arg0;
- (id)containerNode;
- (double)defaultSpaceHeight;
- (void)setContainerNode:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerPadding;
- (id)initWithWidth:(double)arg0 data:(id)arg1 context:(id)arg2;
- (BOOL)shouldShowPrivateLabel;
- (id)privateNode;
- (id)idLabelNode;
- (id)qrCodeNode;
- (id)idPrefixStr;
- (id)headerContext;
- (void)setPrivateNode:(id)arg0;
- (void)setIdLabelNode:(id)arg0;
- (void)setQrCodeNode:(id)arg0;
- (void)setHeaderContext:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)labelFont;
- (id)idStr;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end
