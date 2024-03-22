//
//     Generated by private class-dump
//

@class NSArray, ACCStickerContainerView, NSMutableArray;

@interface ACCStickerHierarchyManager : NSObject {
    ACCStickerContainerView *_containerView;
    id /* block */ _comparator;
    NSMutableArray *_models;
    NSArray *_stickerList;
    NSArray *_touchStickerViewList;
}

@property (weak, nonatomic) ACCStickerContainerView *containerView;
@property (copy, nonatomic) id /* block */ comparator;
@property (retain, nonatomic) NSMutableArray *models;
@property (retain, nonatomic) NSArray *stickerList;
@property (retain, nonatomic) NSArray *touchStickerViewList;

- (id)stickerList;
- (void)setStickerList:(id)arg0;
- (void)removeStickerView:(id)arg0;
- (id)allStickerViews;
- (id)stickerViewsWithTypeId:(id)arg0;
- (id)stickerViewWithContentView:(id)arg0;
- (void)removeAllStickerViews;
- (void)activeStickerView:(id)arg0;
- (id)stickerViewsWithHierarchyId:(id)arg0;
- (id)touchStickerViews;
- (void)addStickerView:(id)arg0;
- (id)initWithContainer:(id)arg0 hierarchyComparator:(id /* block */)arg1;
- (BOOL)hierarchyInStickerView:(id)arg0 higherThanStickerView:(id)arg1;
- (void)rebuildStickerList;
- (id)hierarchyIndexForStickerView:(id)arg0;
- (id)touchStickerViewList;
- (void)setTouchStickerViewList:(id)arg0;
- (id /* block */)comparator;
- (void)setComparator:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)models;
- (id)containerView;
- (void)setModels:(id)arg0;

@end
