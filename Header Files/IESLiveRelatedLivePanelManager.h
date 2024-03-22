//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, UIView, NSMutableArray, IESLiveRelatedLivePortraitPanel;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveRelatedLivePanelManager : NSObject <HTSLiveStreamPlayerAction> {
    HTSEventContext *_trackContext;
    id /* block */ _userInteractAction;
    id<IESLiveRoomServiceAdapter> _room;
    NSMutableArray *_panelTabs;
    IESLiveRelatedLivePortraitPanel *_portraitPanelView;
    UIView *_popuoPanelView;
    UIView *_playerScalePanelView;
    unsigned long long _currentPanelType;
    id /* block */ _dismissHandler;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) NSMutableArray *panelTabs;
@property (retain, nonatomic) IESLiveRelatedLivePortraitPanel *portraitPanelView;
@property (retain, nonatomic) UIView *popuoPanelView;
@property (retain, nonatomic) UIView *playerScalePanelView;
@property (nonatomic) unsigned long long currentPanelType;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ userInteractAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)onCameraWillChangeTo:(id)arg0 source:(long long)arg1;
- (void)onRoomStyleWillChange:(BOOL)arg0 callTrace:(id)arg1;
- (void)setCurrentPanelType:(unsigned long long)arg0;
- (unsigned long long)currentPanelType;
- (void)updateRoom:(id)arg0;
- (id /* block */)userInteractAction;
- (void)setUserInteractAction:(id /* block */)arg0;
- (void)closeRelatedLivePanel;
- (void)addPanelTab:(id)arg0;
- (void)removePanelTab:(id)arg0;
- (void)openRelatedLivePanel:(unsigned long long)arg0 dismissCompletion:(id /* block */)arg1;
- (id)panelTabs;
- (void)openPortraitPanel;
- (void)openPopupPanel;
- (void)openPlayerScalePanel;
- (void)setPortraitPanelView:(id)arg0;
- (id)portraitPanelView;
- (void)setPopuoPanelView:(id)arg0;
- (id)popuoPanelView;
- (void)tr_headerChange:(id)arg0;
- (void)closePopupPanel;
- (void)setPlayerScalePanelView:(id)arg0;
- (id)playerScalePanelView;
- (void)closePortraitPanelAnimation:(BOOL)arg0;
- (void)closePlayerScalePanel;
- (void)setPanelTabs:(id)arg0;
- (void).cxx_destruct;
- (void)setDismissHandler:(id /* block */)arg0;
- (id /* block */)dismissHandler;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
