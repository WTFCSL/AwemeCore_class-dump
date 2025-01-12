//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, UIView;

@protocol AWEFeedVideoButtonProtocol <NSObject>

+ (id)defaultButtonWithImageName:(id)arg0 label:(id)arg1;
+ (id)defaultButtonWithImageName:(id)arg0 label:(id)arg1;
+ (id)noTextButtonWithImageName:(id)arg0 shouldFit:(BOOL)arg1;
+ (id)noTextButtonWithImageName:(id)arg0 shouldFit:(BOOL)arg1;
+ (id)defaultButtonWithImageName:(id)arg0 label:(id)arg1 labelFontOfSize:(double)arg2;
+ (id)defaultButtonWithImageName:(id)arg0 label:(id)arg1 labelFontOfSize:(double)arg2;
+ (id)longTextButtonWithImageName:(id)arg0 label:(id)arg1 labelFontOfSize:(double)arg2;
+ (id)longTextButtonWithImageName:(id)arg0 label:(id)arg1 labelFontOfSize:(double)arg2;

@property (nonatomic, copy) NSString *labelString;
@property (nonatomic, copy) NSString *imageNameString;
@property (nonatomic, copy) NSString *imageURLString;
@property (nonatomic, copy) NSString *imagePathString;
@property (nonatomic, retain) UIImage *lastImage;
@property (nonatomic, copy) id /* block */ touchUpInsideBlock;
@property (nonatomic) BOOL ifNeedGuideAnimation;
@property (nonatomic) BOOL isLiteCommentInspiringAnimating;
@property (nonatomic) BOOL isLiteGoldShareToIMGuideAnimating;
@property (nonatomic) BOOL isLiteGoldGuideAnimating;
@property (nonatomic) BOOL isFCoinShareGuideAnimating;
@property (nonatomic, readonly) UIImageView *buttonImageView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) BOOL guideAnimating;
@property (nonatomic, readonly) NSString *labelForShareWhenGuideAnimating;
@property (nonatomic, readonly) BOOL isShowingInverseShareUserIcon;
@property (nonatomic, readonly) long long isShowingDouPlusIconType;
@property (nonatomic) BOOL shouldNotSetAccessbilityHint;
@property (nonatomic) BOOL enableLeftHandOptimize;

- (id)imageNameString;
- (void)setImageNameString:(id)arg0;
- (id)imageURLString;
- (void)setImageURLString:(id)arg0;
- (id)imagePathString;
- (void)setImagePathString:(id)arg0;
- (id)lastImage;
- (void)setLastImage:(id)arg0;
- (void)setTouchUpInsideBlock:(id /* block */)arg0;
- (BOOL)ifNeedGuideAnimation;
- (void)setIfNeedGuideAnimation:(BOOL)arg0;
- (BOOL)isLiteCommentInspiringAnimating;
- (void)setIsLiteCommentInspiringAnimating:(BOOL)arg0;
- (BOOL)isLiteGoldShareToIMGuideAnimating;
- (void)setIsLiteGoldShareToIMGuideAnimating:(BOOL)arg0;
- (BOOL)isLiteGoldGuideAnimating;
- (void)setIsLiteGoldGuideAnimating:(BOOL)arg0;
- (BOOL)isFCoinShareGuideAnimating;
- (void)setIsFCoinShareGuideAnimating:(BOOL)arg0;
- (BOOL)guideAnimating;
- (void)setGuideAnimating:(BOOL)arg0;
- (id)labelForShareWhenGuideAnimating;
- (BOOL)isShowingInverseShareUserIcon;
- (long long)isShowingDouPlusIconType;
- (BOOL)shouldNotSetAccessbilityHint;
- (void)setShouldNotSetAccessbilityHint:(BOOL)arg0;
- (BOOL)enableLeftHandOptimize;
- (void)setEnableLeftHandOptimize:(BOOL)arg0;
- (void)setNeedAnimation:(BOOL)arg0;
- (void)removeGuideAnimation;
- (void)playDownloadGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playDownloadGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)resetMasorySize;
- (void)resetText;
- (void)setShadawForUIOptmize;
- (void)setShadowForNewMask;
- (void)resetShadowForNewMask;
- (void)updateAnimateWithLabel:(id)arg0 icon:(id)arg1 inverseText:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)updateAnimateWithLabel:(id)arg0 icon:(id)arg1 inverseText:(id)arg2 finishBlock:(id /* block */)arg3;
- (void)playIMShareGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playIMShareGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playDouPlusEntryGuideAnimationWithModel:(id)arg0 douPlusInfo:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)playDouPlusEntryGuideAnimationWithModel:(id)arg0 douPlusInfo:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)playDouPlusNewUserToastAnimationWithModel:(id)arg0 douPlusInfo:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)playDouPlusNewUserToastAnimationWithModel:(id)arg0 douPlusInfo:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)playFCoinShareGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playFCoinShareGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playLiteGoldShareToIMGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playLiteGoldShareToIMGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playLiteGoldShareGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playLiteGoldShareGuideAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playDouPlusInteractionToastAnimationWithModel:(id)arg0 douPlusInfo:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)playDouPlusInteractionToastAnimationWithModel:(id)arg0 douPlusInfo:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)playDouPlusFeedIconAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playDouPlusFeedIconAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playCommentGuideBubbleAnimationWithLoopTimes:(long long)arg0;
- (void)playCommentGuideBubbleAnimationWithLoopTimes:(long long)arg0;
- (void)playCommentGuideLabelAnimation;
- (void)playLiteCommentInspireAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)playLiteCommentInspireAnimationWithModel:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)removeLiteCommentInspireAnimation;
- (void)pauseAnimation;
- (void)didUpdate;
- (void)setImage:(id)arg0;
- (id)containerView;
- (void)resumeAnimation;
- (id)labelString;
- (void)setLabelString:(id)arg0;
- (id /* block */)touchUpInsideBlock;
- (id)buttonImageView;

@end
