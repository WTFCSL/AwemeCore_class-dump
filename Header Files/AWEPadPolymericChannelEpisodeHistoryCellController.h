//
//     Generated by private class-dump
//

@class AWEPLVEpisodeViewModel;

@interface AWEPadPolymericChannelEpisodeHistoryCellController : AWEPadPolymericChannelHistoryCellBaseController {
    AWEPLVEpisodeViewModel *_viewModel;
}

@property (retain, nonatomic) AWEPLVEpisodeViewModel *viewModel;

- (id)diffIdentifier;
- (void)trackCardShow;
- (void)configView:(id)arg0;
- (void)viewDidDisplay;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (double)watchTimeStamp;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)didSelectItemAtIndex:(long long)arg0;

@end
