//
//     Generated by private class-dump
//

@class IESLivePcPadList, NSString, HTSLiveToolbarItem, UIImageView, UIView, IESLivePcPadPlayHandler, IESLivePopupItem;
@protocol IESLiveAnimatedViewProtocol, IESLiveURLSchemaHandler;

@interface IESLivePcPadPlayFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, HTSLiveAudienceActions> {
    BOOL _pcPlayV2;
    HTSLiveToolbarItem *_combineItem;
    HTSLiveToolbarItem *_landscapeItem;
    HTSLiveToolbarItem *_pcItem;
    UIView<IESLiveAnimatedViewProtocol> *_pcAnim;
    UIImageView *_pcIcon;
    HTSLiveToolbarItem *_padItem;
    IESLivePcPadPlayHandler *_handler;
    id<IESLiveURLSchemaHandler> _urlHandler;
    IESLivePopupItem *_popupItem;
    IESLivePcPadList *_list;
    IESLivePopupItem *_padCastLoginPopupItem;
}

@property (retain, nonatomic) HTSLiveToolbarItem *combineItem;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeItem;
@property (retain, nonatomic) HTSLiveToolbarItem *pcItem;
@property (retain, nonatomic) UIView<IESLiveAnimatedViewProtocol> *pcAnim;
@property (retain, nonatomic) UIImageView *pcIcon;
@property (retain, nonatomic) HTSLiveToolbarItem *padItem;
@property (retain, nonatomic) IESLivePcPadPlayHandler *handler;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) IESLivePcPadList *list;
@property (retain, nonatomic) IESLivePopupItem *padCastLoginPopupItem;
@property (nonatomic) BOOL pcPlayV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)liveDidCloseAllRoom;
- (id)landscapeItem;
- (void)showBubbleGuide;
- (void)setLandscapeItem:(id)arg0;
- (void)setPopupItem:(id)arg0;
- (id)popupItem;
- (void)setPcPlayV2:(BOOL)arg0;
- (void)refreshCombineItem;
- (BOOL)enableBubbleGuide;
- (void)pushToDevice:(id)arg0;
- (void)hideList;
- (void)showPadCastLoginViewWithDevice:(id)arg0 state:(id)arg1;
- (void)showListWithDeviceList:(id)arg0;
- (void)finishCombineSearch;
- (void)startFetchPadDataWith:(id /* block */)arg0;
- (void)startFetchQRCode;
- (id)padScanSchema;
- (id)pcIcon;
- (id)pcAnim;
- (void)setPcAnim:(id)arg0;
- (id)padCastLoginPopupItem;
- (void)setPadCastLoginPopupItem:(id)arg0;
- (void)padCastLoginRequestWithDevice:(id)arg0 state:(id)arg1 nickname:(id)arg2;
- (BOOL)pcPlayV2;
- (id)combineItem;
- (void)setCombineItem:(id)arg0;
- (void)didClickEntry;
- (void)didSelectedDevice:(id)arg0;
- (void)didClickRefresh;
- (void)showPcEntryAnim:(BOOL)arg0;
- (void)showPcHelpView;
- (id)pcItem;
- (void)setPcItem:(id)arg0;
- (void)setPcIcon:(id)arg0;
- (id)padItem;
- (void)setPadItem:(id)arg0;
- (id)urlHandler;
- (void).cxx_destruct;
- (id)list;
- (void)setList:(id)arg0;
- (id)getItem:(BOOL)arg0;
- (void)setHandler:(id)arg0;
- (id)handler;
- (void)messageReceived:(id)arg0;
- (void)setUrlHandler:(id)arg0;

@end
