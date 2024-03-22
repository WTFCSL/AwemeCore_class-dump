//
//     Generated by private class-dump
//

@class IESGCPDownloadAnimationButton, IESGCPImageButton, UIImageView, NSTimer, UILabel, UIView, IESGCPExplainCardFeaturedContentContainer;

@interface IESGCPGameExplainCard : UIView <IESGCPExplainCardProtocol> {
    UIImageView *_logoImageView;
    IESGCPDownloadAnimationButton *_downloadButton;
    id /* block */ _closeHandler;
    id /* block */ _downloadHandler;
    UIView *_containerView;
    UIImageView *_tagImageView;
    UIView *_tagSuffixContainerView;
    UILabel *_tagSuffixLabel;
    UILabel *_nameLabel;
    UIView *_tagContainerView;
    IESGCPExplainCardFeaturedContentContainer *_featuredContentContainer;
    UILabel *_salePointLabel;
    UIView *_colorBackground;
    UILabel *_taskNameLabel;
    IESGCPImageButton *_taskContentView;
    NSTimer *_animationDelayTimer;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIView *tagSuffixContainerView;
@property (retain, nonatomic) UILabel *tagSuffixLabel;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) IESGCPExplainCardFeaturedContentContainer *featuredContentContainer;
@property (retain, nonatomic) IESGCPDownloadAnimationButton *downloadButton;
@property (retain, nonatomic) UILabel *salePointLabel;
@property (retain, nonatomic) UIView *colorBackground;
@property (retain, nonatomic) UILabel *taskNameLabel;
@property (retain, nonatomic) IESGCPImageButton *taskContentView;
@property (retain, nonatomic) NSTimer *animationDelayTimer;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ downloadHandler;
@property (readonly, nonatomic) BOOL downloadButtonIsAnimating;

- (void)reloadWithModel:(id)arg0;
- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (void)setCloseHandler:(id /* block */)arg0;
- (id /* block */)closeHandler;
- (id)tagContainerView;
- (void)setTagContainerView:(id)arg0;
- (id)salePointLabel;
- (void)setSalePointLabel:(id)arg0;
- (id)featuredContentContainer;
- (id)colorBackground;
- (void)setColorBackground:(id)arg0;
- (void)setFeaturedContentContainer:(id)arg0;
- (void)initUserInterface;
- (id)animationDelayTimer;
- (void)updateDownloadButtonTextFrom:(id)arg0;
- (void)updateCardAdditionContentFrom:(id)arg0;
- (id)tagSuffixContainerView;
- (id)tagSuffixLabel;
- (void)setAnimationDelayTimer:(id)arg0;
- (void)setTagSuffixContainerView:(id)arg0;
- (void)setTagSuffixLabel:(id)arg0;
- (void)closeButtonDidClicked;
- (void)downloadButtonDidClicked;
- (id)getDownloadDefaultTextFrom:(long long)arg0 isInPreDownloadPeriod:(BOOL)arg1;
- (id)taskNameLabel;
- (id)taskContentView;
- (void)createTaskInfoIfNeeded;
- (void)removeTaskInfoViews;
- (void)configTagViewsWithTagArray:(id)arg0 topOffset:(double)arg1;
- (void)setTaskNameLabel:(id)arg0;
- (void)setTaskContentView:(id)arg0;
- (BOOL)downloadButtonIsAnimating;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id)nameLabel;
- (void)dealloc;
- (void)setNameLabel:(id)arg0;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg0;
- (struct CGSize { double x0; double x1; })cardSize;
- (void)setDownloadHandler:(id /* block */)arg0;
- (id)downloadButton;
- (id /* block */)downloadHandler;
- (void)setDownloadButton:(id)arg0;

@end