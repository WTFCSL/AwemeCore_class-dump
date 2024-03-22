//
//     Generated by private class-dump
//

@class NSString, NSArray, IESECSKUModel, IESECSKUCarAdaptViewModel, NSDictionary, IESECSKUNumberViewModel, NSMutableArray, IESECSKUDetailContext, UIColor;

@interface IESECSKUNewSpecViewModel : NSObject <IESECSKUViewModelProtocol> {
    NSArray *_specList;
    IESECSKUNumberViewModel *_numViewModel;
    IESECSKUCarAdaptViewModel *_carAdapterViewModel;
    NSString *_bigCover;
    NSDictionary *_picMap;
    NSDictionary *_bigPicMap;
    NSDictionary *_smallPicMap;
    NSString *_productID;
    NSMutableArray *_cellArray;
    IESECSKUModel *_skuModel;
    IESECSKUDetailContext *_detailContext;
}

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (copy, nonatomic) NSArray *specList;
@property (retain, nonatomic) IESECSKUNumberViewModel *numViewModel;
@property (retain, nonatomic) IESECSKUCarAdaptViewModel *carAdapterViewModel;
@property (copy, nonatomic) NSString *bigCover;
@property (copy, nonatomic) NSDictionary *picMap;
@property (copy, nonatomic) NSDictionary *bigPicMap;
@property (copy, nonatomic) NSDictionary *smallPicMap;
@property (readonly, nonatomic) UIColor *atmosphereColor;
@property (readonly, nonatomic) BOOL showStepperComponent;
@property (readonly, nonatomic) BOOL specShowImageAndPrice;
@property (copy, nonatomic) NSString *productID;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (id)cellArray;
- (void)setCellArray:(id)arg0;
- (void)trackWithEventName:(id)arg0;
- (id)specList;
- (void)setSpecList:(id)arg0;
- (BOOL)showStepperComponent;
- (id)bigCover;
- (void)setBigCover:(id)arg0;
- (id)picMap;
- (void)setPicMap:(id)arg0;
- (id)skuModel;
- (void)setSkuModel:(id)arg0;
- (void)skuModuleClick:(id)arg0 extra:(id)arg1;
- (id)initWithSKUModel:(id)arg0 detailContext:(id)arg1;
- (id)carAdapterViewModel;
- (BOOL)specShowImageAndPrice;
- (void)setCarAdapterViewModel:(id)arg0;
- (id)atmosphereColor;
- (id)numViewModel;
- (id)smallPicMap;
- (id)bigPicMap;
- (void)previewDidmissAtIndex:(long long)arg0;
- (void)skuModuleShow:(id)arg0 extra:(id)arg1;
- (void)setNumViewModel:(id)arg0;
- (void)setBigPicMap:(id)arg0;
- (void)setSmallPicMap:(id)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;

@end
