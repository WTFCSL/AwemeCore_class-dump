//
//     Generated by private class-dump
//

@class AFDInspirationTabItem, UIViewController, NSIndexPath, NSString, AFDFriendsTabTemplateDetailVideoPlayViewController, AFDFriendsTabTemplateDetailContentContainerView, UITapGestureRecognizer;
@protocol AFDFriendsTabTemplateDetailTableViewCellDelegate;

@interface AFDFriendsTabTemplateDetailTableViewCell : UITableViewCell <AFDFriendsTabTemplateDetailVideoPlayViewControllerDelegate, AFDFriendsTabTemplateDetailContentContainerViewDelegate> {
    BOOL _paused;
    id<AFDFriendsTabTemplateDetailTableViewCellDelegate> _delegate;
    UIViewController *_parentViewController;
    NSIndexPath *_indexPath;
    AFDInspirationTabItem *_item;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    AFDFriendsTabTemplateDetailContentContainerView *_contentContainerView;
    AFDFriendsTabTemplateDetailVideoPlayViewController *_videoPlayViewController;
}

@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (retain, nonatomic) AFDFriendsTabTemplateDetailContentContainerView *contentContainerView;
@property (retain, nonatomic) AFDFriendsTabTemplateDetailVideoPlayViewController *videoPlayViewController;
@property (retain, nonatomic) AFDInspirationTabItem *item;
@property (nonatomic) BOOL paused;
@property (weak, nonatomic) id<AFDFriendsTabTemplateDetailTableViewCellDelegate> delegate;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)playLoadingAnimation;
- (void)authorLabelClicked;
- (void)removeChildViewController;
- (id)videoPlayViewController;
- (void)addChildViewController;
- (void)onSingleTapGestureRecognizer:(id)arg0;
- (void)setVideoPlayViewController:(id)arg0;
- (BOOL)paused;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContentContainerView:(id)arg0;
- (void)setIndexPath:(id)arg0;
- (void)stop;
- (void)setPaused:(BOOL)arg0;
- (id)indexPath;
- (id)delegate;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (id)contentContainerView;
- (void)pause;
- (void)reset;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (id)parentViewController;
- (void)setParentViewController:(id)arg0;
- (void)setupViews;
- (void)stopLoadingAnimation;
- (id)singleTapGestureRecognizer;
- (void)setSingleTapGestureRecognizer:(id)arg0;

@end
