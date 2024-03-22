//
//     Generated by private class-dump
//

@class NSArray, CMCCommentScene;

@interface CMCCommentSceneController : CMCSceneController {
    NSArray *_eCommerceTypes;
}

@property (copy, nonatomic) NSArray *eCommerceTypes;
@property (weak, nonatomic) CMCCommentScene *scene;

- (long long)ironmanTypeForURL:(id)arg0;
- (void)didClickUserWithContext:(id)arg0;
- (void)didClickCellWithContext:(id)arg0;
- (void)didClickCommentFeedbackWithContext:(id)arg0;
- (void)trackLinkWithContext:(id)arg0;
- (id)makeAdCommentWithContext:(id)arg0;
- (void)didClickExtraInfoWithContext:(id)arg0;
- (id)eCommerceTypes;
- (void)trackLinkWithContext:(id)arg0 relatedComponentValue:(id)arg1;
- (id)createBTMChainStringWithClickedView:(id)arg0;
- (id)joinEnterpriseParamsIfNeeded:(id)arg0 awemeModel:(id)arg1 commentModel:(id)arg2;
- (id)createBTMChainWithClickedView:(id)arg0;
- (BOOL)shouldTrackClickForGeneralSearch:(id)arg0 referString:(id)arg1 didOpenAppStore:(BOOL)arg2;
- (void)eCommerceTrackWithContext:(id)arg0;
- (id)btmParamsWhenShow;
- (BOOL)shouldProcessIronManURLForLinkModel:(id)arg0;
- (void)trackClickForGeneralSearchResultWithAweme:(id)arg0 didOpenAppStore:(BOOL)arg1;
- (void)setECommerceTypes:(id)arg0;
- (void).cxx_destruct;
- (void)sceneDidLoad;

@end