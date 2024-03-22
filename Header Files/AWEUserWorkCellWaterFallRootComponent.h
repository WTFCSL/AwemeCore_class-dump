//
//     Generated by private class-dump
//

@class AWERLFlexVirtualNode, AWEUserWorkCellWaterFallTopContainerComponent, AWEUserWorkCellWaterFallBottomContainerComponent;

@interface AWEUserWorkCellWaterFallRootComponent : AWERLComponent {
    AWEUserWorkCellWaterFallBottomContainerComponent *_bottomComponent;
    AWEUserWorkCellWaterFallTopContainerComponent *_topComponent;
    AWERLFlexVirtualNode *_node;
}

@property (retain, nonatomic) AWEUserWorkCellWaterFallBottomContainerComponent *bottomComponent;
@property (retain, nonatomic) AWEUserWorkCellWaterFallTopContainerComponent *topComponent;
@property (retain, nonatomic) AWERLFlexVirtualNode *node;

- (id)buildSubComponents;
- (id)virtualNodeWithChildren:(id)arg0;
- (id)topComponent;
- (id)bottomComponent;
- (void)setBottomComponent:(id)arg0;
- (void)setTopComponent:(id)arg0;
- (id)node;
- (void).cxx_destruct;
- (void)setNode:(id)arg0;

@end
