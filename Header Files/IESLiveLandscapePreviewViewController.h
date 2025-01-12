//
//     Generated by private class-dump
//

@class NSString, IESLiveShareContentModel, IESLiveImageView, UILabel, IESLiveLandscapeVideoPreview;

@interface IESLiveLandscapePreviewViewController : UIViewController <UIGestureRecognizerDelegate> {
    IESLiveShareContentModel *_shareContent;
    double _landscapePanelWidth;
    IESLiveLandscapeVideoPreview *_landscapeVideoPreview;
    IESLiveImageView *_backgroundImageView;
    UILabel *_userTipLabel;
}

@property (retain, nonatomic) IESLiveLandscapeVideoPreview *landscapeVideoPreview;
@property (retain, nonatomic) IESLiveImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *userTipLabel;
@property (retain, nonatomic) IESLiveShareContentModel *shareContent;
@property (nonatomic) double landscapePanelWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (double)landscapePanelWidth;
- (id)shareContent;
- (void)setShareContent:(id)arg0;
- (void)setLandscapePanelWidth:(double)arg0;
- (void)panGestureActions:(id)arg0;
- (id)userTipLabel;
- (id)landscapeVideoPreview;
- (double)pictureRatio;
- (void)setLandscapeVideoPreview:(id)arg0;
- (void)setUserTipLabel:(id)arg0;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)backgroundImageView;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)setBackgroundImageView:(id)arg0;
- (void)removeFromParent;
- (void)moveToParent:(id)arg0;

@end
