//
//     Generated by private class-dump
//

@class IESGCPEvaluationUserProfileHelper, IESGCPEvaluationDetailViewModel;

@interface IESGCPEvaluationDetailCellFactory : NSObject {
    IESGCPEvaluationDetailViewModel *_viewModel;
    IESGCPEvaluationUserProfileHelper *_jumpHelper;
}

@property (retain, nonatomic) IESGCPEvaluationDetailViewModel *viewModel;
@property (retain, nonatomic) IESGCPEvaluationUserProfileHelper *jumpHelper;

- (id)jumpHelper;
- (void)setJumpHelper:(id)arg0;
- (id)detailInfoCellWithCellModel:(id)arg0 isAnchor:(BOOL)arg1;
- (id)firstReplyCellWithCellModel:(id)arg0;
- (id)secondReplyCellWithCellModel:(id)arg0;
- (id)placeholderCellWithCellModel:(id)arg0;
- (void)jumpToProfile:(id)arg0 evaluationId:(id)arg1 replyId:(id)arg2;
- (void)firstReplyShowPopoverMenu:(id)arg0;
- (void)trackDeleteFirstReplyWithifDeleteConfirmed:(BOOL)arg0 item:(id)arg1;
- (void)secondReplyShowPopoverMenu:(id)arg0;
- (void)trackDeleteSecondReplyWithifDeleteConfirmed:(BOOL)arg0;
- (id)createTableViewCellWithCellModel:(id)arg0 isAnchor:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
