//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLivePopupService;

@interface IESECLiveFunctionalModuleIESECBridger : NSObject <IESECLiveFunctionalModule> {
    id<IESLivePopupService> _protoObj;
}

@property (retain, nonatomic) id<IESLivePopupService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (void)showAudienceGoodsListPopupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 view:(id)arg1;
- (void)showAudienceGoodsListPopupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 view:(id)arg1 iPadClickCompletion:(id /* block */)arg2;
- (void)showAnchorGoodsListPopupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 view:(id)arg1 onShowCompletion:(id /* block */)arg2 onHideCompletion:(id /* block */)arg3;
- (void)didClosePickedCommodityPopupView;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;

@end
