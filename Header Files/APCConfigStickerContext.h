//
//     Generated by private class-dump
//

@class ACCConfigConsumeResult, ACCStickerContainerView, ACCMediaContainerView;

@interface APCConfigStickerContext : NSObject {
    ACCMediaContainerView *_mediaContainerView;
    ACCStickerContainerView *_stickerContainerView;
    ACCConfigConsumeResult *_result;
}

@property (readonly, nonatomic) ACCMediaContainerView *mediaContainerView;
@property (readonly, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) ACCConfigConsumeResult *result;

- (id)mediaContainerView;
- (id)stickerContainerView;
- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)result;
- (id)initWithProject:(id)arg0;

@end
