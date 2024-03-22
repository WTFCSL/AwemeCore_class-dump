//
//     Generated by private class-dump
//

@class IESGCPEvaluationDetailSectionModel, IESGCPEvaluationDetailInnerViewModel, IESGCPEvaluationAPI, NSDictionary, RACSubject, NSArray;

@interface IESGCPEvaluationDetailViewModel : NSObject {
    BOOL _isAnchor;
    BOOL _needShowLoading;
    BOOL _hasMoreFirstReply;
    BOOL _needShowFooter;
    BOOL _isOpenWithInputTextView;
    IESGCPEvaluationDetailInnerViewModel *_evaluationDetailItem;
    NSDictionary *_extraReportDic;
    RACSubject *_updateSignal;
    NSArray *_sectionArray;
    long long _currentFirstReplyCount;
    id /* block */ _deleteBlock;
    IESGCPEvaluationAPI *_api;
    IESGCPEvaluationDetailSectionModel *_evaluationSection;
    IESGCPEvaluationDetailSectionModel *_replySection;
    long long _totalFirstReplyCount;
}

@property (retain, nonatomic) IESGCPEvaluationAPI *api;
@property (retain, nonatomic) IESGCPEvaluationDetailSectionModel *evaluationSection;
@property (retain, nonatomic) IESGCPEvaluationDetailSectionModel *replySection;
@property (nonatomic) long long currentFirstReplyCount;
@property (nonatomic) long long totalFirstReplyCount;
@property (retain, nonatomic) IESGCPEvaluationDetailInnerViewModel *evaluationDetailItem;
@property (readonly, nonatomic) BOOL isAnchor;
@property (readonly, copy, nonatomic) NSDictionary *extraReportDic;
@property (retain, nonatomic) RACSubject *updateSignal;
@property (retain, nonatomic) NSArray *sectionArray;
@property (nonatomic) BOOL needShowLoading;
@property (nonatomic) BOOL hasMoreFirstReply;
@property (nonatomic) BOOL needShowFooter;
@property (nonatomic) BOOL isOpenWithInputTextView;
@property (copy, nonatomic) id /* block */ deleteBlock;

- (void)setDeleteBlock:(id /* block */)arg0;
- (id)sectionArray;
- (void)setSectionArray:(id)arg0;
- (void)setNeedShowLoading:(BOOL)arg0;
- (BOOL)needShowLoading;
- (void)reportTrackerWithEvent:(id)arg0 extra:(id)arg1;
- (id)extraReportDic;
- (id)evaluationDetailItem;
- (void)setEvaluationDetailItem:(id)arg0;
- (void)changeLikeStatusWithFirstModel:(id)arg0;
- (void)deleteFirstReply:(id)arg0 completion:(id /* block */)arg1;
- (void)changeLikeStatusWithSecondModel:(id)arg0;
- (void)deleteSecondReply:(id)arg0 completion:(id /* block */)arg1;
- (id)initWithEvaluationItem:(id)arg0 isAnchor:(BOOL)arg1 isOpenWithInputTextView:(BOOL)arg2 extraReportDic:(id)arg3;
- (void)requestNextPageFirstReplyListWithCompletion:(id /* block */)arg0;
- (BOOL)isOpenWithInputTextView;
- (void)setIsOpenWithInputTextView:(BOOL)arg0;
- (void)publishReplyWithAction:(id)arg0;
- (id)updateSignal;
- (long long)currentFirstReplyCount;
- (BOOL)hasMoreFirstReply;
- (void)deleteOwnEvaluation:(id /* block */)arg0;
- (void)foldSecondReplyWithParentModel:(id)arg0;
- (void)requestNextPageSecondReplyListWithParentModel:(id)arg0 completion:(id /* block */)arg1;
- (id)replySection;
- (void)trackRequestEvaluationDetailStartEventWithLayer:(int)arg0;
- (void)buildEvaluationItemIfNeed;
- (void)buildFirstReplyWithResponse:(id)arg0;
- (void)setHasMoreFirstReply:(BOOL)arg0;
- (void)setNeedShowFooter:(BOOL)arg0;
- (void)trackRequestCommentListResult:(id)arg0 error:(id)arg1;
- (id)updateActionWithActionType:(long long)arg0 indexPaths:(id)arg1;
- (BOOL)checkCurrentIsLogin;
- (void)requestLikeActionWithActionType:(long long)arg0 level:(long long)arg1 commentInfo:(id)arg2 completion:(id /* block */)arg3;
- (long long)totalFirstReplyCount;
- (void)setTotalFirstReplyCount:(long long)arg0;
- (void)removeReplySectionWithFirstReply:(id)arg0;
- (id)placeholderModelWithParentModel:(id)arg0;
- (void)buildSecondReplyWithResponse:(id)arg0 parentModel:(id)arg1;
- (void)publishFirstReplyWithContent:(id)arg0;
- (void)publishSecondReplyForFirstReplyWithContent:(id)arg0 firstCommentId:(id)arg1 replyCommentInfo:(id)arg2 firstReplyModel:(id)arg3;
- (id)evaluationSection;
- (void)setCurrentFirstReplyCount:(long long)arg0;
- (id)createFakeCommentWithContent:(id)arg0 commentId:(id)arg1 level:(long long)arg2;
- (void)requestPublishReplyWithContent:(id)arg0 level:(long long)arg1 firstCommentId:(id)arg2 replyCommentId:(id)arg3 replyUserId:(id)arg4 completion:(id /* block */)arg5;
- (void)trackRequestcommentDetailMakeReplyStartWithGameId:(id)arg0 evalId:(id)arg1 layer:(int)arg2 replayToComentId:(id)arg3;
- (void)trackRequestCommentDetailReplayResult:(id)arg0 error:(id)arg1;
- (void)setUpdateSignal:(id)arg0;
- (BOOL)needShowFooter;
- (void)setEvaluationSection:(id)arg0;
- (void)setReplySection:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)dealloc;
- (id)api;
- (id /* block */)deleteBlock;
- (void)setApi:(id)arg0;

@end