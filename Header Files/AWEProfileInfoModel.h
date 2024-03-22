//
//     Generated by private class-dump
//

@class NSArray, AWEProfileExtensionAreaServiceCardListModel, NSString, AWEProfilePersonalCenterModel;

@interface AWEProfileInfoModel : MTLModel <MTLJSONSerializing> {
    AWEProfilePersonalCenterModel *_personalCenter;
    AWEProfileExtensionAreaServiceCardListModel *_serviceCardModel;
    NSArray *_personalTagModels;
    NSArray *_personalLinkModels;
    NSString *_ipLocationV2;
}

@property (retain, nonatomic) AWEProfilePersonalCenterModel *personalCenter;
@property (retain, nonatomic) AWEProfileExtensionAreaServiceCardListModel *serviceCardModel;
@property (retain, nonatomic) NSArray *personalTagModels;
@property (retain, nonatomic) NSArray *personalLinkModels;
@property (retain, nonatomic) NSString *ipLocationV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceCardModelJSONTransformer;
+ (id)personalTagModelsJSONTransformer;
+ (id)personalLinkModelsJSONTransformer;
+ (id)personalCenterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)serviceCardModel;
- (id)personalCenter;
- (id)ipLocationV2;
- (id)personalLinkModels;
- (id)personalTagModels;
- (void)setPersonalCenter:(id)arg0;
- (void)setServiceCardModel:(id)arg0;
- (void)setPersonalTagModels:(id)arg0;
- (void)setPersonalLinkModels:(id)arg0;
- (void)setIpLocationV2:(id)arg0;
- (void).cxx_destruct;

@end
