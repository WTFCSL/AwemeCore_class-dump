//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWENewPublishGoodsTableCell;

@interface AWEPostPageGoodsElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol> {
    BOOL _hasShoppingCartPermission;
    NSDictionary *_extras;
    AWENewPublishGoodsTableCell *_goodsTableViewCell;
}

@property (retain, nonatomic) AWENewPublishGoodsTableCell *goodsTableViewCell;
@property (nonatomic) BOOL hasShoppingCartPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;

- (BOOL)hasShoppingCartPermission;
- (void)setHasShoppingCartPermission:(BOOL)arg0;
- (void)didSelectAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1 enterFromType:(long long)arg2;
- (void)addAIAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1;
- (id)starAtlas;
- (void)elementAppear;
- (void)setupCell:(id)arg0;
- (void)refreshWithAnchorVM:(id)arg0;
- (id)poiService;
- (void)configPlaceholderUI;
- (BOOL)hasGoodsSticker;
- (void)refreshAnchorGoodsWith:(id)arg0;
- (void)goodsStickerConflictCheck;
- (void)cleanGoodsCache;
- (void)showReminderIfNeeded;
- (void)removeReminder;
- (id)goodsTableViewCell;
- (void)p_goodsCellClicked;
- (void)p_asyncGoodsEditInfoNotification:(id)arg0;
- (void)updateShoppingCartAnchor:(id)arg0;
- (void)toastIfNeededForDraftID:(id)arg0;
- (id)commerceOpenShareHelper;
- (void)setGoodsTableViewCell:(id)arg0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)type;
- (id)extras;
- (BOOL)isEnabled;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (BOOL)isVisible;
- (id)cell;
- (void)setupUI;
- (void)didSelect;
- (void)addObservers;

@end
