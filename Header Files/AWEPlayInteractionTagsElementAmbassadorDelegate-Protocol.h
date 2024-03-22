//
//     Generated by private class-dump
//

@class NSString, UIView, AWEAwemeModel;
@protocol AWEFeedRelationViewProtocol;

@protocol AWEPlayInteractionTagsElementAmbassadorDelegate <NSObject>

@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) UIView<AWEFeedRelationViewProtocol> *dynamicLabel;

- (id)referString;
- (BOOL)shouldShowAnchorView;
- (void)showCommentPanelWithInfo:(id)arg0;
- (void)trackLabelShowWithInfo:(id)arg0;
- (void)updateCurrentRelationType:(long long)arg0;
- (void)showLikeUserListViewControllerWithInfo:(id)arg0;
- (id)model;
- (id)dynamicLabel;

@optional

- (void)afd_dismissRecommendEntranceLabel;
- (void)afd_updateDynamicLabel;

@end
