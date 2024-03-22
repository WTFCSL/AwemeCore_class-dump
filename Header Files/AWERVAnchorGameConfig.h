//
//     Generated by private class-dump
//

@class AWERVAnchorViewModel, AWEMarkView;

@interface AWERVAnchorGameConfig : AWEFeedAnchorGameConfig {
    AWERVAnchorViewModel *_viewModel;
    AWEMarkView *_rvGameButton;
}

@property (retain, nonatomic) AWEMarkView *rvGameButton;
@property (weak, nonatomic) AWERVAnchorViewModel *viewModel;

- (void)onGameButtonTapped:(id)arg0;
- (id)gameButton;
- (id)rvGameButton;
- (void)setRvGameButton:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
