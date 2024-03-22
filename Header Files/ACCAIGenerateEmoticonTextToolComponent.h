//
//     Generated by private class-dump
//

@class UILabel, LOTAnimationView, UIView, ACCIMStickerGenerateHelper, ACCTextStickerHandler;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCStickerServiceProtocol;

@interface ACCAIGenerateEmoticonTextToolComponent : ACCFeatureComponent {
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCStickerServiceProtocol> _stickerService;
    ACCTextStickerHandler *_textStickerHandler;
    ACCIMStickerGenerateHelper *_AIStickerUploadHelper;
    LOTAnimationView *_lotLoadingView;
    UIView *_loadingContainer;
    UILabel *_loadingTextLabel;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCTextStickerHandler *textStickerHandler;
@property (retain, nonatomic) ACCIMStickerGenerateHelper *AIStickerUploadHelper;
@property (retain, nonatomic) LOTAnimationView *lotLoadingView;
@property (retain, nonatomic) UIView *loadingContainer;
@property (retain, nonatomic) UILabel *loadingTextLabel;

- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)loadComponentView;
- (void)setEditService:(id)arg0;
- (id)loadingContainer;
- (void)setLoadingContainer:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)textStickerHandler;
- (void)setTextStickerHandler:(id)arg0;
- (void)addBarItemToToolBar;
- (id)generateTextBarItem;
- (void)didClickGenerateTextItem;
- (void)findTextStickerHandler;
- (void)showAITextLoadingView;
- (void)setAIStickerUploadHelper:(id)arg0;
- (id)AIStickerUploadHelper;
- (void)addAITextStickerWithContent:(id)arg0;
- (void)hideAITextLoadingView;
- (id)lotLoadingView;
- (id)loadingTextLabel;
- (void)setLotLoadingView:(id)arg0;
- (void)setLoadingTextLabel:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
