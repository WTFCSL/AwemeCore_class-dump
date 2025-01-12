//
//     Generated by private class-dump
//

@class UIView, NSString, UIImage, UITapGestureRecognizer, BDPUniqueID, UIImageView, UIButton, NSLayoutConstraint, UILabel;

@interface BDPLiveReservationCardView : UIView <BDPAppRouteChangeMessage> {
    BOOL _hiddenAsCommand;
    BOOL _isBooked;
    double _x;
    double _y;
    double _width;
    double _height;
    double _padding;
    long long _pageID;
    NSString *_bookingID;
    NSString *_componentId;
    long long _followState;
    id /* block */ _liveReservationBookSuccessCallback;
    long long _bookingType;
    NSString *_liveTime;
    NSString *_avatarUrl;
    NSString *_bookingTitle;
    NSString *_bookingSchema;
    NSString *_liveRoomSchema;
    NSString *_personalPageSchema;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_descriptionLabel;
    UIView *_onAirLabelContainer;
    UIView *_imageborderView;
    UIView *_borderView;
    UIView *_animationBorderView;
    UIImage *_avatarImage;
    UIButton *_reservationButton;
    BDPUniqueID *_uniqueID;
    UIImageView *_avatarView;
    long long _liveStatus;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_followButtonRightConstraint;
    NSLayoutConstraint *_statusWidthConstraint;
    UITapGestureRecognizer *_makeReservationGesture;
    UITapGestureRecognizer *_cancelReservationGesture;
    struct CGPoint { double x; double y; } _imagePoint;
}

@property (nonatomic) BOOL isBooked;
@property (nonatomic) long long bookingType;
@property (nonatomic) struct CGPoint { double x; double y; } imagePoint;
@property (copy, nonatomic) NSString *liveTime;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *bookingTitle;
@property (copy, nonatomic) NSString *bookingSchema;
@property (copy, nonatomic) NSString *liveRoomSchema;
@property (copy, nonatomic) NSString *personalPageSchema;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *onAirLabelContainer;
@property (retain, nonatomic) UIView *imageborderView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *animationBorderView;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) UIButton *reservationButton;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIImageView *avatarView;
@property (nonatomic) long long liveStatus;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *followButtonRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusWidthConstraint;
@property (retain, nonatomic) UITapGestureRecognizer *makeReservationGesture;
@property (retain, nonatomic) UITapGestureRecognizer *cancelReservationGesture;
@property (nonatomic) BOOL hiddenAsCommand;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double padding;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *bookingID;
@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) long long followState;
@property (copy, nonatomic) id /* block */ liveReservationBookSuccessCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveTime;
- (id)componentId;
- (void)setComponentId:(id)arg0;
- (void)setAvatarUrl:(id)arg0;
- (void)setLiveTime:(id)arg0;
- (id)avatarUrl;
- (void)subscribeHandler:(id)arg0 data:(id)arg1;
- (void)setLiveStatus:(long long)arg0;
- (void)setUpDescriptionLabel;
- (void)onAppRouteChangePageWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2;
- (void)setFollowState:(long long)arg0;
- (void)setUpElements;
- (void)setHiddenAsCommand:(BOOL)arg0;
- (void)setUpAvatarImageView;
- (void)getAvatarImageWithCompletion:(id /* block */)arg0;
- (id)getGestureToOpenPersonalPage;
- (void)setFollowButtonRightConstraint:(id)arg0;
- (id)followButtonRightConstraint;
- (BOOL)hiddenAsCommand;
- (id)initWithUserInfo:(id)arg0 uniqueID:(id)arg1;
- (void)setBookingID:(id)arg0;
- (void)setUpBase;
- (void)setUpBorderView;
- (void)setUpReservationButton;
- (void)setUpOnAirLabel;
- (void)setUpStatusLabel;
- (void)setUpTitleLabel;
- (void)checkLiveReservationProcess;
- (void)labelsHideWithHidden:(BOOL)arg0;
- (void)setImagePoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)setErrorInfoWithErrorCode:(long long)arg0 errorMsg:(id)arg1 errorType:(id)arg2;
- (void)fireOnErrorWithData:(id)arg0;
- (void)setLiveRoomSchema:(id)arg0;
- (void)setPersonalPageSchema:(id)arg0;
- (void)setBookingTitle:(id)arg0;
- (void)setBookingSchema:(id)arg0;
- (void)setIsBooked:(BOOL)arg0;
- (void)setBookingType:(long long)arg0;
- (void)updateLiveReservationCardIfNeeded;
- (void)checkLiveReservationWithCompletion:(id /* block */)arg0;
- (id)reservationButton;
- (id)bookingTitle;
- (id)onAirLabelContainer;
- (id)animationBorderView;
- (id)getGestureToReserveLive;
- (void)setMakeReservationGesture:(id)arg0;
- (id)getGestureToCancelReserveLive;
- (void)setCancelReservationGesture:(id)arg0;
- (void)updateStatusLabelUI;
- (void)updateReservationLabelUI;
- (id)getGestureToOpenLiveRoom;
- (void)setUpLiveAnimation;
- (BOOL)isBooked;
- (id)cancelReservationGesture;
- (id)makeReservationGesture;
- (id)statusWidthConstraint;
- (void)setAnimationBorderView:(id)arg0;
- (void)setReservationButton:(id)arg0;
- (void)setOnAirLabelContainer:(id)arg0;
- (void)setStatusWidthConstraint:(id)arg0;
- (id)getParamsForLiveReservation;
- (void)getServerResultWithIsChecking:(BOOL)arg0 isCanceling:(BOOL)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (long long)bookingType;
- (id)bookingID;
- (void)reservationEventWithParams:(id)arg0;
- (void)onTapOpenUserProfile:(id)arg0;
- (void)onTapOpenLiveRoom:(id)arg0;
- (void)onTapReserveLiveRoom:(id)arg0;
- (void)onTapCancelReserveLiveRoom:(id)arg0;
- (id)liveRoomSchema;
- (void)fireOnJumpIntoLiveRoomWithData:(id)arg0;
- (id)personalPageSchema;
- (void)fireOnJumpIntoAnchorPageWithData:(id)arg0;
- (void)fireOnBookingStateChangeWithData:(id)arg0;
- (id /* block */)liveReservationBookSuccessCallback;
- (id)bookingSchema;
- (void)setupLiveReservationWithCompletion:(id /* block */)arg0;
- (void)cancelLiveReservationWithCompletion:(id /* block */)arg0;
- (void)updateLiveReservationWithUserInfo:(id)arg0;
- (void)setLiveReservationBookSuccessCallback:(id /* block */)arg0;
- (id)imageborderView;
- (void)setImageborderView:(id)arg0;
- (void)setPadding:(double)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)leftConstraint;
- (double)height;
- (void)setLeftConstraint:(id)arg0;
- (void)setPageID:(long long)arg0;
- (void)setUniqueID:(id)arg0;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (long long)pageID;
- (void)setY:(double)arg0;
- (double)y;
- (id)descriptionLabel;
- (double)x;
- (void)setX:(double)arg0;
- (void)setWidth:(double)arg0;
- (double)padding;
- (void)setHeight:(double)arg0;
- (void)dealloc;
- (double)width;
- (void)setTitleLabel:(id)arg0;
- (long long)liveStatus;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (long long)followState;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;
- (struct CGPoint { double x0; double x1; })imagePoint;

@end
