//
//     Generated by private class-dump
//

@interface AWEHPEditPanelConfig : NSObject {
    id /* block */ _saveItemsBlock;
    id /* block */ _canShowEditBlock;
    id /* block */ _getItemsBlock;
    id /* block */ _getSortItemListBlock;
    id /* block */ _currentChannelID;
    id /* block */ _editPanelShow;
}

@property (copy, nonatomic) id /* block */ saveItemsBlock;
@property (copy, nonatomic) id /* block */ canShowEditBlock;
@property (copy, nonatomic) id /* block */ getItemsBlock;
@property (copy, nonatomic) id /* block */ getSortItemListBlock;
@property (copy, nonatomic) id /* block */ currentChannelID;
@property (copy, nonatomic) id /* block */ editPanelShow;

- (void)setGetItemsBlock:(id /* block */)arg0;
- (void)setGetSortItemListBlock:(id /* block */)arg0;
- (void)setSaveItemsBlock:(id /* block */)arg0;
- (void)setCanShowEditBlock:(id /* block */)arg0;
- (void)setCurrentChannelID:(id /* block */)arg0;
- (void)setEditPanelShow:(id /* block */)arg0;
- (id /* block */)saveItemsBlock;
- (id /* block */)canShowEditBlock;
- (id /* block */)getItemsBlock;
- (id /* block */)getSortItemListBlock;
- (id /* block */)editPanelShow;
- (void).cxx_destruct;
- (id /* block */)currentChannelID;

@end