//
//     Generated by private class-dump
//

@class NSString, GetFeedbackIssuesResponse_ResponseData;

@interface GetFeedbackIssuesResponse : IESLivePBBaseMessage <IESLiveRevenueInteractFeedbackListModel, IESLiveInteractFeedbackListModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GetFeedbackIssuesResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

- (id)issueCategories;
- (id)issueCategories;
- (id)pkDislikeRivalIssueCategory;
- (id)pkDislikeRivalIssueCategory;
- (id)issues;
- (id)issues;

@end
