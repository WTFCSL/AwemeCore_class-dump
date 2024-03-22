//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEPlayInteractionLikeElementAmbassador : AFDAmbassador <AWEPlayInteractionLikeElementAmbassadorProtocol> {
    NSString *enterFrom;
    NSString *_likeLottiePath;
    NSString *_disLikeLottiePath;
    NSString *_likeButtonIconBeforePath;
    NSString *_likeButtonIconAfterPath;
    NSString *_diggAnimationImagePath;
    NSString *_likeButtonLabelString;
    AWEAwemeModel *_model;
    NSString *_refactorLottieFilePath;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *refactorLottieFilePath;
@property (copy, nonatomic) NSString *likeLottiePath;
@property (copy, nonatomic) NSString *disLikeLottiePath;
@property (copy, nonatomic) NSString *likeButtonIconBeforePath;
@property (copy, nonatomic) NSString *likeButtonIconAfterPath;
@property (copy, nonatomic) NSString *diggAnimationImagePath;
@property (copy, nonatomic) NSString *likeButtonLabelString;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)diggButtonType;
- (void)__cleanUp;
- (void)__setupLottieResource;
- (BOOL)__isLottieResourceReady;
- (id)diggAnimationImagePath;
- (id)likeButtonLabelString;
- (id)__likeLottieDivideFrame;
- (id)__likeLottieTotalFrame;
- (id)refactorLottieFilePath;
- (id)__fetchContentFromSettingsWithKey:(id)arg0;
- (void)trackIconAlienation:(long long)arg0 reason_for_failure:(id)arg1;
- (id)__fetchResourcePathFromGeckoWithKey:(id)arg0;
- (void)setRefactorLottieFilePath:(id)arg0;
- (void)setLikeButtonLabelString:(id)arg0;
- (void)setDiggAnimationImagePath:(id)arg0;
- (void)setLikeLottiePath:(id)arg0;
- (void)setDisLikeLottiePath:(id)arg0;
- (void)setLikeButtonIconBeforePath:(id)arg0;
- (void)setLikeButtonIconAfterPath:(id)arg0;
- (id)fetchDiggAnimationImage;
- (id)fetchLikeButtonLabelString;
- (id)likeAnimationStartFrame;
- (id)likeAnimationEndFrame;
- (id)dislikeAnimationStartFrame;
- (id)dislikeAnimationEndFrame;
- (id)fetchNewLottieAnimationView;
- (id)likeLottiePath;
- (id)disLikeLottiePath;
- (id)likeButtonIconBeforePath;
- (id)likeButtonIconAfterPath;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setData:(id)arg0;

@end
