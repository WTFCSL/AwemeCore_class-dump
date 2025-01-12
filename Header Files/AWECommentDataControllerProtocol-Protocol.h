//
//     Generated by private class-dump
//

@class AWECommentMentionLynxEggModel, AWECommentSurpriseEggModel, NSDictionary, AWECommentReportInfo, AWECommentTopTipsInfo, AWECommentTipsModel, NSString, AWECommentSummaryTipsModel, AWECommentRiskConfigModel, AWECommentFeedStrategyModel, AWECommentZeroPanelInfo, AWEAwemeModel, NSArray, AWECommentSurveyConfigModel, NSNumber, AWECommentReviewStatusModel;
@protocol AWECommentGeneralModelProtocol;

@protocol AWECommentDataControllerProtocol

@property (nonatomic, readonly) AWEAwemeModel *awemeModel;
@property (nonatomic, readonly) id<AWECommentGeneralModelProtocol> generalModel;
@property (nonatomic, readonly) NSString *awemeId;
@property (nonatomic, readonly) NSString *adInfo;
@property (nonatomic, readonly) NSNumber *creativeID;
@property (nonatomic, readonly) NSNumber *adSearchCommentType;
@property (nonatomic, readonly) BOOL showEmptyCommentList;
@property (nonatomic, readonly) BOOL isFamiliarVideo;
@property (nonatomic, readonly) NSNumber *followerCount;
@property (nonatomic, readonly) BOOL isFromXigua;
@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, copy) NSString *commentChannelID;
@property (nonatomic) long long commentRequestCount;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) NSDictionary *extraParams;
@property (nonatomic, copy) id /* block */ commentsProcessHook;
@property (nonatomic, readonly) BOOL hasMore;
@property (nonatomic, readonly) long long offset;
@property (nonatomic, readonly) BOOL hasSliceData;
@property (nonatomic, readonly) BOOL isForecastPreloading;
@property (nonatomic, readonly) BOOL hasForecastPreloadedResult;
@property (nonatomic, readonly) BOOL isTouchPreloading;
@property (nonatomic, readonly) BOOL hasTouchPreloadedResult;
@property (nonatomic, readonly) BOOL preloadCommentsDiscarded;
@property (nonatomic, readonly) BOOL isRequesting;
@property (nonatomic) BOOL isNeedNewDialogTreeAnimate;
@property (nonatomic, readonly) BOOL hasFoldComments;
@property (nonatomic, retain) NSNumber *foldedCommentsCount;
@property (nonatomic, copy) NSArray *dataList;
@property (nonatomic) long long replyStyle;
@property (nonatomic) long long commentSingleCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long commentFilterCount;
@property (nonatomic, copy) NSString *insertedIDs;
@property (nonatomic, readonly) BOOL isAffinity;
@property (nonatomic, readonly) BOOL showManageRedPoint;
@property (nonatomic, retain) AWECommentSummaryTipsModel *commentSummaryTipsModel;
@property (nonatomic, retain) AWECommentTopTipsInfo *commentTopTipsInfo;
@property (nonatomic, retain) AWECommentTipsModel *commentTips;
@property (nonatomic, retain) AWECommentSurpriseEggModel *commentEgg;
@property (nonatomic) BOOL shouldShowMutualFriendCommentDesc;
@property (nonatomic, retain) AWECommentReviewStatusModel *reviewStatus;
@property (nonatomic, retain) AWECommentRiskConfigModel *commentRiskConfig;
@property (nonatomic, retain) AWECommentSurveyConfigModel *commentSurveyConfig;
@property (nonatomic, retain) AWECommentMentionLynxEggModel *commentMentionLynxEgg;
@property (nonatomic, retain) AWECommentFeedStrategyModel *commentFeedStrategy;
@property (nonatomic, retain) AWECommentReportInfo *reportInfo;
@property (nonatomic, retain) AWECommentZeroPanelInfo *zeroPanelInfo;
@property (nonatomic, copy) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic, copy) NSString *xiguaText;
@property (nonatomic, copy) NSString *suggestWords;
@property (nonatomic) BOOL needManagementHint;
@property (nonatomic, readonly) NSString *commentCommonData;
@property (nonatomic, retain) NSNumber *favoriteCommentTimestamp;
@property (nonatomic, readonly) NSArray *quickCommentConstantWords;
@property (nonatomic, readonly) NSArray *quickCommentTimedWords;

- (id)awemeModel;
- (id)referString;
- (void)setReferString:(id)arg0;
- (id)generalModel;
- (void)setCommentChannelID:(id)arg0;
- (BOOL)isFromXigua;
- (id)commentChannelID;
- (BOOL)preloadCommentsDiscarded;
- (void)setDataList:(id)arg0;
- (void)setReplyStyle:(long long)arg0;
- (id)extraParams;
- (long long)replyStyle;
- (BOOL)isRequesting;
- (id)commentFeedStrategy;
- (BOOL)isForecastPreloading;
- (BOOL)hasForecastPreloadedResult;
- (id)adSearchCommentType;
- (void)setSuggestWords:(id)arg0;
- (void)setCommentsProcessHook:(id /* block */)arg0;
- (void)setNeedManagementHint:(BOOL)arg0;
- (id)awemeId;
- (id)adInfo;
- (BOOL)showEmptyCommentList;
- (BOOL)isFamiliarVideo;
- (long long)commentRequestCount;
- (void)setCommentRequestCount:(long long)arg0;
- (id /* block */)commentsProcessHook;
- (BOOL)hasSliceData;
- (BOOL)isTouchPreloading;
- (BOOL)hasTouchPreloadedResult;
- (BOOL)isNeedNewDialogTreeAnimate;
- (void)setIsNeedNewDialogTreeAnimate:(BOOL)arg0;
- (BOOL)hasFoldComments;
- (id)foldedCommentsCount;
- (void)setFoldedCommentsCount:(id)arg0;
- (long long)commentSingleCount;
- (void)setCommentSingleCount:(long long)arg0;
- (long long)commentFilterCount;
- (void)setCommentFilterCount:(long long)arg0;
- (id)insertedIDs;
- (void)setInsertedIDs:(id)arg0;
- (BOOL)isAffinity;
- (BOOL)showManageRedPoint;
- (id)commentSummaryTipsModel;
- (void)setCommentSummaryTipsModel:(id)arg0;
- (id)commentTopTipsInfo;
- (void)setCommentTopTipsInfo:(id)arg0;
- (id)commentTips;
- (void)setCommentTips:(id)arg0;
- (id)commentEgg;
- (void)setCommentEgg:(id)arg0;
- (BOOL)shouldShowMutualFriendCommentDesc;
- (void)setShouldShowMutualFriendCommentDesc:(BOOL)arg0;
- (id)reviewStatus;
- (void)setReviewStatus:(id)arg0;
- (void)setCommentRiskConfig:(id)arg0;
- (id)commentSurveyConfig;
- (void)setCommentSurveyConfig:(id)arg0;
- (id)commentMentionLynxEgg;
- (void)setCommentMentionLynxEgg:(id)arg0;
- (void)setCommentFeedStrategy:(id)arg0;
- (id)reportInfo;
- (void)setReportInfo:(id)arg0;
- (id)zeroPanelInfo;
- (void)setZeroPanelInfo:(id)arg0;
- (id)hotsoonText;
- (void)setHotsoonText:(id)arg0;
- (long long)hotsoonFilterCount;
- (void)setHotsoonFilterCount:(long long)arg0;
- (long long)hotsoonHasMore;
- (void)setHotsoonHasMore:(long long)arg0;
- (id)xiguaText;
- (void)setXiguaText:(id)arg0;
- (id)suggestWords;
- (BOOL)needManagementHint;
- (id)commentCommonData;
- (id)favoriteCommentTimestamp;
- (void)setFavoriteCommentTimestamp:(id)arg0;
- (id)quickCommentConstantWords;
- (id)quickCommentTimedWords;
- (void)preloadCommentsWithAuthToken:(id)arg0;
- (void)preloadCommentsWithAuthToken:(id)arg0;
- (BOOL)touchPreloadCommentsWithAuthToken:(id)arg0;
- (BOOL)touchPreloadCommentsWithAuthToken:(id)arg0;
- (void)refreshCommentsWithDiggID:(id)arg0 insertIDs:(id)arg1 authToken:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshCommentsWithDiggID:(id)arg0 insertIDs:(id)arg1 authToken:(id)arg2 completion:(id /* block */)arg3;
- (void)loadCommentsFirstPageWithInsertIDs:(id)arg0 authToken:(id)arg1 completion:(id /* block */)arg2 sliceDoneCompletion:(id /* block */)arg3;
- (void)loadCommentsFirstPageWithInsertIDs:(id)arg0 authToken:(id)arg1 completion:(id /* block */)arg2 sliceDoneCompletion:(id /* block */)arg3;
- (void)loadMoreCommentsForSwiftWithDiggID:(id)arg0 insertIDs:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)loadMoreCommentsForSwiftWithDiggID:(id)arg0 insertIDs:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)fetchSubCommentListForSwiftWithCommentID:(id)arg0 viewedReplyCommentIDs:(id)arg1 topSubCommentIDs:(id)arg2 insertIDs:(id)arg3 count:(long long)arg4 offset:(id)arg5 completion:(id /* block */)arg6;
- (BOOL)fetchSubCommentListForSwiftWithCommentID:(id)arg0 viewedReplyCommentIDs:(id)arg1 topSubCommentIDs:(id)arg2 insertIDs:(id)arg3 count:(long long)arg4 offset:(id)arg5 completion:(id /* block */)arg6;
- (void)commentWithContent:(id)arg0 replyId:(id)arg1 replySubCommentID:(id)arg2 replySubCommentAuthorName:(id)arg3 replyCommentAuthor:(id)arg4 extraInfo:(id)arg5 sticker:(id)arg6 imageList:(id)arg7 imageSource:(id)arg8 videoData:(id)arg9 audioModel:(id)arg10 referString:(id)arg11 enterFrom:(id)arg12 previousPage:(id)arg13 isFromPaste:(BOOL)arg14 lastCopyCommentID:(id)arg15 extraParams:(id)arg16 completion:(id /* block */)arg17;
- (void)commentWithContent:(id)arg0 replyId:(id)arg1 replySubCommentID:(id)arg2 replySubCommentAuthorName:(id)arg3 replyCommentAuthor:(id)arg4 extraInfo:(id)arg5 sticker:(id)arg6 imageList:(id)arg7 imageSource:(id)arg8 videoData:(id)arg9 audioModel:(id)arg10 referString:(id)arg11 enterFrom:(id)arg12 previousPage:(id)arg13 isFromPaste:(BOOL)arg14 lastCopyCommentID:(id)arg15 extraParams:(id)arg16 completion:(id /* block */)arg17;
- (void)deleteCommentWithCommentId:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteCommentWithCommentId:(id)arg0 completion:(id /* block */)arg1;
- (void)updateByFoldCommentStatus:(BOOL)arg0;
- (void)updateByFoldCommentStatus:(BOOL)arg0;
- (void)shouldShowFoldComments:(BOOL)arg0;
- (void)expressAttitudeWithComment:(id)arg0 hasAttitude:(BOOL)arg1 attitudeType:(id)arg2 attitudeWithDigg:(BOOL)arg3 isSubComment:(BOOL)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (void)expressAttitudeWithComment:(id)arg0 hasAttitude:(BOOL)arg1 attitudeType:(id)arg2 attitudeWithDigg:(BOOL)arg3 isSubComment:(BOOL)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (void)likeButtonTappedWithComment:(id)arg0 diggType:(long long)arg1 attitudeType:(id)arg2 attitudeWithDigg:(BOOL)arg3 isSubComment:(BOOL)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (void)likeButtonTappedWithComment:(id)arg0 diggType:(long long)arg1 attitudeType:(id)arg2 attitudeWithDigg:(BOOL)arg3 isSubComment:(BOOL)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (void)dislikeButtonTappedWithComment:(id)arg0 isDislike:(BOOL)arg1 attitudeWithDigg:(BOOL)arg2 isSubComment:(BOOL)arg3 referString:(id)arg4 enterFrom:(id)arg5 previousPage:(id)arg6 extraParams:(id)arg7 completion:(id /* block */)arg8;
- (void)dislikeButtonTappedWithComment:(id)arg0 isDislike:(BOOL)arg1 attitudeWithDigg:(BOOL)arg2 isSubComment:(BOOL)arg3 referString:(id)arg4 enterFrom:(id)arg5 previousPage:(id)arg6 extraParams:(id)arg7 completion:(id /* block */)arg8;
- (void)refreshCommentManagerListWithAwemeID:(id)arg0 commentSelectOptions:(id)arg1 keyword:(id)arg2 opinionID:(id)arg3 referString:(id)arg4 sortType:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)refreshCommentManagerListWithAwemeID:(id)arg0 commentSelectOptions:(id)arg1 keyword:(id)arg2 opinionID:(id)arg3 referString:(id)arg4 sortType:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)loadMoreCommentManagerListWithAwemeID:(id)arg0 commentSelectOptions:(id)arg1 keyword:(id)arg2 opinionID:(id)arg3 referString:(id)arg4 sortType:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)loadMoreCommentManagerListWithAwemeID:(id)arg0 commentSelectOptions:(id)arg1 keyword:(id)arg2 opinionID:(id)arg3 referString:(id)arg4 sortType:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)postMultiCommentWithContent:(id)arg0 awemeID:(id)arg1 replyCommentIDs:(id)arg2 textExtraArray:(id)arg3 sticker:(id)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 isFromPaste:(BOOL)arg8 lastCopyCommentID:(id)arg9 extraParams:(id)arg10 completion:(id /* block */)arg11;
- (void)postMultiCommentWithContent:(id)arg0 awemeID:(id)arg1 replyCommentIDs:(id)arg2 textExtraArray:(id)arg3 sticker:(id)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 isFromPaste:(BOOL)arg8 lastCopyCommentID:(id)arg9 extraParams:(id)arg10 completion:(id /* block */)arg11;
- (void)deleteMultiCommentWithCommentIds:(id)arg0 needBlock:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)deleteMultiCommentWithCommentIds:(id)arg0 needBlock:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)commentRiskConfig;
- (id)followerCount;
- (void)setExtraParams:(id)arg0;
- (id)authToken;
- (long long)offset;
- (BOOL)hasMore;
- (long long)commentCount;
- (void)setCommentCount:(long long)arg0;
- (id)creativeID;
- (id)dataList;

@end
