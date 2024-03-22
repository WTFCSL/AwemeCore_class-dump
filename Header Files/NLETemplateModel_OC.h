//
//     Generated by private class-dump
//

@class TemplateInfo_OC;

@interface NLETemplateModel_OC : NLEModel_OC

@property (nonatomic) float cutsameCanvasRatioOrigin;
@property (nonatomic) struct shared_ptr<cut::model::NLETemplateModel> { struct NLETemplateModel *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) TemplateInfo_OC *info;

+ (id)restore:(id)arg0;
+ (id)saveToDraft:(id)arg0;
+ (id)createFromDraft:(id)arg0;
+ (id)getFeatureListFromTemplateJson:(id)arg0;
+ (id)getFeatureListFromTemplateModel:(id)arg0;
+ (id)getFeatureBitsFromFeatureList:(id)arg0;
+ (id)currentFeatureBits;
+ (id)currentFeatureBitsRemoveFeatureList:(id)arg0;
+ (BOOL)canSupportFeatureBits:(id)arg0;
+ (BOOL)canSupportFeatureBitsArray:(id)arg0;
+ (id)supportFeatureList;
+ (BOOL)isValidTemplate:(id)arg0;
+ (void)registerTemplateModelClass;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETemplateModel> { struct NLETemplateModel *x0; struct __shared_weak_count *x1; })arg0;
- (id)getStage;
- (void)storeToZip:(id)arg0 withResourceFolder:(id)arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)getMutableAssetItems;
- (id)getAllMutableItems;
- (id)getMutableTextItems;
- (id)getMutableSlotItems;
- (id)getAllMutableTextClipsFromSlot:(id)arg0;
- (id)convertNLEMappingNode:(id)arg0;
- (void)setCutsameCanvasRatioOrigin:(float)arg0;
- (float)cutsameCanvasRatioOrigin;
- (id)init;
- (id)info;
- (id)store;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setInfo:(id)arg0;

@end