//
//     Generated by private class-dump
//

@class IESECRelationMultipleFunctionsFollowView, NSString, IESECServiceProxy, IESECRelationFansClubBubbleConfigModel, IESECWinContext;
@protocol IESECWinPageCardService, IESECWinAuthorService;

@interface IESECWinMultipleFunctionsFollowViewModel : NSObject <IESECRelationMultipleFunctionsFollowViewDelegate> {
    IESECWinContext *_context;
    BOOL _isRequestOnAir;
    IESECRelationMultipleFunctionsFollowView *_followView;
    IESECServiceProxy<IESECWinAuthorService> *_authorService;
    IESECServiceProxy<IESECWinPageCardService> *_pageCardService;
    NSString *_userID;
    NSString *_passThroughAPI;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (readonly, nonatomic) BOOL followStatus;
@property (readonly, nonatomic) IESECRelationFansClubBubbleConfigModel *fansClubBubbleConfig;
@property (readonly, nonatomic) unsigned long long followViewMode;
@property (weak, nonatomic) IESECRelationMultipleFunctionsFollowView *followView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)followStatus;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (id)trackParams;
- (void)trackShow;
- (void)trackClick;
- (void)follow;
- (BOOL)joinStatus;
- (void)unfollow;
- (id)followView;
- (void)setFollowView:(id)arg0;
- (void)followAction;
- (id)passThroughAPI;
- (long long)fansClubLevel;
- (BOOL)openFansClub;
- (id)fansClubUrl;
- (id)fansClubBubbleConfig;
- (id)followViewTextColor:(id)arg0;
- (id)followViewBackgroundColor:(id)arg0;
- (void)jumpToJoinFansClubBoard;
- (void)jumpToFansClubMissionBoard;
- (void)fansClubButtonShowed;
- (void)setPassThroughAPI:(id)arg0;
- (unsigned long long)followViewMode;
- (void)subscribeEvent;
- (id)authorService;
- (void)updateWithAuthorObject:(id)arg0;
- (id)pageCardService;
- (void)setAuthorService:(id)arg0;
- (void)setPageCardService:(id)arg0;
- (void)trackFloatShow;
- (void)trackFansClubEntranceClick;
- (void)trackFansClubButtonClick;
- (id)createFansClubUrl;
- (void)trackFansClubButtonShow;
- (void)updateWithNavObject:(id)arg0;
- (id)userID;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;

@end
