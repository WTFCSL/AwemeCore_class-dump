//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, AWEAwemeModel, NSNumber;
@protocol AWECommentGeneralModelProtocol;

@interface AWECommentSwiftImpl.CommentDataController : _TtCs12_SwiftObject <AWECommentDataControllerProtocol> {
    void /* unknown type, empty encoding */ hostModel;
    void /* unknown type, empty encoding */ commentChannelID;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ commentRequestCount;
    void /* unknown type, empty encoding */ extraParams;
    void /* unknown type, empty encoding */ commentsProcessHook;
    void /* unknown type, empty encoding */ isRequesting;
    void /* unknown type, empty encoding */ fetchedData;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ hasSliceData;
    void /* unknown type, empty encoding */ isPreloading;
    void /* unknown type, empty encoding */ isNormalFetchStarted;
    void /* unknown type, empty encoding */ hasPreloaded;
    void /* unknown type, empty encoding */ favoriteCommentTimestamp;
    void /* unknown type, empty encoding */ offset;
    void /* unknown type, empty encoding */ executeQueue;
    void /* unknown type, empty encoding */ preloadDiscarded;
    void /* unknown type, empty encoding */ isNeedNewDialogTreeAnimate;
    void /* unknown type, empty encoding */ preloadType;
    void /* unknown type, empty encoding */ pendingCompletion;
    void /* unknown type, empty encoding */ pendingSliceDoneCompletion;
    void /* unknown type, empty encoding */ hasFoldComments;
    void /* unknown type, empty encoding */ foldedCommentsCount;
    void /* unknown type, empty encoding */ dataList;
    void /* unknown type, empty encoding */ sliceDataList;
    void /* unknown type, empty encoding */ replyStyle;
    void /* unknown type, empty encoding */ commentSingleCount;
    void /* unknown type, empty encoding */ commentCount;
    void /* unknown type, empty encoding */ commentFilterCount;
    void /* unknown type, empty encoding */ insertedIDs;
    void /* unknown type, empty encoding */ isAffinity;
    void /* unknown type, empty encoding */ commentTopTipsInfo;
    void /* unknown type, empty encoding */ commentSummaryTipsModel;
    void /* unknown type, empty encoding */ commentTips;
    void /* unknown type, empty encoding */ commentEgg;
    void /* unknown type, empty encoding */ shouldShowMutualFriendCommentDesc;
    void /* unknown type, empty encoding */ reviewStatus;
    void /* unknown type, empty encoding */ commentRiskConfig;
    void /* unknown type, empty encoding */ commentSurveyConfig;
    void /* unknown type, empty encoding */ commentMentionLynxEgg;
    void /* unknown type, empty encoding */ commentFeedStrategy;
    void /* unknown type, empty encoding */ reportInfo;
    void /* unknown type, empty encoding */ zeroPanelInfo;
    void /* unknown type, empty encoding */ hotsoonText;
    void /* unknown type, empty encoding */ hotsoonFilterCount;
    void /* unknown type, empty encoding */ hotsoonHasMore;
    void /* unknown type, empty encoding */ xiguaText;
    void /* unknown type, empty encoding */ suggestWords;
    void /* unknown type, empty encoding */ showManageRedPoint;
    void /* unknown type, empty encoding */ needManagementHint;
    void /* unknown type, empty encoding */ commentCommonData;
    void /* unknown type, empty encoding */ listDataSource;
    void /* unknown type, empty encoding */ quickCommentConstantWords;
    void /* unknown type, empty encoding */ quickCommentTimedWords;
}

@property (nonatomic, readonly) id<AWECommentGeneralModelProtocol> generalModel;
@property (nonatomic, copy) NSString *commentChannelID;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic) void /* unknown type, empty encoding */ commentRequestCount;
@property (nonatomic, copy) NSDictionary *extraParams;
@property (nonatomic, copy) id /* block */ commentsProcessHook;
@property (nonatomic) void /* unknown type, empty encoding */ isRequesting;
@property (nonatomic) void /* unknown type, empty encoding */ hasMore;
@property (nonatomic) void /* unknown type, empty encoding */ hasSliceData;
@property (nonatomic, readonly) BOOL isForecastPreloading;
@property (nonatomic, readonly) BOOL hasForecastPreloadedResult;
@property (nonatomic, retain) void /* unknown type, empty encoding */ favoriteCommentTimestamp;
@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic, readonly) BOOL isTouchPreloading;
@property (nonatomic, readonly) BOOL hasTouchPreloadedResult;
@property (nonatomic, readonly) BOOL preloadCommentsDiscarded;
@property (nonatomic) void /* unknown type, empty encoding */ isNeedNewDialogTreeAnimate;
@property (nonatomic) void /* unknown type, empty encoding */ hasFoldComments;
@property (nonatomic, retain) void /* unknown type, empty encoding */ foldedCommentsCount;
@property (nonatomic, copy) NSArray *dataList;
@property (nonatomic) void /* unknown type, empty encoding */ replyStyle;
@property (nonatomic) void /* unknown type, empty encoding */ commentSingleCount;
@property (nonatomic) void /* unknown type, empty encoding */ commentCount;
@property (nonatomic) void /* unknown type, empty encoding */ commentFilterCount;
@property (nonatomic, copy) NSString *insertedIDs;
@property (nonatomic) void /* unknown type, empty encoding */ isAffinity;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentTopTipsInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentSummaryTipsModel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentTips;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentEgg;
@property (nonatomic) void /* unknown type, empty encoding */ shouldShowMutualFriendCommentDesc;
@property (nonatomic, retain) void /* unknown type, empty encoding */ reviewStatus;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentRiskConfig;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentSurveyConfig;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentMentionLynxEgg;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commentFeedStrategy;
@property (nonatomic, retain) void /* unknown type, empty encoding */ reportInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ zeroPanelInfo;
@property (nonatomic, copy) NSString *hotsoonText;
@property (nonatomic) void /* unknown type, empty encoding */ hotsoonFilterCount;
@property (nonatomic) void /* unknown type, empty encoding */ hotsoonHasMore;
@property (nonatomic, copy) NSString *xiguaText;
@property (nonatomic, copy) NSString *suggestWords;
@property (nonatomic) void /* unknown type, empty encoding */ showManageRedPoint;
@property (nonatomic) void /* unknown type, empty encoding */ needManagementHint;
@property (nonatomic, copy) NSString *commentCommonData;
@property (nonatomic, retain) AWEAwemeModel *awemeModel;
@property (nonatomic, readonly) NSNumber *creativeID;
@property (nonatomic, readonly) NSString *adInfo;
@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) BOOL isFamiliarVideo;
@property (nonatomic, readonly) NSNumber *adSearchCommentType;
@property (nonatomic, readonly) BOOL showEmptyCommentList;
@property (nonatomic, readonly) NSNumber *followerCount;
@property (nonatomic, readonly) BOOL isFromXigua;
@property (nonatomic, readonly) NSString *awemeId;
@property (nonatomic, copy) NSArray *quickCommentConstantWords;
@property (nonatomic, copy) NSArray *quickCommentTimedWords;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)generalModel;
- (void)setCommentChannelID:(id)arg0;
- (BOOL)isFromXigua;
- (id)commentChannelID;
- (BOOL)preloadCommentsDiscarded;
- (void)setDataList:(id)arg0;
- (void)setHasSliceData:(BOOL)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (void)setHasFoldComments:(BOOL)arg0;
- (void)setIsAffinity:(BOOL)arg0;
- (void)setShowManageRedPoint:(BOOL)arg0;
- (void)setCommentCommonData:(id)arg0;
- (void)setQuickCommentConstantWords:(id)arg0;
- (void)setQuickCommentTimedWords:(id)arg0;
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
- (BOOL)touchPreloadCommentsWithAuthToken:(id)arg0;
- (void)refreshCommentsWithDiggID:(id)arg0 insertIDs:(id)arg1 authToken:(id)arg2 completion:(id /* block */)arg3;
- (void)loadCommentsFirstPageWithInsertIDs:(id)arg0 authToken:(id)arg1 completion:(id /* block */)arg2 sliceDoneCompletion:(id /* block */)arg3;
- (void)loadMoreCommentsForSwiftWithDiggID:(id)arg0 insertIDs:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)fetchSubCommentListForSwiftWithCommentID:(id)arg0 viewedReplyCommentIDs:(id)arg1 topSubCommentIDs:(id)arg2 insertIDs:(id)arg3 count:(long long)arg4 offset:(id)arg5 completion:(id /* block */)arg6;
- (void)commentWithContent:(id)arg0 replyId:(id)arg1 replySubCommentID:(id)arg2 replySubCommentAuthorName:(id)arg3 replyCommentAuthor:(id)arg4 extraInfo:(id)arg5 sticker:(id)arg6 imageList:(id)arg7 imageSource:(id)arg8 videoData:(id)arg9 audioModel:(id)arg10 referString:(id)arg11 enterFrom:(id)arg12 previousPage:(id)arg13 isFromPaste:(BOOL)arg14 lastCopyCommentID:(id)arg15 extraParams:(id)arg16 completion:(id /* block */)arg17;
- (void)deleteCommentWithCommentId:(id)arg0 completion:(id /* block */)arg1;
- (void)updateByFoldCommentStatus:(BOOL)arg0;
- (void)shouldShowFoldComments:(BOOL)arg0;
- (void)expressAttitudeWithComment:(id)arg0 hasAttitude:(BOOL)arg1 attitudeType:(id)arg2 attitudeWithDigg:(BOOL)arg3 isSubComment:(BOOL)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (void)likeButtonTappedWithComment:(id)arg0 diggType:(long long)arg1 attitudeType:(id)arg2 attitudeWithDigg:(BOOL)arg3 isSubComment:(BOOL)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (void)dislikeButtonTappedWithComment:(id)arg0 isDislike:(BOOL)arg1 attitudeWithDigg:(BOOL)arg2 isSubComment:(BOOL)arg3 referString:(id)arg4 enterFrom:(id)arg5 previousPage:(id)arg6 extraParams:(id)arg7 completion:(id /* block */)arg8;
- (void)refreshCommentManagerListWithAwemeID:(id)arg0 commentSelectOptions:(id)arg1 keyword:(id)arg2 opinionID:(id)arg3 referString:(id)arg4 sortType:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)loadMoreCommentManagerListWithAwemeID:(id)arg0 commentSelectOptions:(id)arg1 keyword:(id)arg2 opinionID:(id)arg3 referString:(id)arg4 sortType:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)postMultiCommentWithContent:(id)arg0 awemeID:(id)arg1 replyCommentIDs:(id)arg2 textExtraArray:(id)arg3 sticker:(id)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 isFromPaste:(BOOL)arg8 lastCopyCommentID:(id)arg9 extraParams:(id)arg10 completion:(id /* block */)arg11;
- (void)deleteMultiCommentWithCommentIds:(id)arg0 needBlock:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)commentRiskConfig;
- (id)followerCount;
- (void)setExtraParams:(id)arg0;
- (id)authToken;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (long long)commentCount;
- (void)setCommentCount:(long long)arg0;
- (id)creativeID;
- (id)dataList;

@end