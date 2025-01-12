//
//     Generated by private class-dump
//

@class UIView, NSString, AWEModernFeedSectionMeta, AWEGradientView, AWESearchAutoPlayHandler, AWESearchGuideView, AWEModernFeedCellBackgroundModel, AWEModernFeedSectionFooterView, AWEModernFeedCellSeparatorModel, UIViewController;
@protocol AWEModernFeedCellControllerProtocol;

@interface AWEModernFeedConcreteCollectionViewCell : UICollectionViewCell <AWESearchAutoPlayCardProtocol> {
    BOOL _isActive;
    BOOL _customizedBgView;
    AWESearchAutoPlayHandler *_autoPlayHandler;
    UIViewController<AWEModernFeedCellControllerProtocol> *_cellController;
    AWEModernFeedCellSeparatorModel *_bottomSeparator;
    AWEModernFeedCellBackgroundModel *_cellBackgroundModel;
    UIViewController<AWEModernFeedCellControllerProtocol> *_attachmentCellController;
    AWEGradientView *_backgroundGradientView;
    UIView *_headerView;
    UIView *_footerView;
    AWEModernFeedSectionFooterView *_newLayoutFooterView;
    AWEModernFeedSectionMeta *_meta;
    AWESearchGuideView *_touchPlayGuideView;
}

@property (retain, nonatomic) AWESearchGuideView *touchPlayGuideView;
@property (weak, nonatomic) UIViewController<AWEModernFeedCellControllerProtocol> *cellController;
@property (retain, nonatomic) AWEModernFeedCellSeparatorModel *bottomSeparator;
@property (retain, nonatomic) AWEModernFeedCellBackgroundModel *cellBackgroundModel;
@property (weak, nonatomic) UIViewController<AWEModernFeedCellControllerProtocol> *attachmentCellController;
@property (retain, nonatomic) AWEGradientView *backgroundGradientView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) AWEModernFeedSectionFooterView *newLayoutFooterView;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) AWEModernFeedSectionMeta *meta;
@property (nonatomic) BOOL customizedBgView;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFluencyOptimize;
+ (BOOL)watefallCardCoverNeedAdjust;

- (void)setAutoPlayHandler:(id)arg0;
- (BOOL)shouldNotActive;
- (id)autoPlayHandler;
- (id)cellController;
- (void)setCellController:(id)arg0;
- (void)addTouchPlayGuide;
- (void)removeTouchPlayGuide;
- (BOOL)p_enableFluencyOptimize;
- (id)cellBackgroundModel;
- (void)setCellBackgroundModel:(id)arg0;
- (id)attachmentCellController;
- (void)rectangleBackground;
- (void)cornerRadiusWithMaskPath:(id)arg0;
- (BOOL)p_cellControllerCanCallSetAutoPlayHandler;
- (BOOL)p_cellControllerCanCallDidBecomeActive;
- (BOOL)p_cellControllerCanCallDidResignActive;
- (BOOL)p_cellControllerCanCallActiveView;
- (BOOL)p_cellControllerCanCallShouldNotActive;
- (BOOL)p_cellControllerCanCallHasVideo;
- (void)setAttachmentCellController:(id)arg0;
- (id)newLayoutFooterView;
- (BOOL)customizedBgView;
- (void)resetBackground;
- (void)rectangleBackgroundWithAttachment;
- (void)addCornerRadiusForView:(id)arg0 andPath:(id)arg1;
- (id)touchPlayGuideView;
- (void)setNewLayoutFooterView:(id)arg0;
- (void)setCustomizedBgView:(BOOL)arg0;
- (void)setTouchPlayGuideView:(id)arg0;
- (void)didBecomeActive;
- (id)init;
- (id)footerView;
- (void)setMeta:(id)arg0;
- (id)meta;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)didResignActive;
- (void)setHeaderView:(id)arg0;
- (BOOL)hasVideo;
- (BOOL)isActive;
- (void)layoutSubviews;
- (id)headerView;
- (id)bottomSeparator;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setBottomSeparator:(id)arg0;
- (id)activeView;
- (id)backgroundGradientView;
- (void)setBackgroundGradientView:(id)arg0;

@end
