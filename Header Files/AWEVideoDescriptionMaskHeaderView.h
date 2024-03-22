//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UITapGestureRecognizer, UIView, AWEFeedCollectionContainerContext, AWEAwemePlayVideoViewController, NSObject, UIPanGestureRecognizer, YYLabel, UILabel;
@protocol AWEFeedAnchorViewManager, AWECommentVCHeaderBarComponentProtocol;

@interface AWEVideoDescriptionMaskHeaderView : UIView <UIGestureRecognizerDelegate> {
    AWEFeedCollectionContainerContext *_containerContext;
    AWEAwemePlayVideoViewController *_videoPlayer;
    AWEAwemeModel *_model;
    NSString *_referString;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    NSObject<AWEFeedAnchorViewManager> *_anchorManager;
    UILabel *_authorLabel;
    YYLabel *_descriptionLabel;
    UIView<AWECommentVCHeaderBarComponentProtocol> *_barComponent;
}

@property (retain, nonatomic) AWEFeedCollectionContainerContext *containerContext;
@property (retain, nonatomic) AWEAwemePlayVideoViewController *videoPlayer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) NSObject<AWEFeedAnchorViewManager> *anchorManager;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIView<AWECommentVCHeaderBarComponentProtocol> *barComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (void)onAuthorLabelClicked:(id)arg0;
- (void)updateAnchorView:(id)arg0;
- (BOOL)shouldShowAnchorView;
- (id)anchorManager;
- (double)authorLabelHeight;
- (void)updateCartAnchorIfNeeded:(id)arg0;
- (void)updateAuthorLabel;
- (double)getContentHeight;
- (void)updateDescriptionLabel;
- (void)setAnchorManager:(id)arg0;
- (void)updateAnchorLayout;
- (void)onMaskHeaderPressed:(id)arg0;
- (void)recognizePanGesture:(id)arg0;
- (BOOL)shouldShowBarComponentInMask;
- (void)updateBarComponentWithModel:(id)arg0;
- (void)addAnchorViewIfNeeded:(id)arg0 playVideoVC:(id)arg1;
- (struct CGSize { double x0; double x1; })descriptionLabelSize;
- (id)barComponent;
- (BOOL)isPointInDescriptionLabel:(struct CGPoint { double x0; double x1; })arg0;
- (void)exitMaskLayerByCloseMethod:(id)arg0;
- (BOOL)isPointInBlankRegion:(struct CGPoint { double x0; double x1; })arg0;
- (long long)maskLayerStyle;
- (unsigned long long)descriptionLabelAllRows;
- (void)setBarComponent:(id)arg0;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (void)setModel:(id)arg0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)model;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (id)tapGesture;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (id)authorName;
- (void)setupUI;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;
- (void)updateSubviews;
- (void)updateWithContext:(id)arg0;
- (void)setTapGesture:(id)arg0;

@end