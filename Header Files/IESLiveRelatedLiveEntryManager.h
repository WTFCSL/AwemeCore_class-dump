//
//     Generated by private class-dump
//

@class NSString, UIImage, HTSLiveToolbarItem, IESLiveRelatedLivePortraitEntryView, IESLiveRelatedLiveBaseBtn, NSMutableArray, IESLiveRelatedLiveTabsEntryView, IESLiveRelatedLiveEntryItem;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveRelatedLiveEntryManager : NSObject <HTSLiveStreamPlayerAction, IESLivePayCardAction, IESLiveToolbarComponentHandler, IESLiveRelatedEntryManagerRouter> {
    BOOL _isShowPayCard;
    BOOL _updateEntryInStreamChange;
    unsigned long long _currentEntryState;
    IESLiveRelatedLiveEntryItem *_currentEntryItem;
    id<IESLiveRoomServiceAdapter> _room;
    NSMutableArray *_entryItemArray;
    IESLiveRelatedLivePortraitEntryView *_portraitEntryView;
    IESLiveRelatedLiveTabsEntryView *_portraitTabView;
    IESLiveRelatedLiveBaseBtn *_landscapeEntryView;
    HTSLiveToolbarItem *_toolbarItem;
    UIImage *_themeImage;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) NSMutableArray *entryItemArray;
@property (retain, nonatomic) IESLiveRelatedLivePortraitEntryView *portraitEntryView;
@property (retain, nonatomic) IESLiveRelatedLiveTabsEntryView *portraitTabView;
@property (retain, nonatomic) IESLiveRelatedLiveBaseBtn *landscapeEntryView;
@property (nonatomic) BOOL isShowPayCard;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) UIImage *themeImage;
@property (nonatomic) BOOL updateEntryInStreamChange;
@property (nonatomic) unsigned long long currentEntryState;
@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *currentEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)toolbarComponentRemovedReason:(unsigned long long)arg0 extra:(id)arg1;
- (void)toolbarComponentThemeRefresh:(id)arg0;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)onCameraWillChangeTo:(id)arg0 source:(long long)arg1;
- (void)onCameraDidChangeTo:(id)arg0 source:(long long)arg1;
- (void)onRoomStyleDidChange:(BOOL)arg0 callTrace:(id)arg1;
- (void)postHasSubCamera:(id)arg0 stage:(long long)arg1;
- (void)playerWillPlayInSmallWindow;
- (void)playerDidEndplayInSmallWindow;
- (void)hideComponent;
- (id)landscapeEntryView;
- (void)setLandscapeEntryView:(id)arg0;
- (void)showComponent;
- (void)updateRoom:(id)arg0;
- (void)setThemeImage:(id)arg0;
- (void)payCardShowStatusChange:(BOOL)arg0;
- (BOOL)needChangeCameraEntryInStreamPlayer;
- (void)updateEntryVisible;
- (void)trackerVSSubCameraPullStreamFirstFrame:(id)arg0;
- (void)hideAllEntryView;
- (id)currentEntryItem;
- (void)showEntryView;
- (id)entryItemArray;
- (void)setCurrentEntryItem:(id)arg0;
- (void)removeAllEntryView;
- (void)updateEntryTitleIfNeed;
- (id)portraitEntryView;
- (id)portraitTabView;
- (unsigned long long)currentEntryState;
- (BOOL)isShowPayCard;
- (unsigned long long)checkEntryState;
- (void)setCurrentEntryState:(unsigned long long)arg0;
- (void)showPortraitEntryView;
- (void)showPortraitTabsEntryView;
- (void)showLandscapeEntryView;
- (void)showToolbarEntryView;
- (void)setPortraitEntryView:(id)arg0;
- (void)updatePortraitEntryViewConstraints;
- (void)setPortraitTabView:(id)arg0;
- (void)updatePortraitTabsEntryViewConstraints;
- (void)landscapeEntryViewDidClick;
- (void)setUpdateEntryInStreamChange:(BOOL)arg0;
- (void)p_handlePadRotaionChange;
- (BOOL)updateEntryInStreamChange;
- (void)addEntryItem:(id)arg0;
- (void)removeEntryItem:(id)arg0;
- (void)setEntryItemArray:(id)arg0;
- (void)setIsShowPayCard:(BOOL)arg0;
- (void).cxx_destruct;
- (id)toolbarItem;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setToolbarItem:(id)arg0;
- (id)themeImage;
- (id)initWithRoom:(id)arg0;

@end