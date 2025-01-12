//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, NSDictionary, UIView, NSNumber, GPBMessage;

@interface HTSLiveUserPreviewConfig : NSObject <HTSLiveUserPreviewConfigAdapter> {
    BOOL _hasProfileStyle;
    BOOL _hasSmartSwitchVal;
    BOOL _isOn;
    BOOL _disableAdminButton;
    BOOL _isPreviewAnchor;
    BOOL _isInviting;
    BOOL _disableInvite;
    BOOL _isChatCommentMessage;
    BOOL _fromFallback;
    BOOL _showMask;
    BOOL _isNotInRoom;
    BOOL _isOfficalMsg;
    BOOL _isOtherLiveRoom;
    BOOL _intercomHideUserCard;
    BOOL _isStarComment;
    BOOL _isAnonymous;
    BOOL _anonymousUseToast;
    BOOL _skipPrivacyCheck;
    BOOL _isMyLive;
    unsigned long long _source;
    NSString *_enterFrom;
    NSString *_enterMethod;
    long long _requestFrom;
    long long _targetDisplayRole;
    long long _style;
    unsigned long long _myRole;
    NSDictionary *_eventParams;
    NSNumber *_reportContentID;
    NSString *_reportContent;
    NSDictionary *_reportDic;
    HTSLiveUser *_targetReportUser;
    NSDictionary *_reportUrlExtraParams;
    NSString *_followPosition;
    NSNumber *_followScene;
    NSString *_clickUserPosition;
    NSString *_ksongUserType;
    NSString *_ksongToUserType;
    NSNumber *_order;
    NSString *_rightAnchorId;
    id /* block */ _onFollowStatusChange;
    UIView *_containerView;
    HTSLiveUser *_anonymousUser;
    long long _onlyID;
    NSNumber *_publicScreenID;
    GPBMessage *_clickedMessage;
    NSString *_commentEnterPosition;
    NSDictionary *_vsCommentTrackParams;
    NSDictionary *_followParams;
}

@property (nonatomic) unsigned long long source;
@property (nonatomic) long long requestFrom;
@property (nonatomic) long long targetDisplayRole;
@property (nonatomic) BOOL hasProfileStyle;
@property (nonatomic) long long style;
@property (nonatomic) BOOL hasSmartSwitchVal;
@property (nonatomic) BOOL isOn;
@property (nonatomic) unsigned long long myRole;
@property (nonatomic) BOOL disableAdminButton;
@property (nonatomic) BOOL isPreviewAnchor;
@property (nonatomic) BOOL isInviting;
@property (nonatomic) BOOL disableInvite;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (retain, nonatomic) NSNumber *reportContentID;
@property (retain, nonatomic) NSString *reportContent;
@property (nonatomic) BOOL isChatCommentMessage;
@property (retain, nonatomic) NSDictionary *reportDic;
@property (retain, nonatomic) HTSLiveUser *targetReportUser;
@property (retain, nonatomic) NSDictionary *reportUrlExtraParams;
@property (readonly, copy, nonatomic) NSString *sourceString;
@property (readonly, copy, nonatomic) NSString *reportType;
@property (readonly, copy, nonatomic) NSString *reportShowType;
@property (readonly, copy, nonatomic) NSString *reportRequestPage;
@property (retain, nonatomic) NSString *followPosition;
@property (copy, nonatomic) NSNumber *followScene;
@property (retain, nonatomic) NSString *clickUserPosition;
@property (copy, nonatomic) NSString *ksongUserType;
@property (copy, nonatomic) NSString *ksongToUserType;
@property (retain, nonatomic) NSNumber *order;
@property (retain, nonatomic) NSString *rightAnchorId;
@property (nonatomic) BOOL fromFallback;
@property (nonatomic) BOOL showMask;
@property (nonatomic) BOOL isNotInRoom;
@property (copy, nonatomic) id /* block */ onFollowStatusChange;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isOfficalMsg;
@property (nonatomic) BOOL isOtherLiveRoom;
@property (nonatomic) BOOL intercomHideUserCard;
@property (nonatomic) BOOL isStarComment;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) BOOL anonymousUseToast;
@property (retain, nonatomic) HTSLiveUser *anonymousUser;
@property (nonatomic) long long onlyID;
@property (retain, nonatomic) NSNumber *publicScreenID;
@property (weak, nonatomic) GPBMessage *clickedMessage;
@property (retain, nonatomic) NSString *commentEnterPosition;
@property (copy, nonatomic) NSDictionary *vsCommentTrackParams;
@property (nonatomic) BOOL skipPrivacyCheck;
@property (copy, nonatomic) NSDictionary *followParams;
@property (nonatomic) BOOL isMyLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (BOOL)showMask;
- (void)setShowMask:(BOOL)arg0;
- (void)setEventParams:(id)arg0;
- (void)setRequestFrom:(long long)arg0;
- (long long)requestFrom;
- (id)reportShowType;
- (id)reportContent;
- (void)setReportContent:(id)arg0;
- (id)clickUserPosition;
- (void)setClickUserPosition:(id)arg0;
- (id)followParams;
- (void)setFollowParams:(id)arg0;
- (BOOL)disableAdminButton;
- (void)setDisableAdminButton:(BOOL)arg0;
- (BOOL)isPreviewAnchor;
- (void)setIsPreviewAnchor:(BOOL)arg0;
- (id)rightAnchorId;
- (void)setRightAnchorId:(id)arg0;
- (id)reportContentID;
- (void)setReportContentID:(id)arg0;
- (id)reportRequestPage;
- (long long)targetDisplayRole;
- (void)setTargetDisplayRole:(long long)arg0;
- (BOOL)hasProfileStyle;
- (void)setHasProfileStyle:(BOOL)arg0;
- (BOOL)hasSmartSwitchVal;
- (void)setHasSmartSwitchVal:(BOOL)arg0;
- (unsigned long long)myRole;
- (void)setMyRole:(unsigned long long)arg0;
- (BOOL)isInviting;
- (void)setIsInviting:(BOOL)arg0;
- (BOOL)disableInvite;
- (void)setDisableInvite:(BOOL)arg0;
- (BOOL)isChatCommentMessage;
- (void)setIsChatCommentMessage:(BOOL)arg0;
- (id)reportDic;
- (void)setReportDic:(id)arg0;
- (id)targetReportUser;
- (void)setTargetReportUser:(id)arg0;
- (id)reportUrlExtraParams;
- (void)setReportUrlExtraParams:(id)arg0;
- (id)followPosition;
- (void)setFollowPosition:(id)arg0;
- (id)followScene;
- (void)setFollowScene:(id)arg0;
- (id)ksongUserType;
- (void)setKsongUserType:(id)arg0;
- (id)ksongToUserType;
- (void)setKsongToUserType:(id)arg0;
- (BOOL)fromFallback;
- (void)setFromFallback:(BOOL)arg0;
- (BOOL)isNotInRoom;
- (void)setIsNotInRoom:(BOOL)arg0;
- (id /* block */)onFollowStatusChange;
- (void)setOnFollowStatusChange:(id /* block */)arg0;
- (BOOL)isOfficalMsg;
- (void)setIsOfficalMsg:(BOOL)arg0;
- (BOOL)isOtherLiveRoom;
- (void)setIsOtherLiveRoom:(BOOL)arg0;
- (BOOL)intercomHideUserCard;
- (void)setIntercomHideUserCard:(BOOL)arg0;
- (BOOL)isStarComment;
- (void)setIsStarComment:(BOOL)arg0;
- (BOOL)anonymousUseToast;
- (void)setAnonymousUseToast:(BOOL)arg0;
- (id)anonymousUser;
- (void)setAnonymousUser:(id)arg0;
- (long long)onlyID;
- (void)setOnlyID:(long long)arg0;
- (id)publicScreenID;
- (void)setPublicScreenID:(id)arg0;
- (id)clickedMessage;
- (void)setClickedMessage:(id)arg0;
- (id)commentEnterPosition;
- (void)setCommentEnterPosition:(id)arg0;
- (id)vsCommentTrackParams;
- (void)setVsCommentTrackParams:(id)arg0;
- (BOOL)skipPrivacyCheck;
- (void)setSkipPrivacyCheck:(BOOL)arg0;
- (BOOL)isMyLive;
- (void)setIsMyLive:(BOOL)arg0;
- (BOOL)isAnonymous;
- (id)order;
- (long long)style;
- (void)setOrder:(id)arg0;
- (id)init;
- (unsigned long long)source;
- (void).cxx_destruct;
- (id)reportType;
- (BOOL)isOn;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setSource:(unsigned long long)arg0;
- (void)setIsAnonymous:(BOOL)arg0;
- (void)setStyle:(long long)arg0;
- (id)sourceString;
- (void)setIsOn:(BOOL)arg0;
- (id)eventParams;

@end
