//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveAudienceListModel, NSArray, NSMutableDictionary, IESLiveAudienceAvatarView, CAGradientLayer, IESLiveUserSeqlistStore, NSMutableArray, UIScrollView;
@protocol IESLiveRoomService;

@interface IESLiveThreeUserSeqlistView : UIView <UIScrollViewDelegate, IESLiveRoomSeqlist> {
    BOOL _hadShowAnimation;
    BOOL _setuped;
    id<IESLiveRoomService> _liveRoomModel;
    IESLiveUserSeqlistStore *_seqListStore;
    IESLiveAudienceAvatarView *_firstUserView;
    IESLiveAudienceAvatarView *_secondUserView;
    IESLiveAudienceAvatarView *_thirdUserView;
    HTSEventContext *_trackContext;
    IESLiveAudienceListModel *_listModel;
    UIScrollView *_contentView;
    CAGradientLayer *_rightMaskLayer;
    double _oldWidth;
    NSArray *_widthConstraints;
    NSMutableArray *_trackShowList;
    NSMutableArray *_userList;
    double _recordTime;
    NSMutableDictionary *_trackInfo;
}

@property (nonatomic) BOOL hadShowAnimation;
@property (nonatomic) BOOL setuped;
@property (retain, nonatomic) id<IESLiveRoomService> liveRoomModel;
@property (retain, nonatomic) IESLiveUserSeqlistStore *seqListStore;
@property (retain, nonatomic) IESLiveAudienceAvatarView *firstUserView;
@property (retain, nonatomic) IESLiveAudienceAvatarView *secondUserView;
@property (retain, nonatomic) IESLiveAudienceAvatarView *thirdUserView;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAudienceListModel *listModel;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) CAGradientLayer *rightMaskLayer;
@property (nonatomic) double oldWidth;
@property (retain, nonatomic) NSArray *widthConstraints;
@property (retain, nonatomic) NSMutableArray *trackShowList;
@property (retain, nonatomic) NSMutableArray *userList;
@property (nonatomic) double recordTime;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithStore:(id)arg0;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)liveRoomModel;
- (void)setupSubViews;
- (void)showAnimation;
- (void)setRecordTime:(double)arg0;
- (double)recordTime;
- (void)setUserList:(id)arg0;
- (void)setLiveRoomModel:(id)arg0;
- (void)setListModel:(id)arg0;
- (void)setRightMaskLayer:(id)arg0;
- (id)rightMaskLayer;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)updateUsers:(id)arg0;
- (void)refreshAudienceRankList:(id)arg0;
- (void)refreshLiveRoomModel:(id)arg0;
- (void)setSeqListStore:(id)arg0;
- (void)setTrackShowList:(id)arg0;
- (void)setSetuped:(BOOL)arg0;
- (void)updateUsers:(id)arg0 withForceRefresh:(BOOL)arg1;
- (BOOL)setuped;
- (void)setFirstUserView:(id)arg0;
- (void)setSecondUserView:(id)arg0;
- (void)setThirdUserView:(id)arg0;
- (id)firstUserView;
- (id)secondUserView;
- (id)thirdUserView;
- (void)setWidthConstraints:(id)arg0;
- (id)seqListStore;
- (long long)showScoreType;
- (void)clickUser:(id)arg0 atIndex:(long long)arg1;
- (void)trackAvatarShowWithIndex:(long long)arg0;
- (id)widthConstraints;
- (BOOL)hadShowAnimation;
- (void)setHadShowAnimation:(BOOL)arg0;
- (id)trackShowList;
- (long long)exactlyScope;
- (BOOL)enableExactlySetting;
- (BOOL)isSelfModel:(id)arg0;
- (id)listModel;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)contentView;
- (id)containerView;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewType;
- (id)userList;
- (void)setContentView:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (double)oldWidth;
- (void)setOldWidth:(double)arg0;

@end