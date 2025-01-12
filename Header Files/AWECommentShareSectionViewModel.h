//
//     Generated by private class-dump
//

@class AWECommentLongPressPanelContext, NSArray, NSString, AWEShareTokenAlert;

@interface AWECommentShareSectionViewModel : AWEBaseListSectionViewModel <AWECommentLongPressPanelSectionViewModelProtocol, AWECommentShareSectionViewModelProtocol> {
    BOOL _noFriends;
    AWECommentLongPressPanelContext *commentPageContext;
    NSArray *_cellModels;
    id /* block */ _shareItemViewBlock;
    AWEShareTokenAlert *_alert;
}

@property (retain, nonatomic) AWEShareTokenAlert *alert;
@property (copy, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL noFriends;
@property (copy, nonatomic) id /* block */ shareItemViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWECommentLongPressPanelContext *commentPageContext;

- (void)fetchSectionDataSource;
- (double)sectionTotalHeight;
- (id)commentPageContext;
- (void)setCommentPageContext:(id)arg0;
- (id /* block */)shareItemViewBlock;
- (id)cellModels;
- (BOOL)noFriends;
- (void)setNoFriends:(BOOL)arg0;
- (void)setShareItemViewBlock:(id /* block */)arg0;
- (void)setCellModels:(id)arg0;
- (void)trackerShareItemShowed;
- (BOOL)canShowForwardAsStoryItem;
- (BOOL)canClickForwardAsStoryItem;
- (id)alert;
- (void).cxx_destruct;
- (void)setAlert:(id)arg0;

@end
