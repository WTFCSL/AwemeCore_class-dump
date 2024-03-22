//
//     Generated by private class-dump
//

@class AWERLInsetsVirtualNode, NSArray, NSDictionary, NSString, AWERLGridVirtualNode;

@interface AWEPersonalCenterFunctionCardComponent : AWERLComponent <AWEPersonalCenterComponentProtocol, AWEPersonalCenterFunctionCardComponentProtocol> {
    AWERLInsetsVirtualNode *_cardNode;
    NSArray *_subEntryComponents;
    NSArray *_skeletonSubComponents;
    AWERLGridVirtualNode *_gridNode;
    double _containerWidth;
    NSDictionary *_extraDictInfo;
}

@property (retain, nonatomic) AWERLInsetsVirtualNode *cardNode;
@property (retain, nonatomic) NSArray *subEntryComponents;
@property (retain, nonatomic) NSArray *skeletonSubComponents;
@property (retain, nonatomic) AWERLGridVirtualNode *gridNode;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSDictionary *extraDictInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSubComponents;
- (void)updateComponentData:(id)arg0;
- (id)virtualNodeWithChildren:(id)arg0;
- (void)updateContainerWidth:(double)arg0;
- (double)defaultSpaceHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerPadding;
- (id)initWithWidth:(double)arg0 data:(id)arg1 context:(id)arg2;
- (void)setupTrackerExtraInfoDict;
- (void)updateSubComponents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCard;
- (id)subEntryComponents;
- (id)gridNode;
- (id)cardNode;
- (id)skeletonSubComponents;
- (void)setSubEntryComponents:(id)arg0;
- (id)extraDictInfo;
- (void)setExtraDictInfo:(id)arg0;
- (double)cardBottomPadding;
- (void)setCardNode:(id)arg0;
- (void)setSkeletonSubComponents:(id)arg0;
- (void)setGridNode:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end