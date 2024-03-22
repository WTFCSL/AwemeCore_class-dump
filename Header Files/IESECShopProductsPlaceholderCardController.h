//
//     Generated by private class-dump
//

@class IESECListKitListUpdater, NSString, UICollectionViewCell, IESECListKitItemDataModel;

@interface IESECShopProductsPlaceholderCardController : NSObject <IESECListKitCellControllerProtocol> {
    IESECListKitItemDataModel *_bffItemData;
    IESECListKitListUpdater *_listUpdater;
    UICollectionViewCell *_cell;
    id _cellModel;
    long long _section;
    long long _index;
}

@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)setCellModel:(id)arg0;
- (void)configCell;
- (id)listUpdater;
- (void)setListUpdater:(id)arg0;
- (id)bffItemData;
- (void)setBffItemData:(id)arg0;
- (double)heightForModel:(id)arg0 itemWidth:(double)arg1;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (void)setSection:(long long)arg0;
- (long long)index;
- (long long)section;
- (id)cell;
- (void)setCell:(id)arg0;
- (id)cellModel;

@end
