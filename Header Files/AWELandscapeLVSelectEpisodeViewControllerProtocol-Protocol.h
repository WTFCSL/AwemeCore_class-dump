//
//     Generated by private class-dump
//

@class AWELandscapeLVSelectEpisodeDataController;
@protocol AWELandscapeSplitScreenContainerDelegate;

@protocol AWELandscapeLVSelectEpisodeViewControllerProtocol <NSObject>

@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;
@property (copy, nonatomic) id /* block */ didRefreshAwemeModel;
@property (readonly, nonatomic) AWELandscapeLVSelectEpisodeDataController *splitDataController;

- (id)splitDataController;
- (id /* block */)didRefreshAwemeModel;
- (id)initWithPageContext:(id)arg0 viewModel:(id)arg1;
- (void)updateWithAwemeModel:(id)arg0 splitDataController:(id)arg1;
- (void)deselectCurrentAweme;
- (void)setDidRefreshAwemeModel:(id /* block */)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end