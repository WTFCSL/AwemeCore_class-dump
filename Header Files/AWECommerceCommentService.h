//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol AWEAdFeedCommentContainerViewController, AWEAdCommentGuideView;

@interface AWECommerceCommentService : HTSService <AWECommentGuideDelegate, AWECommerceCommentService> {
    UIViewController<AWEAdFeedCommentContainerViewController> *_commentViewController;
    UIView<AWEAdCommentGuideView> *_guideView;
}

@property (weak, nonatomic) UIViewController<AWEAdFeedCommentContainerViewController> *commentViewController;
@property (weak, nonatomic) UIView<AWEAdCommentGuideView> *guideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isECommerceCommentWithAwemeModel:(id)arg0;
- (BOOL)shouldShowCommentWithAwemeModel:(id)arg0;
- (BOOL)shouldShowLandingCommentWithAwemeModel:(id)arg0;
- (void)showCommentGuideViewIfNeedWithAwemeModel:(id)arg0 containerView:(id)arg1 currentSection:(long long)arg2;
- (void)trackCommentTabClick:(id)arg0 enterMethod:(id)arg1;
- (void)closeAdCommentGuide:(id)arg0;
- (id)commentTabTitleWithAwemeModel:(id)arg0;
- (id)commentCountWithAwemeModel:(id)arg0;
- (id)commentViewControllerWithAwemeModel:(id)arg0;
- (void)updateCommentCountWithAwemeModel:(id)arg0 newCount:(id)arg1;
- (void)commentTabChangedWithAwemeModel:(id)arg0 isAdTab:(BOOL)arg1;
- (void)trackCommentTabShowIfNeed:(id)arg0;
- (void)trackCommentTabStayTimeIfNeed:(id)arg0;
- (id)extraParamsWithAwemeModel:(id)arg0;
- (id)commentViewController;
- (void)setCommentViewController:(id)arg0;
- (id)extraECommerceParamsWithAwemeModel:(id)arg0;
- (id)tabNameWithAwemeModel:(id)arg0;
- (void).cxx_destruct;
- (void)setGuideView:(id)arg0;
- (id)guideView;

@end