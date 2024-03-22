//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEAwemeModel, UIView, AWEUserModel, NSDictionary;
@protocol AWECompanyLinkAreaViewDelegate;

@interface AWECompanyLinkAreaView : UIView <AWECompanyLinkAreaView> {
    NSString *_challengeID;
    id<AWECompanyLinkAreaViewDelegate> _delegate;
    double _realHeight;
    double _realWidth;
    double _hitTestBottomExpand;
    NSDictionary *_trackerParam;
    AWEAwemeModel *_awemeModel;
    AWEUserModel *_userModel;
    NSString *_userID;
    NSString *_refer;
    NSArray *_linkList;
    UIView *_backgroundView;
    long long _scene;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSArray *linkList;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *challengeID;
@property (weak, nonatomic) id<AWECompanyLinkAreaViewDelegate> delegate;
@property (nonatomic) double realWidth;
@property (nonatomic) double realHeight;
@property (nonatomic) double hitTestBottomExpand;
@property (copy, nonatomic) NSDictionary *trackerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNewProfileUIStyle;
+ (BOOL)isSame:(id)arg0 with:(id)arg1;
+ (id)createBtnWithLink:(id)arg0 width:(double)arg1 height:(double)arg2 pointX:(double)arg3 pointY:(double)arg4 index:(long long)arg5 font:(id)arg6 scene:(long long)arg7 titleColor:(id)arg8;
+ (void)trackEventWithTag:(id)arg0 linkModel:(id)arg1 referString:(id)arg2 userID:(id)arg3 attributes:(id)arg4 awemeModel:(id)arg5 userModel:(id)arg6 commonTrackDict:(id)arg7;
+ (void)openLink:(id)arg0 refer:(id)arg1 challengeId:(id)arg2 smartPhoneModel:(id)arg3 awemeModel:(id)arg4 secUserID:(id)arg5;
+ (void)trackEventWithTag:(id)arg0 linkModel:(id)arg1 relatedComponentValue:(id)arg2 referString:(id)arg3 userID:(id)arg4 attributes:(id)arg5 awemeModel:(id)arg6 userModel:(id)arg7 commonTrackDict:(id)arg8;
+ (id)getIconForLink:(long long)arg0 inScene:(long long)arg1;
+ (id)createBtnWithImage:(id)arg0 title:(id)arg1 width:(double)arg2 height:(double)arg3 pointX:(double)arg4 pointY:(double)arg5 index:(long long)arg6 font:(id)arg7 scene:(long long)arg8 titleColor:(id)arg9;
+ (id)buttonTitleColorForScene:(long long)arg0;
+ (id)buttonBackgroundColorForScene:(long long)arg0;
+ (void)setupEdgeInsetsForButton:(id)arg0;
+ (id)makeSmartPhoneConfigWithCommonPhone:(id)arg0 awemeModel:(id)arg1 secUserModel:(id)arg2;
+ (void)trackEventWithTag:(id)arg0 link:(long long)arg1 subtype:(unsigned long long)arg2 trackerLinkType:(id)arg3 relatedComponentValue:(id)arg4 referString:(id)arg5 userID:(id)arg6 attributes:(id)arg7 awemeModel:(id)arg8 userModel:(id)arg9 commonTrackDict:(id)arg10;
+ (id)joinEnterpriseParamsIfNeeded:(id)arg0 aweme:(id)arg1;
+ (void)transferToWebView:(id)arg0 refer:(id)arg1 eventID:(id)arg2 creativeID:(id)arg3 logExtra:(id)arg4;
+ (id)makeAddInfoButton;
+ (id)getIconNameForLink:(long long)arg0 inScene:(long long)arg1;
+ (id)createBtnWithImage:(id)arg0 title:(id)arg1 width:(double)arg2 height:(double)arg3 pointX:(double)arg4 pointY:(double)arg5 index:(long long)arg6 font:(id)arg7 scene:(long long)arg8;
+ (void)callSmartPhoneWithCommonPhone:(id)arg0 awemeModel:(id)arg1 secUserModel:(id)arg2;
+ (double)widthForLinkTitle:(id)arg0;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)setRefer:(id)arg0;
- (id)refer;
- (double)realHeight;
- (void)setRealHeight:(double)arg0;
- (double)configWithLinkList:(id)arg0 awemeModel:(id)arg1 userID:(id)arg2 isLogSent:(BOOL)arg3 inScene:(long long)arg4 needBackground:(BOOL)arg5;
- (double)configWithLinkList:(id)arg0 awemeModel:(id)arg1 userModel:(id)arg2 userID:(id)arg3 isLogSent:(BOOL)arg4 inScene:(long long)arg5 isCurrentUser:(BOOL)arg6 needBackground:(BOOL)arg7;
- (double)configWithLinkList:(id)arg0 awemeModel:(id)arg1 userModel:(id)arg2 userID:(id)arg3 isLogSent:(BOOL)arg4 inScene:(long long)arg5 isCurrentUser:(BOOL)arg6 needBackground:(BOOL)arg7 titleColor:(id)arg8;
- (double)checkCurrentUser:(BOOL)arg0 scene:(long long)arg1 linkList:(id)arg2;
- (id)linkList;
- (id)challengeSceneFont;
- (void)setLinkList:(id)arg0;
- (double)challengeSceneButtonWidth;
- (BOOL)linkListShouldDotTruncation;
- (BOOL)linkTypeCanEdit:(long long)arg0;
- (void)enterBusinessEditPage:(id)arg0;
- (void)linkLabelClicked:(id)arg0;
- (double)hitTestBottomExpand;
- (id)trackerParam;
- (void)p_trackGameDownloadIfNeededWithLinkModel:(id)arg0 forShow:(BOOL)arg1;
- (double)realWidth;
- (void)setRealWidth:(double)arg0;
- (void)showEditButtonAtPointX:(double)arg0 pointY:(double)arg1;
- (void)_linkLabelClicked:(id)arg0 openLink:(BOOL)arg1;
- (id)getRelatedComponentValue:(id)arg0;
- (double)configWithLinkList:(id)arg0 awemeModel:(id)arg1 userID:(id)arg2 isLogSent:(BOOL)arg3 inScene:(long long)arg4;
- (double)configWithLinkList:(id)arg0 awemeModel:(id)arg1 userModel:(id)arg2 userID:(id)arg3 isLogSent:(BOOL)arg4 inScene:(long long)arg5 isCurrentUser:(BOOL)arg6;
- (void)setHitTestBottomExpand:(double)arg0;
- (void)setTrackerParam:(id)arg0;
- (void)setupActionForScene:(long long)arg0 button:(id)arg1 isCurrentUser:(BOOL)arg2;
- (id)userID;
- (void)setScene:(long long)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (long long)scene;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;

@end