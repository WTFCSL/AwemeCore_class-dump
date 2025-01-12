//
//     Generated by private class-dump
//

@class IESECListKitLynxCardModel, IESECListKitPendantListModel, NSDictionary, NSString, IESECListKitBackgroundModel, IESECListKitListModel;

@interface IESECMallListKitBffDataModel : MTLModel <MTLJSONSerializing> {
    IESECListKitListModel *_feed;
    IESECListKitLynxCardModel *_topBar;
    IESECListKitBackgroundModel *_background;
    IESECListKitLynxCardModel *_popup;
    IESECListKitPendantListModel *_pendant;
    NSDictionary *_bizInfo;
    NSDictionary *_extraData;
    NSDictionary *_dynamicParams;
}

@property (retain, nonatomic) IESECListKitListModel *feed;
@property (retain, nonatomic) IESECListKitLynxCardModel *topBar;
@property (retain, nonatomic) IESECListKitBackgroundModel *background;
@property (retain, nonatomic) IESECListKitLynxCardModel *popup;
@property (retain, nonatomic) IESECListKitPendantListModel *pendant;
@property (copy, nonatomic) NSDictionary *bizInfo;
@property (copy, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) NSDictionary *dynamicParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupJSONTransformer;
+ (id)feedJSONTransformer;
+ (id)topBarJSONTransformer;
+ (id)backgroundJSONTransformer;
+ (id)pendantJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bizInfo;
- (void)setBizInfo:(id)arg0;
- (id)pendant;
- (void)setPendant:(id)arg0;
- (void)setDynamicParams:(id)arg0;
- (id)feed;
- (id)background;
- (void).cxx_destruct;
- (id)topBar;
- (void)setBackground:(id)arg0;
- (void)setFeed:(id)arg0;
- (void)setTopBar:(id)arg0;
- (void)setExtraData:(id)arg0;
- (id)extraData;
- (id)popup;
- (void)setPopup:(id)arg0;
- (id)dynamicParams;

@end
