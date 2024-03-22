//
//     Generated by private class-dump
//

@class NSString, AWEBaseElement, LOTAnimationView, UIImageView, UIScrollView, UILabel, UITableView;

@interface AWEOlderInteractiveGuideViewController : UIViewController <UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    UITableView *_tableView;
    LOTAnimationView *_guideLOTView;
    UIImageView *_highLightImgView;
    UILabel *_tipsLabel;
    AWEBaseElement *_baseElement;
    struct CGPoint { double x; double y; } _originOffset;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) LOTAnimationView *guideLOTView;
@property (retain, nonatomic) UIImageView *highLightImgView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) AWEBaseElement *baseElement;
@property (nonatomic) struct CGPoint { double x; double y; } originOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)__configSubviews;
- (void)updateTipsLabel:(id)arg0;
- (void)showCommentGuideWithInteractionVC:(id)arg0 onTableView:(id)arg1;
- (void)showAvatarGuideWithInteractionVC:(id)arg0 onTableView:(id)arg1;
- (void)__configTabview:(id)arg0;
- (void)setBaseElement:(id)arg0;
- (id)baseElement;
- (id)highLightImgView;
- (id)__createImageWithView:(id)arg0;
- (void)__configGuideViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 offsetLOTY:(long long)arg1;
- (void)__handleUserClickBackground;
- (id)guideLOTView;
- (void)__handleAutoDismissGuideView;
- (void)setHighLightImgView:(id)arg0;
- (void)__releaseGuideView;
- (void)__trackOlderGuideClickWithType:(id)arg0 isHighlight:(long long)arg1 action:(id)arg2;
- (void)__handleClickHighLightArea:(id)arg0;
- (void)setGuideLOTView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (id)init;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)scrollView;
- (struct CGPoint { double x0; double x1; })originOffset;
- (void)setOriginOffset:(struct CGPoint { double x0; double x1; })arg0;

@end
