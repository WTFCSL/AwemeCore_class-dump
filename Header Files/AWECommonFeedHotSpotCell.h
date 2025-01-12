//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWECommonFeedSectionContext;
@protocol AWEModernFeedCellControllerProtocol, AWECommonFeedCellModelProtocol;

@interface AWECommonFeedHotSpotCell : UICollectionViewCell <AWECommonFeedCellProtocol> {
    id<AWECommonFeedCellModelProtocol> cellModel;
    AWECommonFeedSectionContext *context;
    UIViewController<AWEModernFeedCellControllerProtocol> *_contentCellController;
}

@property (retain, nonatomic) UIViewController<AWEModernFeedCellControllerProtocol> *contentCellController;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveTransitionContext;
- (void)cellWillDisplay;
- (void)setCellModel:(id)arg0;
- (void)configCellWithContext:(id)arg0 cellModel:(id)arg1;
- (void)cellDidEndDisplay;
- (void)updateCellLayout;
- (id)contentCellController;
- (void)setContentCellController:(id)arg0;
- (void)willBecomeActive;
- (id)transitionContext;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)hasVideo;
- (id)context;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)reset;
- (id)cellModel;

@end
