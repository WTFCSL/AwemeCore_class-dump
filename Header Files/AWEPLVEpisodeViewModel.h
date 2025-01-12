//
//     Generated by private class-dump
//

@class AWEPadBaseSectionViewModel, AWEPadPMCEpisodeCardModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVEpisodeViewModel : NSObject {
    BOOL _isCollected;
    BOOL _isRequestOnAir;
    AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *_sectionViewModel;
    AWEPadPMCEpisodeCardModel *_episodeModel;
}

@property (retain, nonatomic) AWEPadPMCEpisodeCardModel *episodeModel;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (id)sectionViewModel;
- (void)setSectionViewModel:(id)arg0;
- (void)setEpisodeModel:(id)arg0;
- (id)episodeModel;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (void)trackEvent:(id)arg0 withExtraParams:(id)arg1;
- (void)collectButtonDidClicked;
- (void)transferToFormatPlayerRoom;
- (id)initWithEpisodeModel:(id)arg0;
- (void)updateFavoriteStatus;
- (void).cxx_destruct;

@end
