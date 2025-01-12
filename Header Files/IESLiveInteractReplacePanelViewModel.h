//
//     Generated by private class-dump
//

@class IESLiveInteractReplacePanelAPi, IESLiveInteractReplacePanelUIAdapter, NSTimer, NSArray, HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLiveInteractReplacePanelViewModel : NSObject <IESLiveSocialInteractAction, IESLiveMultiAudioAction> {
    BOOL _comfirmEnable;
    BOOL _isAudio;
    BOOL _banPingForOnce;
    BOOL _hasComfirmed;
    BOOL _abEnable;
    NSArray *_slotModels;
    long long _selectMicIndex;
    unsigned long long _panelStatus;
    HTSEventContext *_eventContext;
    NSString *_popTitle;
    id /* block */ _popclickBlock;
    IESLiveInteractReplacePanelUIAdapter *_adapter;
    IESLiveInteractReplacePanelAPi *_api;
    id<IESLiveRoomService> _room;
    id<IESLiveInteractUserModel> _guest;
    long long _originSelectIndex;
    long long _currentSelectIndex;
    NSTimer *_pingTimer;
    struct CGSize { double width; double height; } _panelSize;
}

@property (retain, nonatomic) IESLiveInteractReplacePanelUIAdapter *adapter;
@property (retain, nonatomic) IESLiveInteractReplacePanelAPi *api;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveInteractUserModel> guest;
@property (nonatomic) long long originSelectIndex;
@property (nonatomic) long long currentSelectIndex;
@property (retain, nonatomic) NSTimer *pingTimer;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) BOOL banPingForOnce;
@property (nonatomic) BOOL hasComfirmed;
@property (nonatomic) BOOL abEnable;
@property (retain, nonatomic) NSArray *slotModels;
@property (nonatomic) struct CGSize { double width; double height; } panelSize;
@property (nonatomic) long long selectMicIndex;
@property (nonatomic) unsigned long long panelStatus;
@property (nonatomic) BOOL comfirmEnable;
@property (readonly, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *popTitle;
@property (copy, nonatomic) id /* block */ popclickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSeatExchangeWithCurrentLayoutWithLayout:(id)arg0;

- (void)didSetAttachingDIContext;
- (long long)currentSelectIndex;
- (id)trackParam;
- (void)hidePanel;
- (void)setIsAudio:(BOOL)arg0;
- (void)setCurrentSelectIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })panelSize;
- (void)currentLayoutDidChangedFrom:(id)arg0 to:(id)arg1;
- (void)multiAudioDidChangeTeamFightLayout:(BOOL)arg0;
- (void)setPanelSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)panelStatus;
- (void)setPanelStatus:(unsigned long long)arg0;
- (id)initWithGuest:(id)arg0 isAudio:(BOOL)arg1 eventContext:(id)arg2;
- (id)popTitle;
- (id /* block */)popclickBlock;
- (double)panelTopGap;
- (double)panelDownGap;
- (struct CGSize { double x0; double x1; })popUpSize;
- (id)slotModels;
- (void)onCellClick:(id)arg0;
- (void)comfirmBtnClick;
- (BOOL)abEnable;
- (void)setPopTitle:(id)arg0;
- (id)panelViewWithCurModel;
- (void)closePanelCompletion;
- (void)setPopclickBlock:(id /* block */)arg0;
- (void)setOriginSelectIndex:(long long)arg0;
- (void)setSlotModels:(id)arg0;
- (long long)originSelectIndex;
- (void)requestPanelInfo;
- (void)initSelecting;
- (void)comfirmChange;
- (void)setComfirmEnable:(BOOL)arg0;
- (void)setBanPingForOnce:(BOOL)arg0;
- (BOOL)banPingForOnce;
- (void)p_trackConfirmClick;
- (void)p_trackReplaceFail:(id)arg0;
- (void)setHasComfirmed:(BOOL)arg0;
- (void)p_trackReplaceSuccess;
- (BOOL)hasComfirmed;
- (long long)selectMicIndex;
- (void)setSelectMicIndex:(long long)arg0;
- (BOOL)comfirmEnable;
- (void)setAbEnable:(BOOL)arg0;
- (void).cxx_destruct;
- (id)pingTimer;
- (void)setGuest:(id)arg0;
- (id)eventContext;
- (id)adapter;
- (void)setPingTimer:(id)arg0;
- (id)guest;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setAdapter:(id)arg0;
- (BOOL)isAudio;
- (id)api;
- (void)setApi:(id)arg0;

@end
