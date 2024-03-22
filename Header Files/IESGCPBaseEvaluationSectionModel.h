//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, NSString;

@interface IESGCPBaseEvaluationSectionModel : NSObject <IESGCPEvaluationSectionModelProtocol> {
    NSString *_sectionTitle;
    unsigned long long _headerType;
    id /* block */ _itemCountDidChange;
    NSMutableArray *_innerItems;
}

@property (retain, nonatomic) NSMutableArray *innerItems;
@property (readonly, copy, nonatomic) NSArray *itemArray;
@property (copy, nonatomic) id /* block */ itemCountDidChange;
@property (nonatomic) unsigned long long headerType;
@property (copy, nonatomic) NSString *sectionTitle;
@property (readonly, copy, nonatomic) NSString *reuseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemArray;
- (void)setInnerItems:(id)arg0;
- (id)innerItems;
- (void)resetItems:(id)arg0;
- (void)deleteFirstReplyOutSide:(id)arg0;
- (void)appendPublishItem:(id)arg0;
- (void)setItemCountDidChange:(id /* block */)arg0;
- (void)callItemCountDidChanged;
- (void)resetCommentOrder;
- (id /* block */)itemCountDidChange;
- (id)init;
- (void)setHeaderType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)headerType;
- (void)appendItems:(id)arg0;
- (id)reuseIdentifier;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg0;
- (void)deleteItem:(id)arg0;

@end
