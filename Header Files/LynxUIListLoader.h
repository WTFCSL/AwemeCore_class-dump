//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, LynxUI, LynxUIListDiffResult, NSMutableArray;

@interface LynxUIListLoader : LynxUI <LynxUIComponentLayoutObserver> {
    BOOL _diffable;
    BOOL _elementTypeUpdate;
    BOOL _newArch;
    BOOL _needsInternalCellAppearNotification;
    BOOL _needsInternalCellDisappearNotification;
    BOOL _needsInternalCellPrepareForReuseNotification;
    LynxUIListDiffResult *_diffResult;
    NSMutableArray *_fullSpanItems;
    NSMutableArray *_stickyTopItems;
    NSMutableArray *_stickyBottomItems;
    NSMutableArray *_fiberFullSpanItems;
    NSMutableArray *_fiberStickyTopItems;
    NSMutableArray *_fiberStickyBottomItems;
    NSMutableArray *_reuseIdentifiers;
    NSMutableArray *_currentItemKeys;
    NSMutableDictionary *_estimatedHeights;
    LynxUI *_currentUI;
}

@property (readonly, nonatomic) void *listNode;
@property (retain, nonatomic) LynxUI *currentUI;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic, getter=isDiffable) BOOL diffable;
@property (readonly, nonatomic) LynxUIListDiffResult *diffResult;
@property (readonly, nonatomic) NSMutableArray *fullSpanItems;
@property (readonly, nonatomic) NSMutableArray *stickyTopItems;
@property (readonly, nonatomic) NSMutableArray *stickyBottomItems;
@property (readonly, nonatomic) BOOL elementTypeUpdate;
@property (readonly, nonatomic) NSMutableArray *fiberFullSpanItems;
@property (readonly, nonatomic) NSMutableArray *fiberStickyTopItems;
@property (readonly, nonatomic) NSMutableArray *fiberStickyBottomItems;
@property (readonly, nonatomic) NSMutableArray *reuseIdentifiers;
@property (readonly, nonatomic) NSMutableArray *currentItemKeys;
@property (readonly, nonatomic) NSMutableDictionary *estimatedHeights;
@property (readonly, nonatomic, getter=isNewArch) BOOL newArch;
@property (nonatomic) BOOL needsInternalCellAppearNotification;
@property (nonatomic) BOOL needsInternalCellDisappearNotification;
@property (nonatomic) BOOL needsInternalCellPrepareForReuseNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propsDidUpdate;
- (void)validateIndexPath:(id)arg0;
- (void *)listNode;
- (id)fullSpanItems;
- (id)stickyTopItems;
- (id)stickyBottomItems;
- (id)estimatedHeights;
- (BOOL)isDiffable;
- (BOOL)elementTypeUpdate;
- (id)diffResult;
- (BOOL)isPartOnLayout;
- (BOOL)isNewArch;
- (id)currentItemKeys;
- (void)asyncRecycleLynxUI:(id)arg0;
- (void)asyncUIAtIndexPath:(id)arg0 operationID:(long long)arg1;
- (id)uiAtIndexPath:(id)arg0;
- (void)recycleLynxUI:(id)arg0;
- (BOOL)needsInternalCellPrepareForReuseNotification;
- (void)updateLynxUI:(id)arg0 toIndexPath:(id)arg1;
- (id)renderLynxUIAtIndexPath:(id)arg0;
- (BOOL)needsInternalCellAppearNotification;
- (BOOL)needsInternalCellDisappearNotification;
- (void)onComponentLayoutUpdated:(id)arg0;
- (void)onAsyncComponentLayoutUpdated:(id)arg0 operationID:(long long)arg1;
- (void)setNeedsInternalCellAppearNotification:(BOOL)arg0;
- (void)setNeedsInternalCellDisappearNotification:(BOOL)arg0;
- (void)setNeedsInternalCellPrepareForReuseNotification:(BOOL)arg0;
- (void)markIsNewArch;
- (void)updateListActionInfo:(id)arg0;
- (void)loadListInfo:(id)arg0 components:(id)arg1;
- (void)transformExtraData;
- (id)fiberFullSpanItems;
- (id)fiberStickyTopItems;
- (id)fiberStickyBottomItems;
- (void)validateLynxUI:(id)arg0 indexPath:(id)arg1;
- (void)loadCellInfos;
- (id)currentUI;
- (void)setCurrentUI:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)isAsync;
- (id)reuseIdentifiers;
- (void)insertChild:(id)arg0 atIndex:(long long)arg1;

@end
