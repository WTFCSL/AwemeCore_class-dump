//
//     Generated by private class-dump
//

@class NSString, NSIndexPath;

@interface IESECStoreSearchHistoryCellVM : NSObject {
    BOOL _isFoldBtn;
    BOOL _isFold;
    BOOL _editing;
    NSIndexPath *_indexPath;
    NSString *_title;
    id /* block */ _deleteAction;
    id /* block */ _foldAction;
    id /* block */ _selectAction;
}

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL isFoldBtn;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL editing;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (copy, nonatomic) id /* block */ foldAction;
@property (copy, nonatomic) id /* block */ selectAction;

- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg0;
- (void)setSelectAction:(id /* block */)arg0;
- (id /* block */)selectAction;
- (id /* block */)foldAction;
- (void)setFoldAction:(id /* block */)arg0;
- (BOOL)isFoldBtn;
- (void)setIsFoldBtn:(BOOL)arg0;
- (BOOL)editing;
- (void).cxx_destruct;
- (id /* block */)deleteAction;
- (void)setIndexPath:(id)arg0;
- (void)setEditing:(BOOL)arg0;
- (id)indexPath;
- (id)title;
- (id)initWithTitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setDeleteAction:(id /* block */)arg0;

@end
