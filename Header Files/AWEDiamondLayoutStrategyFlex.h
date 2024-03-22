//
//     Generated by private class-dump
//

@class AWEDiamondJustifyContentBaseLayout, NSString, AWEDiamondAlignItemsBaseLayout, AWEDiamondLayoutFlexAttributes;

@interface AWEDiamondLayoutStrategyFlex : NSObject <AWEDiamondLayoutStrategyProtocol> {
    AWEDiamondJustifyContentBaseLayout *_justifyContentLayout;
    AWEDiamondAlignItemsBaseLayout *_alignItemsLayout;
    AWEDiamondLayoutFlexAttributes *_flexAttributes;
}

@property (retain, nonatomic) AWEDiamondJustifyContentBaseLayout *justifyContentLayout;
@property (retain, nonatomic) AWEDiamondAlignItemsBaseLayout *alignItemsLayout;
@property (retain, nonatomic) AWEDiamondLayoutFlexAttributes *flexAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)flexAttributes;
- (id)initWithContainerElement:(id)arg0;
- (void)setFlexAttributes:(id)arg0;
- (void)calculateLayoutWithContainerSize:(struct CGSize { double x0; double x1; })arg0 completion:(id /* block */)arg1;
- (double)calculateAdaptiveContainerWidth;
- (double)calculateAdaptiveContainerHeight;
- (id)justifyContentLayoutWithMainAxisStrategy:(unsigned long long)arg0 element:(id)arg1;
- (id)alignItemsLayoutWithCrossAxisStrategy:(unsigned long long)arg0 element:(id)arg1;
- (id)justifyContentLayout;
- (id)alignItemsLayout;
- (void)setJustifyContentLayout:(id)arg0;
- (void)setAlignItemsLayout:(id)arg0;
- (void).cxx_destruct;

@end