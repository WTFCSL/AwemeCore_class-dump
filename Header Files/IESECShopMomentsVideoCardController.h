//
//     Generated by private class-dump
//

@class IESECListKitListUpdater, NSString, IESECListKitItemDataModel, UICollectionViewCell, IESECStorePageContext;
@protocol IESECStoreContainerProtocol;

@interface IESECShopMomentsVideoCardController : NSObject <IESECShopMomentsVideoCardDelegate, IESECListKitCellControllerProtocol> {
    BOOL _titleLabelExpanded;
    BOOL _videoPlayerLandscapeMode;
    IESECListKitItemDataModel *_bffItemData;
    IESECListKitListUpdater *_listUpdater;
    UICollectionViewCell *_cell;
    id _cellModel;
    long long _section;
    long long _index;
    id<IESECStoreContainerProtocol> _container;
    IESECStorePageContext *_pageContext;
    double _videoPlayerHeight;
}

@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (nonatomic) BOOL titleLabelExpanded;
@property (nonatomic) BOOL videoPlayerLandscapeMode;
@property (nonatomic) double videoPlayerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)setCellModel:(id)arg0;
- (double)videoPlayerHeight;
- (void)setVideoPlayerHeight:(double)arg0;
- (void)configCell;
- (id)listUpdater;
- (void)setListUpdater:(id)arg0;
- (id)bffItemData;
- (void)setBffItemData:(id)arg0;
- (double)heightForModel:(id)arg0 itemWidth:(double)arg1 bffItemData:(id)arg2;
- (void)willDisplayWithSource:(unsigned long long)arg0 extraParams:(id)arg1;
- (BOOL)titleLabelExpanded;
- (void)cell:(id)arg0 didTapVideoView:(id)arg1 cellModel:(id)arg2;
- (void)cell:(id)arg0 didTapProdudctView:(id)arg1 cellModel:(id)arg2;
- (void)setTitleLabelExpanded:(BOOL)arg0;
- (BOOL)enableNewCardStyleWithBffData:(id)arg0;
- (void)setVideoPlayerLandscapeMode:(BOOL)arg0;
- (BOOL)videoPlayerLandscapeMode;
- (BOOL)enableNewCardStyle;
- (id)container;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)setSection:(long long)arg0;
- (long long)index;
- (long long)section;
- (id)cell;
- (void)setCell:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)cellModel;

@end
