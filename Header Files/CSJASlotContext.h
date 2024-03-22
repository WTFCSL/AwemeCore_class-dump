//
//     Generated by private class-dump
//

@class CSJAdSlot, NSString, NSNumber, CSJMaterialMeta, CSJAdInfoViewModel, CSJDislikeContext, UIViewController;

@interface CSJASlotContext : NSObject {
    BOOL _fromMiddlePage;
    BOOL _fromPlayable;
    BOOL _fromLanddingPage;
    BOOL _autoPlayIfVideo;
    BOOL _isTransform;
    BOOL _openPlayableLandingPage;
    UIViewController *_rootViewController;
    NSString *_source;
    CSJAdSlot *_adSlot;
    CSJDislikeContext *_dislikeContext;
    id /* block */ _didCloseOtherController;
    double _playTimeIfVideo;
    double _totalPlayTimeIfVideo;
    NSNumber *_currentPlayProgress;
    id /* block */ _closePolicyBlock;
    CSJMaterialMeta *_materialMeta;
    CSJAdInfoViewModel *_infoViewModel;
}

@property (weak, nonatomic) UIViewController *rootViewController;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (copy, nonatomic) id /* block */ didCloseOtherController;
@property (nonatomic) BOOL fromMiddlePage;
@property (nonatomic) BOOL fromPlayable;
@property (nonatomic) BOOL fromLanddingPage;
@property (nonatomic) double playTimeIfVideo;
@property (nonatomic) double totalPlayTimeIfVideo;
@property (nonatomic) BOOL autoPlayIfVideo;
@property (nonatomic) BOOL isTransform;
@property (retain, nonatomic) NSNumber *currentPlayProgress;
@property (nonatomic) BOOL openPlayableLandingPage;
@property (copy, nonatomic) id /* block */ closePolicyBlock;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdInfoViewModel *infoViewModel;

- (BOOL)fromMiddlePage;
- (BOOL)fromPlayable;
- (BOOL)fromLanddingPage;
- (id)currentPlayProgress;
- (BOOL)openPlayableLandingPage;
- (id /* block */)closePolicyBlock;
- (void)setClosePolicyBlock:(id /* block */)arg0;
- (id /* block */)didCloseOtherController;
- (id)infoViewModel;
- (id)materialMeta;
- (void)setInfoViewModel:(id)arg0;
- (void)setAdSlot:(id)arg0;
- (void)setFromMiddlePage:(BOOL)arg0;
- (void)setDidCloseOtherController:(id /* block */)arg0;
- (id)dislikeContext;
- (void)setMaterialMeta:(id)arg0;
- (void)setDislikeContext:(id)arg0;
- (void)setCurrentPlayProgress:(id)arg0;
- (void)setOpenPlayableLandingPage:(BOOL)arg0;
- (void)setPlayTimeIfVideo:(double)arg0;
- (void)setTotalPlayTimeIfVideo:(double)arg0;
- (void)setAutoPlayIfVideo:(BOOL)arg0;
- (id)adSlot;
- (BOOL)isTransform;
- (void)setIsTransform:(BOOL)arg0;
- (double)playTimeIfVideo;
- (double)totalPlayTimeIfVideo;
- (BOOL)autoPlayIfVideo;
- (void)setFromLanddingPage:(BOOL)arg0;
- (void)setFromPlayable:(BOOL)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (id)source;
- (void).cxx_destruct;
- (void)setSource:(id)arg0;

@end