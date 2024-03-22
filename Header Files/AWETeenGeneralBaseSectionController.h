//
//     Generated by private class-dump
//

@class NSString, AWETeenExtraParamModel;
@protocol AWETeenGeneralCardDelegate;

@interface AWETeenGeneralBaseSectionController : IGListSectionController <IGListSupplementaryViewSource, AWETeenGeneralCardProtocol, AWETeenGeneralCellInteractionDelegate> {
    BOOL _shouldShowFooter;
    id<AWETeenGeneralCardDelegate> _cardDelegate;
    AWETeenExtraParamModel *_extraParam;
}

@property (nonatomic) BOOL shouldShowFooter;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWETeenGeneralCardDelegate> cardDelegate;

- (double)currPlaybackTime;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)arg0 atIndex:(long long)arg1;
- (id)extraParam;
- (void)setExtraParam:(id)arg0;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;
- (BOOL)shouldShowFooter;
- (void)setShouldShowFooter:(BOOL)arg0;
- (BOOL)playEnable;
- (id)visibleVideoControllers;
- (void)cardShow;
- (void)cellShow:(id)arg0 atIndex:(long long)arg1;
- (void)didClickVideoWithAwemeModel:(id)arg0;
- (void)interactionView:(id)arg0 didClickPlayButton:(BOOL)arg1;
- (void)didDoubleClickVideoWithAwemeModel:(id)arg0 isCancel:(BOOL)arg1;
- (void)didBecomeActive;
- (id)init;
- (BOOL)canPlay;
- (void).cxx_destruct;
- (void)didResignActive;
- (void)play;
- (void)pause;
- (void)reset;
- (void)seekToTime:(double)arg0;

@end
