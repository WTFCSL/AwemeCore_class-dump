//
//     Generated by private class-dump
//

@class UITableViewCell, NSString, UIView, IESLiveRoomMQEventReportApi, AWELivePreCardViewModel, AWEAwemeModel, NSDictionary, UILabel;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionLongPressDelegate, AWEPlayInteractionViewControllerProtocol, IESLiveDI, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWELivePreCardViewController : UIViewController <AWEFeedTableViewCellViewControllerProtocol> {
    NSString *_referString;
    id<AWEFeedTableViewCellControllerPlayerDelegate> _playerDelegate;
    long long _indexPath;
    AWEAwemeModel *_model;
    long long _type;
    NSDictionary *_extTrackLog;
    id<IESLiveDI> _roomDI;
    NSString *_leaveAction;
    long long _cardType;
    AWELivePreCardViewModel *_cardViewModel;
    UIView *_cardView;
    IESLiveRoomMQEventReportApi *_reportApi;
    UIView *_backgroundView;
    UILabel *_tipLabel;
    UIView *_contentContainer;
}

@property (retain, nonatomic) id<IESLiveDI> roomDI;
@property (copy, nonatomic) NSString *leaveAction;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) AWELivePreCardViewModel *cardViewModel;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) IESLiveRoomMQEventReportApi *reportApi;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *contentContainer;
@property (weak, nonatomic) id<AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long type;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionLongPressDelegate, AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *superCell;
@property (copy, nonatomic) NSDictionary *extTrackLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setPlayerDelegate:(id)arg0;
- (id)playerDelegate;
- (id)currentUserId;
- (double)cardHeight;
- (id)extTrackLog;
- (void)setExtTrackLog:(id)arg0;
- (id)roomDI;
- (void)setRoomDI:(id)arg0;
- (id)commonTrackContext;
- (BOOL)isFromHomepageFamiliar;
- (BOOL)isFollow;
- (BOOL)isUserLinkMicRoom;
- (void)coverDidClick;
- (void)setLeaveAction:(id)arg0;
- (id)cardViewModel;
- (void)p_trackLiveShow;
- (void)setCardViewModel:(id)arg0;
- (id)tagInfoForTrack;
- (id)p_checkParams:(id)arg0 withParamsList:(id)arg1;
- (id)p_extraTrackParamsForAggregateModels;
- (id)inviteModeForTrackByBattleSettings:(id)arg0;
- (void)trackLiveCoverShow:(id)arg0;
- (void)iesLiveTrackEvent:(id)arg0 params:(id)arg1;
- (id)leaveAction;
- (id)reportApi;
- (void)setReportApi:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)model;
- (void)setIndexPath:(long long)arg0;
- (void)stop;
- (long long)type;
- (long long)indexPath;
- (void)setType:(long long)arg0;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)setBackgroundView:(id)arg0;
- (id)contentContainer;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (long long)cardType;
- (void)setCardType:(long long)arg0;
- (void)setContentContainer:(id)arg0;
- (double)cardWidth;

@end