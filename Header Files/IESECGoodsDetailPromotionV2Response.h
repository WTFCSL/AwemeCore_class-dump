//
//     Generated by private class-dump
//

@class IESECGoodsDetailCommonPageMeta, NSString, NSArray, IESECGoodsDetailPageLogicalControl, NSDictionary, IESECGoodsDetailComponentObject, IESECLLDCLynxManager, IESECGoodsDetailPageConfigure;

@interface IESECGoodsDetailPromotionV2Response : MTLModel <MTLJSONSerializing> {
    NSArray *_componentList;
    IESECGoodsDetailComponentObject *_bottomButtonComponentObject;
    IESECGoodsDetailComponentObject *_smallVideoComponentObject;
    IESECGoodsDetailComponentObject *_shopFloatEntryComponentObject;
    IESECGoodsDetailComponentObject *_leftPanGuideObject;
    IESECGoodsDetailPageLogicalControl *_logicalControl;
    IESECGoodsDetailComponentObject *_halfStrand;
    IESECGoodsDetailPageConfigure *_pageConfig;
    NSArray *_scrollTabNodes;
    IESECGoodsDetailComponentObject *_navigationComponentObject;
    IESECGoodsDetailCommonPageMeta *_commonPageMeta;
    IESECGoodsDetailComponentObject *_pendantInfo;
    IESECGoodsDetailComponentObject *_replayEntry;
    IESECLLDCLynxManager *_lynxManager;
    NSDictionary *_sliceTemplates;
    NSDictionary *_headerModel;
    NSDictionary *_actions;
}

@property (copy, nonatomic) NSArray *componentList;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *bottomButtonComponentObject;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *smallVideoComponentObject;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *shopFloatEntryComponentObject;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *leftPanGuideObject;
@property (retain, nonatomic) IESECGoodsDetailPageLogicalControl *logicalControl;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *halfStrand;
@property (retain, nonatomic) IESECGoodsDetailPageConfigure *pageConfig;
@property (retain, nonatomic) NSArray *scrollTabNodes;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *navigationComponentObject;
@property (retain, nonatomic) IESECGoodsDetailCommonPageMeta *commonPageMeta;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *pendantInfo;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *replayEntry;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (copy, nonatomic) NSDictionary *sliceTemplates;
@property (copy, nonatomic) NSDictionary *headerModel;
@property (copy, nonatomic) NSDictionary *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentListJSONTransformer;
+ (id)scrollTabNodesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setPendantInfo:(id)arg0;
- (id)pendantInfo;
- (void)setComponentList:(id)arg0;
- (id)lynxManager;
- (void)setLynxManager:(id)arg0;
- (id)bottomButtonComponentObject;
- (void)setBottomButtonComponentObject:(id)arg0;
- (id)smallVideoComponentObject;
- (void)setSmallVideoComponentObject:(id)arg0;
- (id)shopFloatEntryComponentObject;
- (void)setShopFloatEntryComponentObject:(id)arg0;
- (id)leftPanGuideObject;
- (void)setLeftPanGuideObject:(id)arg0;
- (id)logicalControl;
- (void)setLogicalControl:(id)arg0;
- (id)halfStrand;
- (void)setHalfStrand:(id)arg0;
- (id)scrollTabNodes;
- (void)setScrollTabNodes:(id)arg0;
- (id)navigationComponentObject;
- (void)setNavigationComponentObject:(id)arg0;
- (id)commonPageMeta;
- (void)setCommonPageMeta:(id)arg0;
- (id)replayEntry;
- (void)setReplayEntry:(id)arg0;
- (id)sliceTemplates;
- (void)setSliceTemplates:(id)arg0;
- (void).cxx_destruct;
- (id)actions;
- (void)setActions:(id)arg0;
- (void)setHeaderModel:(id)arg0;
- (id)headerModel;
- (id)pageConfig;
- (void)setPageConfig:(id)arg0;
- (id)componentList;

@end
