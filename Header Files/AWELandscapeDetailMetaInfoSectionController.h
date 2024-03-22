//
//     Generated by private class-dump
//

@class AWELandscapePageContext;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeDetailMetaInfoSectionController : AWEBaseListSectionController {
    AWELandscapePageContext *_context;
    id<AWELandscapeSplitScreenContainerDelegate> _splitScreenContainer;
}

@property (retain, nonatomic) AWELandscapePageContext *context;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> splitScreenContainer;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (id)splitScreenContainer;
- (void)setSplitScreenContainer:(id)arg0;
- (void)updateLayout:(id)arg0 model:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (id)separatorColor;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (double)separatorHeight;
- (id)context;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct AWEListKitSeparatorInsets { double x0; double x1; })separatorInsets;

@end
