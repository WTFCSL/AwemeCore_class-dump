//
//     Generated by private class-dump
//

@class NSString, IGListSectionController;

@interface AWEPLVHalfPageSectionLayout : NSObject <AWESectionLayoutProtocol> {
    IGListSectionController *sectionController;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _separatorFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } separatorFrame;
@property (weak, nonatomic) IGListSectionController *sectionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerDecorationViewWithLayout:(id)arg0;
- (struct AWESectionLayoutEntity { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *x0; } x2; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; })calculateWithSection:(long long)arg0 collectionView:(id)arg1 lastLayout:(id)arg2 lastSctionLayoutEntity:(struct AWESectionLayoutEntity { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *x0; } x2; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; })arg3;
- (id)layoutAttributesForDecorationViewAtIndexPath:(id)arg0;
- (void)setSeparatorFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })separatorFrame;
- (void).cxx_destruct;
- (void)setSectionController:(id)arg0;
- (id)sectionController;

@end
