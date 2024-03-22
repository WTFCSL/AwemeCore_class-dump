//
//     Generated by private class-dump
//

@class ACCStickerHierarchyManager, ACCStickerContainerView, NSMutableArray;

@interface ACCStickerGroupManager : NSObject {
    ACCStickerContainerView *_containerView;
    ACCStickerHierarchyManager *_stickerManager;
    NSMutableArray *_stickerGroupList;
}

@property (weak, nonatomic) ACCStickerContainerView *containerView;
@property (weak, nonatomic) ACCStickerHierarchyManager *stickerManager;
@property (retain, nonatomic) NSMutableArray *stickerGroupList;

- (id)stickerManager;
- (void)setStickerManager:(id)arg0;
- (id)subStickerViewsInGroup:(id)arg0;
- (void)addStickerView:(id)arg0;
- (void)removeGroupViewCacheWithGroupId:(id)arg0;
- (id)groupViewWithGroupId:(id)arg0;
- (id)stickerGroupList;
- (void)setStickerGroupList:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)initWithContainer:(id)arg0;

@end