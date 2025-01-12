//
//     Generated by private class-dump
//

@class AWECommentMentionLynxEggModel, AWECommentSurpriseEggModel, NSDictionary, NSObject, AWECommentReportInfo, NSMutableArray, AWECommentTopTipsInfo, AWECommentTipsModel, NSString, AWECommentSummaryTipsModel, AWECommentRiskConfigModel, AWECommentFeedStrategyModel, AWECommentZeroPanelInfo, AWEAwemeModel, NSArray, NSNumber, AWECommentSurveyConfigModel, AWECommentReviewStatusModel;
@protocol OS_dispatch_queue, AWECommentGeneralModelProtocol;

@interface AWECommentListManager : NSObject <AWECommentDataControllerProtocol> {
    BOOL _showEmptyCommentList;
    BOOL _isFamiliarVideo;
    BOOL _isFromXigua;
    BOOL _hasMore;
    BOOL _hasSliceData;
    BOOL _isForecastPreloading;
    BOOL _hasForecastPreloadedResult;
    BOOL _isTouchPreloading;
    BOOL _hasTouchPreloadedResult;
    BOOL _preloadCommentsDiscarded;
    BOOL _isRequesting;
    BOOL _isNeedNewDialogTreeAnimate;
    BOOL _hasFoldComments;
    BOOL _isAffinity;
    BOOL _showManageRedPoint;
    BOOL _shouldShowMutualFriendCommentDesc;
    BOOL _needManagementHint;
    BOOL _isTouchPreloadSlicing;
    BOOL _hasTouchPreloadSlicedResult;
    AWEAwemeModel *_awemeModel;
    id<AWECommentGeneralModelProtocol> _generalModel;
    NSString *_awemeId;
    NSString *_adInfo;
    NSNumber *_creativeID;
    NSNumber *_adSearchCommentType;
    NSNumber *_followerCount;
    NSString *_authToken;
    NSString *_commentChannelID;
    long long _commentRequestCount;
    NSString *_referString;
    NSDictionary *_extraParams;
    id /* block */ _commentsProcessHook;
    NSNumber *_foldedCommentsCount;
    NSMutableArray *_dataList;
    long long _replyStyle;
    long long _commentSingleCount;
    long long _commentCount;
    long long _commentFilterCount;
    NSString *_insertedIDs;
    AWECommentTopTipsInfo *_commentTopTipsInfo;
    AWECommentSummaryTipsModel *_commentSummaryTipsModel;
    AWECommentTipsModel *_commentTips;
    AWECommentSurpriseEggModel *_commentEgg;
    AWECommentReviewStatusModel *_reviewStatus;
    AWECommentRiskConfigModel *_commentRiskConfig;
    AWECommentSurveyConfigModel *_commentSurveyConfig;
    AWECommentMentionLynxEggModel *_commentMentionLynxEgg;
    AWECommentFeedStrategyModel *_commentFeedStrategy;
    AWECommentReportInfo *_reportInfo;
    AWECommentZeroPanelInfo *_zeroPanelInfo;
    NSString *_hotsoonText;
    long long _hotsoonFilterCount;
    long long _hotsoonHasMore;
    NSString *_xiguaText;
    NSString *_suggestWords;
    NSString *_commentCommonData;
    NSNumber *_favoriteCommentTimestamp;
    NSArray *_quickCommentConstantWords;
    NSArray *_quickCommentTimedWords;
    NSObject<OS_dispatch_queue> *_executeQueue;
    long long _offset;
    id /* block */ _pendingRefreshBlock;
    id /* block */ _pendingCompletionBlock;
    id /* block */ _pendingSliceDoneCompletionBlock;
    NSMutableArray *_sliceDataList;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasFoldComments;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL isAffinity;
@property (nonatomic) BOOL showManageRedPoint;
@property (nonatomic) BOOL isForecastPreloading;
@property (nonatomic) BOOL hasForecastPreloadedResult;
@property (nonatomic) BOOL preloadCommentsDiscarded;
@property (copy, nonatomic) id /* block */ pendingRefreshBlock;
@property (nonatomic) BOOL hasSliceData;
@property (nonatomic) BOOL isTouchPreloading;
@property (nonatomic) BOOL hasTouchPreloadedResult;
@property (copy, nonatomic) id /* block */ pendingCompletionBlock;
@property (nonatomic) BOOL isTouchPreloadSlicing;
@property (nonatomic) BOOL hasTouchPreloadSlicedResult;
@property (copy, nonatomic) id /* block */ pendingSliceDoneCompletionBlock;
@property (retain, nonatomic) NSMutableArray *sliceDataList;
@property (retain, nonatomic) NSArray *quickCommentConstantWords;
@property (retain, nonatomic) NSArray *quickCommentTimedWords;
@property (copy, nonatomic) NSString *commentCommonData;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWECommentGeneralModelProtocol> generalModel;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *adInfo;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *adSearchCommentType;
@property (nonatomic) BOOL showEmptyCommentList;
@property (nonatomic) BOOL isFamiliarVideo;
@property (retain, nonatomic) NSNumber *followerCount;
@property (nonatomic) BOOL isFromXigua;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *commentChannelID;
@property (nonatomic) long long commentRequestCount;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) id /* block */ commentsProcessHook;
@property (nonatomic) BOOL isNeedNewDialogTreeAnimate;
@property (retain, nonatomic) NSNumber *foldedCommentsCount;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (nonatomic) long long replyStyle;
@property (nonatomic) long long commentSingleCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long commentFilterCount;
@property (copy, nonatomic) NSString *insertedIDs;
@property (retain, nonatomic) AWECommentTopTipsInfo *commentTopTipsInfo;
@property (retain, nonatomic) AWECommentSummaryTipsModel *commentSummaryTipsModel;
@property (retain, nonatomic) AWECommentTipsModel *commentTips;
@property (retain, nonatomic) AWECommentSurpriseEggModel *commentEgg;
@property (nonatomic) BOOL shouldShowMutualFriendCommentDesc;
@property (retain, nonatomic) AWECommentReviewStatusModel *reviewStatus;
@property (retain, nonatomic) AWECommentRiskConfigModel *commentRiskConfig;
@property (retain, nonatomic) AWECommentSurveyConfigModel *commentSurveyConfig;
@property (retain, nonatomic) AWECommentMentionLynxEggModel *commentMentionLynxEgg;
@property (retain, nonatomic) AWECommentFeedStrategyModel *commentFeedStrategy;
@property (retain, nonatomic) AWECommentReportInfo *reportInfo;
@property (retain, nonatomic) AWECommentZeroPanelInfo *zeroPanelInfo;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;
@property (copy, nonatomic) NSString *xiguaText;
@property (copy, nonatomic) NSString *suggestWords;
@property (nonatomic) BOOL needManagementHint;
@property (retain, nonatomic) NSNumber *favoriteCommentTimestamp;

- (id)awemeModel;
- (id)referString;
- (void)setGeneralModel:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)generalModel;
- (void)setCommentChannelID:(id)arg0;
- (void)setIsFromXigua:(BOOL)arg0;
- (BOOL)isFromXigua;
- (id)commentChannelID;
- (BOOL)preloadCommentsDiscarded;
- (void)setDataList:(id)arg0;
- (void)setAwemeId:(id)arg0;
- (void)setHasSliceData:(BOOL)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (void)setHasFoldComments:(BOOL)arg0;
- (void)setIsAffinity:(BOOL)arg0;
- (void)setShowManageRedPoint:(BOOL)arg0;
- (void)setCommentCommonData:(id)arg0;
- (void)setQuickCommentConstantWords:(id)arg0;
- (void)setQuickCommentTimedWords:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (void)setReplyStyle:(long long)arg0;
- (id)extraParams;
- (long long)replyStyle;
- (BOOL)isRequesting;
- (id)commentFeedStrategy;
- (BOOL)isForecastPreloading;
- (BOOL)hasForecastPreloadedResult;
- (id)initWithAwemeId:(id)arg0;
- (id)adSearchCommentType;
- (void)setAdSearchCommentType:(id)arg0;
- (void)setIsFamiliarVideo:(BOOL)arg0;
- (void)setFollowerCount:(id)arg0;
- (void)setSuggestWords:(id)arg0;
- (void)setCommentsProcessHook:(id /* block */)arg0;
- (void)setNeedManagementHint:(BOOL)arg0;
- (void)setShowEmptyCommentList:(BOOL)arg0;
- (void)setAdInfo:(id)arg0;
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
- (id)executeQueue;
- (void)setExecuteQueue:(id)arg0;
- (void)setIsForecastPreloading:(BOOL)arg0;
- (id /* block */)pendingRefreshBlock;
- (void)retryFetchDataWithAuthToken:(id)arg0;
- (void)setPendingRefreshBlock:(id /* block */)arg0;
- (void)setHasForecastPreloadedResult:(BOOL)arg0;
- (void)_initFetchCommentsWithInsertIDs:(id)arg0 completion:(id /* block */)arg1 sliceDoneCompletion:(id /* block */)arg2;
- (void)initFetchCommentsWithInsertIDs:(id)arg0 completion:(id /* block */)arg1 sliceDoneCompletion:(id /* block */)arg2;
- (void)setIsTouchPreloading:(BOOL)arg0;
- (void)setIsTouchPreloadSlicing:(BOOL)arg0;
- (id /* block */)pendingCompletionBlock;
- (void)setHasTouchPreloadedResult:(BOOL)arg0;
- (id /* block */)pendingSliceDoneCompletionBlock;
- (void)setPendingSliceDoneCompletionBlock:(id /* block */)arg0;
- (void)setHasTouchPreloadSlicedResult:(BOOL)arg0;
- (id)removeDuplicatedCommentsWithArray:(id)arg0;
- (void)processSubCommentsWithCommentArray:(id)arg0 targetCommentID:(id)arg1;
- (void)setSliceDataList:(id)arg0;
- (void)broadcastCommentCount;
- (void)removeFirstVisitorIfNeededWithList:(id)arg0;
- (BOOL)loadPreloadDataIfNeededWithInsertIDs:(id)arg0 completion:(id /* block */)arg1 sliceDoneCompletion:(id /* block */)arg2;
- (id)generateRefreshParams;
- (id)generateItemAwemeID:(id)arg0 generalModel:(id)arg1;
- (void)preloadImageCompletionWithCommentID:(id)arg0;
- (void)_processCommentsFirstPageData:(id)arg0 error:(id)arg1 completion:(id /* block */)arg2;
- (void)_sliceCommentsFirstPageData:(id)arg0 error:(id)arg1 completion:(id /* block */)arg2;
- (id)sliceDataList;
- (BOOL)isTouchPreloadSlicing;
- (void)setPreloadCommentsDiscarded:(BOOL)arg0;
- (id)generateGeneralItemParams:(id)arg0;
- (id)commentSequenceContent;
- (void)commentWithContent:(id)arg0 replyId:(id)arg1 replySubCommentID:(id)arg2 replySubCommentAuthorName:(id)arg3 replyCommentAuthor:(id)arg4 extraInfo:(id)arg5 sticker:(id)arg6 pictureInfo:(id)arg7 videoData:(id)arg8 audioModel:(id)arg9 referString:(id)arg10 enterFrom:(id)arg11 previousPage:(id)arg12 isFromPaste:(BOOL)arg13 lastCopyCommentID:(id)arg14 extraParams:(id)arg15 completion:(id /* block */)arg16;
- (id)obtainBusinessExtraParams:(id)arg0;
- (id)currentCommentCountString;
- (void)doAction:(id)arg0 forComment:(id)arg1;
- (void)handleNextActionForComment:(id)arg0;
- (void)likeOrDislikeButtonTappedWithCommit:(id)arg0 commentDiggType:(long long)arg1 attitudeType:(id)arg2 attitudeWithDigg:(BOOL)arg3 isSubComment:(BOOL)arg4 referString:(id)arg5 enterFrom:(id)arg6 previousPage:(id)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (BOOL)commentExistsInArray:(id)arg0 comment:(id)arg1;
- (void)trackPreloadImage:(id)arg0;
- (BOOL)hasTouchPreloadSlicedResult;
- (void)setAuthToken:(id)arg0;
- (id)authToken;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (long long)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setPendingCompletionBlock:(id /* block */)arg0;
- (long long)commentCount;
- (void)setCommentCount:(long long)arg0;
- (id)creativeID;
- (id)dataList;

@end
