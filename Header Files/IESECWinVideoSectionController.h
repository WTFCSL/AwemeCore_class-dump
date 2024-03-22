//
//     Generated by private class-dump
//

@class IESECWinVideoObject, NSString, IESECServiceProxy, IESECWinContext, UIViewController;
@protocol IESECWinLiveService, IESECWinDataService, IESECSKUViewControllerProtocol, IESECGoodsDetailPopoverContentProtocol, IESECWinGoodsService;

@interface IESECWinVideoSectionController : IGListSectionController <IESECWinVideoCellProtocol, IESECWinContextProtocol, IESECGoodsDetailContainerProtocol> {
    IESECWinVideoObject *_object;
    IESECWinContext *_context;
    BOOL _tapOnceLock;
    IESECServiceProxy<IESECWinGoodsService> *_goodsService;
    IESECServiceProxy<IESECWinDataService> *_dataServiceProxy;
    IESECServiceProxy<IESECWinLiveService> *_liveServiceProxy;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataServiceProxy;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveServiceProxy;
@property (nonatomic) BOOL tapOnceLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol> *skuVC;
@property (nonatomic) BOOL shouldDetachLiveFloatOnTopToNextPage;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (id)liveServiceProxy;
- (id)paramsForEventTracking;
- (id)commonTrackParamsForBST;
- (void)setTapOnceLock:(BOOL)arg0;
- (BOOL)tapOnceLock;
- (id)goodsService;
- (void)jumpToGoodsDetailWithGoodsModel:(id)arg0;
- (void)setGoodsService:(id)arg0;
- (void)setLiveServiceProxy:(id)arg0;
- (id)dataServiceProxy;
- (void)setDataServiceProxy:(id)arg0;
- (void)jumpToGoodsDetailBySchemaWithGoodsModel:(id)arg0 btmInfo:(id)arg1;
- (void)didShowGoodsPhotoView;
- (void)didTappedGoodsPhotoView;
- (void)trackWithEventName:(id)arg0 trackParams:(id)arg1 once:(id)arg2 jump:(BOOL)arg3 host:(id)arg4 isGoodsPhoto:(BOOL)arg5 index:(long long)arg6;
- (id)getBtmBaseIdWithIsGoodsPhoto:(BOOL)arg0 index:(long long)arg1;
- (void)videoCellTapped;
- (void)trackClickVideoCellWithClickType:(id)arg0;
- (void)openReplayViewControllerWithIndex:(long long)arg0;
- (void)openVideoViewControllerWithIndex:(long long)arg0;
- (id)getVideoIDsFromVideoTabWithIndex:(long long)arg0 range:(long long)arg1;
- (id)videoPhotoViewProductTrackParams;
- (id)getVideoIDsFromTabCardList:(id)arg0 index:(long long)arg1 range:(long long)arg2;
- (id)getBtmIDWithHost:(id)arg0 isGoodsPhoto:(BOOL)arg1 index:(long long)arg2;
- (long long)numberOfItems;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end