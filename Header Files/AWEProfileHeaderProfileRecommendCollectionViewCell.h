//
//     Generated by private class-dump
//

@class AWEUserProfileRecommendView, NSString, AWEProfileHeaderContext, UITapGestureRecognizer;
@protocol AFDFollowRequestRemindManagerProtocol, AWEProfileHeaderProfileRecommendCollectionViewCellDelegate;

@interface AWEProfileHeaderProfileRecommendCollectionViewCell : UICollectionViewCell <AWEProfileHeaderCellProtocol> {
    id<AWEProfileHeaderProfileRecommendCollectionViewCellDelegate> _delegate;
    AWEProfileHeaderContext *_context;
    AWEUserProfileRecommendView *_profileRecommendView;
    id<AFDFollowRequestRemindManagerProtocol> _followRequestManager;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEUserProfileRecommendView *profileRecommendView;
@property (retain, nonatomic) id<AFDFollowRequestRemindManagerProtocol> followRequestManager;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEProfileHeaderProfileRecommendCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)followRequestManager;
- (void)__setupUI;
- (void)onTapGestureAction:(id)arg0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)configWithHeaderContext:(id)arg0;
- (void)__updateProfileRecommendViewWithContext:(id)arg0;
- (id)profileRecommendView;
- (void)setProfileRecommendView:(id)arg0;
- (void)setFollowRequestManager:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)setTapGesture:(id)arg0;

@end
