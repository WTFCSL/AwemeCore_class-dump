//
//     Generated by private class-dump
//

@class AWEButton;

@interface AWEPlayInteractionPublishWorkElement : AWEPlayInteractionBaseActionButtonElement {
    AWEButton *_publishWorkButton;
}

@property (retain, nonatomic) AWEButton *publishWorkButton;

- (void)initializeElement;
- (id)activateInfoWithData:(id)arg0;
- (void)dynamicWidthRemakeLayout;
- (id)publishWorkButton;
- (void)didTapPublishWork:(id)arg0;
- (void)showPublishWorkButtonIfNeeded;
- (void)setPublishWorkButton:(id)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end