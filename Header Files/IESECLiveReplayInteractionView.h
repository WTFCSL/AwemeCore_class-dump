//
//     Generated by private class-dump
//

@class IESECLiveReplayPlayControlView, IESECLiveReplayMaskComponentView, UILabel, IESECReplayGoodsHorizontalListView, IESECLiveReplayDataStore, UIViewController, IESECLiveRoomButton, NSMutableArray, IESECLiveReplayLiveCardView, NSString, IESECLiveReplayProgressComponentView, IESECLiveReplayAvatarComponentView, UIImageView;

@interface IESECLiveReplayInteractionView : UIView <UIGestureRecognizerDelegate, IESECReplayGoodsHorizontalListViewDelegate, IESECLiveReplayInteractionViewProtocol, IESECLiveReplayDataStoreOwner> {
    BOOL _hasClickedBackButton;
    IESECLiveReplayProgressComponentView *_progressComponentView;
    IESECLiveReplayDataStore *_dataStore;
    UIViewController *_parentVC;
    id /* block */ _closeHandler;
    IESECLiveReplayLiveCardView *_promotionView;
    IESECReplayGoodsHorizontalListView *_promotionListView;
    IESECLiveReplayMaskComponentView *_maskComponentView;
    IESECLiveReplayPlayControlView *_playControlView;
    IESECLiveReplayAvatarComponentView *_avatarView;
    IESECLiveRoomButton *_roomButton;
    UIImageView *_playImageView;
    UILabel *_navLabel;
    NSMutableArray *_componentViews;
}

@property (retain, nonatomic) IESECLiveReplayLiveCardView *promotionView;
@property (retain, nonatomic) IESECReplayGoodsHorizontalListView *promotionListView;
@property (retain, nonatomic) IESECLiveReplayMaskComponentView *maskComponentView;
@property (retain, nonatomic) IESECLiveReplayPlayControlView *playControlView;
@property (retain, nonatomic) IESECLiveReplayAvatarComponentView *avatarView;
@property (retain, nonatomic) IESECLiveRoomButton *roomButton;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UILabel *navLabel;
@property (nonatomic) BOOL hasClickedBackButton;
@property (retain, nonatomic) NSMutableArray *componentViews;
@property (retain, nonatomic) IESECLiveReplayProgressComponentView *progressComponentView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)arg0;
- (void)containerViewWillDisappear:(BOOL)arg0;
- (void)addSubviews;
- (void)setCloseHandler:(id /* block */)arg0;
- (id /* block */)closeHandler;
- (void)configAvatar;
- (id)promotionView;
- (void)setPromotionView:(id)arg0;
- (id)playControlView;
- (void)setPlayControlView:(id)arg0;
- (void)showNavbarTitle;
- (void)configPlayImage;
- (void)dataStoreChanged;
- (void)updateStoreOnly;
- (void)updateProgress:(double)arg0 totalDuration:(double)arg1;
- (void)showPlayIcon:(BOOL)arg0;
- (void)videoDidFinishPlay;
- (void)followStatusChange:(long long)arg0;
- (void)backGuideDidAppear;
- (void)backGuideDidDisappear;
- (id)maskComponentView;
- (id)progressComponentView;
- (id)promotionListView;
- (void)liveRoomClick;
- (void)setHasClickedBackButton:(BOOL)arg0;
- (id)roomButton;
- (void)showRoomButtonIfNeed;
- (id)navLabel;
- (void)showViewInParent:(id)arg0;
- (void)triggerGoBack;
- (void)setProgressComponentView:(id)arg0;
- (BOOL)hasClickedBackButton;
- (void)setPromotionListView:(id)arg0;
- (void)setMaskComponentView:(id)arg0;
- (void)setRoomButton:(id)arg0;
- (void)setNavLabel:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)goBack;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)setDataStore:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)dataStore;
- (void)setComponentViews:(id)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;
- (id)parentVC;
- (void)setParentVC:(id)arg0;
- (id)componentViews;

@end
