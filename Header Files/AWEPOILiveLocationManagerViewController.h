//
//     Generated by private class-dump
//

@class AWEPOILiveDetailViewController, AWEPOILiveLocationManagerEmtpyView, NSString, AWEPOILiveRoomModel, UILabel, UIView, UIButton;

@interface AWEPOILiveLocationManagerViewController : UIViewController <AWEPOILiveDetailViewControllerDelegate> {
    unsigned long long _scene;
    id /* block */ _willHideBlock;
    id /* block */ _poiIDChangedBlock;
    unsigned long long _role;
    AWEPOILiveRoomModel *_room;
    UIView *_containerView;
    UILabel *_titleLabel;
    UIButton *_manageButton;
    AWEPOILiveLocationManagerEmtpyView *_emptyView;
    AWEPOILiveDetailViewController *_detailViewController;
}

@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) AWEPOILiveRoomModel *room;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *manageButton;
@property (retain, nonatomic) AWEPOILiveLocationManagerEmtpyView *emptyView;
@property (retain, nonatomic) AWEPOILiveDetailViewController *detailViewController;
@property (readonly, nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ willHideBlock;
@property (copy, nonatomic) id /* block */ poiIDChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)poiID;
- (id)manageButton;
- (void)setManageButton:(id)arg0;
- (id)initWithScene:(unsigned long long)arg0 liveRoom:(id)arg1;
- (void)setWillHideBlock:(id /* block */)arg0;
- (void)setPoiIDChangedBlock:(id /* block */)arg0;
- (void)loadUI;
- (void)poiLiveDetailContentInfoDidFetched:(id)arg0 haveService:(BOOL)arg1;
- (id /* block */)poiIDChangedBlock;
- (void)requestRoomBindPOI:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)tapOnView:(id)arg0;
- (void)p_addEmptyViewWithContentHeight:(double)arg0;
- (void)p_addPOIContentFrameWithContentHeight:(double)arg0;
- (id /* block */)willHideBlock;
- (void)commitRoom:(id)arg0 poiID:(id)arg1 update:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)manageButtonDidPressed:(id)arg0;
- (void)addLocationDidPressed:(id)arg0;
- (void)p_showAddLocationVC;
- (void)updateLocation:(id)arg0 poiName:(id)arg1;
- (void)switchToNewLocation;
- (void)removeCurrentLocation;
- (id)detailViewController;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setRole:(unsigned long long)arg0;
- (void)setContainerView:(id)arg0;
- (unsigned long long)role;
- (id)containerView;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (unsigned long long)scene;
- (void)setDetailViewController:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;

@end
