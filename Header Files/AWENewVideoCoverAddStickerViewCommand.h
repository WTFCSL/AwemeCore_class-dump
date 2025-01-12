//
//     Generated by private class-dump
//

@class ACCStickerConfig, ACCStickerContainerView, UIView;
@protocol ACCStickerContentProtocol;

@interface AWENewVideoCoverAddStickerViewCommand : AWENewVideoCoverCommand {
    UIView<ACCStickerContentProtocol> *_content;
    ACCStickerConfig *_config;
    ACCStickerContainerView *_stickerContainer;
}

@property (retain, nonatomic) UIView<ACCStickerContentProtocol> *content;
@property (retain, nonatomic) ACCStickerConfig *config;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;

- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (void)realExecute;
- (void)realUnExecute;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)content;
- (void)setContent:(id)arg0;

@end
