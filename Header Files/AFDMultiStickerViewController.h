//
//     Generated by private class-dump
//

@class NSString, UIImageView, AFDMultiStickerSectionViewModel, UIView;
@protocol AFDMultiStickerContainerViewProtocol;

@interface AFDMultiStickerViewController : UIViewController <AFDMultiStickerViewControllerProtocol> {
    UIImageView *_backgroundImageView;
    UIView<AFDMultiStickerContainerViewProtocol> *_cardContainerView;
    AFDMultiStickerSectionViewModel *_viewModel;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView<AFDMultiStickerContainerViewProtocol> *cardContainerView;
@property (retain, nonatomic) AFDMultiStickerSectionViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardContainerView;
- (void)setCardContainerView:(id)arg0;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setBackgroundImageView:(id)arg0;
- (void)updateModel;

@end
