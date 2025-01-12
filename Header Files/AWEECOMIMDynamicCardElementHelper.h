//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEECOMIMDynamicCardElementHelper : NSObject {
    NSMutableDictionary *_elementViewTypeDictM;
}

@property (retain, nonatomic) NSMutableDictionary *elementViewTypeDictM;

- (id)rootElementViewForElement:(id)arg0;
- (id)configSubElementViewsForElement:(id)arg0 parentElementView:(id)arg1 maxSize:(struct CGSize { double x0; double x1; })arg2;
- (id)elementViewTypeDictM;
- (BOOL)checkNeedPreCalculateWidth:(id)arg0;
- (struct CGSize { double x0; double x1; })dealChildrenWithParentElementView:(id)arg0 childElement:(id)arg1 autoPartWidth:(double)arg2 allPercent:(long long)arg3 containViewWidth:(double)arg4 hasPreCalculateWidth:(BOOL)arg5 layoutElementView:(id)arg6 left:(double)arg7 top:(double)arg8 elementModel:(id)arg9 maxSize:(struct CGSize { double x0; double x1; })arg10;
- (id)filterTypeSet;
- (BOOL)isFilterType:(long long)arg0;
- (void)registerElementViewClass:(Class)arg0 elementType:(long long)arg1;
- (void)setElementViewTypeDictM:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
