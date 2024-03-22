//
//     Generated by private class-dump
//

@class IESECGoodsDetailComponentUIConfig, NSString, IESECGoodsDetailCommonMeta, IESECTracker, NSMutableDictionary, IESECGoodsDetailSKUManager;

@interface IESECGoodsDetailPageBaseViewModel : NSObject <IGListDisplayDelegate> {
    NSString *_componentUID;
    NSString *_pageIdentifier;
    id _dataModel;
    id _metaModel;
    IESECGoodsDetailCommonMeta *_commonMeta;
    IESECGoodsDetailSKUManager *_skuManager;
    IESECTracker *_tracker;
    IESECGoodsDetailComponentUIConfig *_uiConfig;
    NSMutableDictionary *_goodsSharedDictionary;
    struct CGSize { double width; double height; } _viewSize;
}

@property (copy, nonatomic) NSString *componentUID;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) id dataModel;
@property (retain, nonatomic) id metaModel;
@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (retain, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECGoodsDetailComponentUIConfig *uiConfig;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (weak, nonatomic) NSMutableDictionary *goodsSharedDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)uiConfig;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)setUiConfig:(id)arg0;
- (void)updateDataModel:(id)arg0;
- (id)metaModel;
- (void)updateModelWithEpInfo:(id)arg0;
- (void)setMetaModel:(id)arg0;
- (id)commonMeta;
- (void)setupCurrentViewSize;
- (id)skuManager;
- (void)setSkuManager:(id)arg0;
- (id)goodsSharedDictionary;
- (void)setCommonMeta:(id)arg0;
- (void)updateMetaModel:(id)arg0;
- (void)updateModelWithSkuManager;
- (void)trackShowEvent:(id)arg0 withComponentTrackParams:(id)arg1;
- (void)resizeViewSize;
- (void)setComponentUID:(id)arg0;
- (void)setGoodsSharedDictionary:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;
- (id)componentUID;

@end