//
//     Generated by private class-dump
//

@protocol IESECListKitCellModelDelegate <NSObject>

@optional

- (void)lynxCardModelDidCreate:(id)arg0 itemModel:(id)arg1 itemConfig:(id)arg2 index:(long long)arg3;
- (void)lynxCardModel:(id)arg0 didReceiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 itemModel:(id)arg3 index:(long long)arg4;
- (unsigned long long)sectionForCellModel:(id)arg0;
- (unsigned long long)indexForCellModel:(id)arg0;

@end
