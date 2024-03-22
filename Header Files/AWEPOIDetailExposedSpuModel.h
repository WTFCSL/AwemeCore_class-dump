//
//     Generated by private class-dump
//

@class NSString, AWEPOIServiceSpuEntryModel, AWEPOISpuModel;

@interface AWEPOIDetailExposedSpuModel : MTLModel <MTLJSONSerializing> {
    AWEPOIServiceSpuEntryModel *_spuListEntry;
    AWEPOISpuModel *_poiDetailSpu;
}

@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *spuListEntry;
@property (retain, nonatomic) AWEPOISpuModel *poiDetailSpu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)spuListEntry;
- (void)setSpuListEntry:(id)arg0;
- (id)poiDetailSpu;
- (void)setPoiDetailSpu:(id)arg0;
- (void).cxx_destruct;

@end
