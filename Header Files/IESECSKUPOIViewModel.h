//
//     Generated by private class-dump
//

@class IESECGoodsPOIModel, IESECSKUDetailContext, IESECSKUModel, NSString;

@interface IESECSKUPOIViewModel : NSObject <IESECSKUViewModelProtocol> {
    IESECGoodsPOIModel *_poiInfo;
    IESECSKUModel *_skuModel;
    IESECSKUDetailContext *_detailContext;
}

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECGoodsPOIModel *poiInfo;
@property (readonly, nonatomic) NSString *poiListURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)poiInfo;
- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (id)hintText;
- (void)setPoiInfo:(id)arg0;
- (BOOL)enableSwitch;
- (BOOL)showHint;
- (id)poiListURLString;
- (id)skuModel;
- (void)setSkuModel:(id)arg0;
- (id)initWithSKUModel:(id)arg0 detailContext:(id)arg1;
- (void)trackPOIInfoShow;
- (void).cxx_destruct;

@end
