//
//     Generated by private class-dump
//

@class AWETheaterMoreFeedSectionItem, AWETheaterMoreFeedMetaView, NSDictionary, AWETheaterPageContext, AWETheaterPlayVideoViewController, AWETheaterMoreFeedControlView, AWETheaterMoreFeedCoverView, AWEVideoScreenRecordingBlocker, AWETheaterTracker;

@interface AWETheaterMoreFeedSectionCell : UICollectionViewCell {
    BOOL _isShowingScreenBlockToast;
    BOOL _isCollecting;
    BOOL _isAppointing;
    id /* block */ _moreFeedClick;
    AWETheaterTracker *_tracker;
    id /* block */ _collectClick;
    id /* block */ _detailSchemaCallBack;
    AWETheaterMoreFeedSectionItem *_sectionItem;
    AWETheaterPageContext *_context;
    AWETheaterPlayVideoViewController *_videoController;
    AWETheaterMoreFeedControlView *_controlView;
    AWETheaterMoreFeedCoverView *_coverView;
    AWETheaterMoreFeedMetaView *_metaView;
    NSDictionary *_logExtraDict;
    AWEVideoScreenRecordingBlocker *_screenCaptureBlocker;
}

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterMoreFeedSectionItem *sectionItem;
@property (retain, nonatomic) AWETheaterPlayVideoViewController *videoController;
@property (retain, nonatomic) AWETheaterMoreFeedControlView *controlView;
@property (retain, nonatomic) AWETheaterMoreFeedCoverView *coverView;
@property (retain, nonatomic) AWETheaterMoreFeedMetaView *metaView;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEVideoScreenRecordingBlocker *screenCaptureBlocker;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (nonatomic) BOOL isCollecting;
@property (nonatomic) BOOL isAppointing;
@property (copy, nonatomic) id /* block */ moreFeedClick;
@property (retain, nonatomic) AWETheaterTracker *tracker;
@property (copy, nonatomic) id /* block */ collectClick;
@property (copy, nonatomic) id /* block */ detailSchemaCallBack;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)bindObserver;
- (void)setIsCollecting:(BOOL)arg0;
- (void)updateLogExtraDict:(id)arg0;
- (void)handlePushPermissionChangedWithNotification:(id)arg0;
- (BOOL)isShowingScreenBlockToast;
- (void)setIsShowingScreenBlockToast:(BOOL)arg0;
- (void)setScreenCaptureBlocker:(id)arg0;
- (id)screenCaptureBlocker;
- (void)recordPlaybackTime;
- (void)initSubviews;
- (void)showPushAlertIfNeed;
- (void)trackFavouriteVideo:(id)arg0 isCancel:(BOOL)arg1;
- (void)configWithSectionItem:(id)arg0 context:(id)arg1 logExtraDict:(id)arg2;
- (void)resetPlaybackTime;
- (void)trackHighlightPlay;
- (void)changeAppointmentStatus:(id)arg0;
- (id)metaView;
- (void)setMetaView:(id)arg0;
- (void)configVideoController:(id)arg0;
- (void)showCover;
- (void)trackShowAppointment:(BOOL)arg0;
- (void)trackShowFavoriteVideo:(BOOL)arg0;
- (void)seekPlaybackTime;
- (void)checkShouldShowPaymentFinishView;
- (id /* block */)moreFeedClick;
- (void)gotoLongVideoDetailPage;
- (void)gotoPlayletDetailPage;
- (void)didChangeAppointmentStatus:(id)arg0;
- (id /* block */)detailSchemaCallBack;
- (void)setIsAppointing:(BOOL)arg0;
- (BOOL)shouldPaymentChargePreviewConfig;
- (double)calculateStartTime;
- (id /* block */)collectClick;
- (void)collectPlaylet;
- (void)collectLongVideoAlbum;
- (void)trackClickAppointment;
- (BOOL)isAppointing;
- (void)trackClickAppointmentResult:(long long)arg0;
- (id)appointmentParams;
- (void)handlePlayerTap;
- (void)handleMetaViewTap;
- (void)clickCollection;
- (void)clickAppointmentButton;
- (void)trackClickVolumeButton;
- (void)trackVideoPlayFinish;
- (void)trackShowVolumeButton;
- (void)hiddenCover;
- (id)currentTrailStatus;
- (void)updateSoundImageView;
- (void)trackFinishPaymentTrialEnd;
- (void)setMoreFeedClick:(id /* block */)arg0;
- (void)setCollectClick:(id /* block */)arg0;
- (void)setDetailSchemaCallBack:(id /* block */)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (id)controlView;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)reset;
- (void)initConstraints;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (void)handleTap;
- (void)setControlView:(id)arg0;
- (id)sectionItem;
- (void)setSectionItem:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;
- (BOOL)isCollecting;

@end