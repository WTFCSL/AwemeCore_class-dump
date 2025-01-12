//
//     Generated by private class-dump
//

@class UIButton, NSString, HTSLiveToolbarItem, IESLiveVSAlbumSelectionButtonView, IESLiveVSAlbumViewModel;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveVSAlbumFragment : IESLiveRoomComponent <IESVSVideoPlayAction, IESLiveVSAlbumAction, IESLiveVSAlbumRouter, IESLiveRoomSlideStoreAction, IESLiveToolbarComponentHandler> {
    IESLiveVSAlbumViewModel *_viewModel;
    IESLiveVSAlbumSelectionButtonView *_selectionButtonView;
    UIButton *_nextButton;
    id<IESLiveURLSchemaHandler> _schemaHandler;
    id _notificationObserver;
    long long _orientation;
    HTSLiveToolbarItem *_vsAlbumItem;
}

@property (retain, nonatomic) IESLiveVSAlbumViewModel *viewModel;
@property (retain, nonatomic) IESLiveVSAlbumSelectionButtonView *selectionButtonView;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) id notificationObserver;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) HTSLiveToolbarItem *vsAlbumItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)handleOrientationChanged:(long long)arg0;
- (id)schemaHandler;
- (void)setSchemaHandler:(id)arg0;
- (void)hideComponent;
- (void)setupNextButton;
- (void)showComponent;
- (void)componentOrientationTransitioning:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)storeDidUpdateData;
- (void)didUpdateVSLiveRoom:(id)arg0;
- (void)didUpdateVSVideoRoom:(id)arg0;
- (void)nextButtonDidTap;
- (void)willPlayNext;
- (void)firstPlayFinished;
- (BOOL)canDraw;
- (BOOL)hasNextPeriod;
- (void)openAlbumSchema;
- (id)nextAlbumAttrText;
- (id)selectionButtonView;
- (void)setSelectionButtonView:(id)arg0;
- (BOOL)isFirstPlayOrLiveRoom;
- (id)vsAlbumItem;
- (void)setVsAlbumItem:(id)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setViewModel:(id)arg0;
- (void)setNotificationObserver:(id)arg0;
- (id)notificationObserver;
- (void)setOrientation:(long long)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)setupView;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (BOOL)hasNext;
- (void)playNext;

@end
