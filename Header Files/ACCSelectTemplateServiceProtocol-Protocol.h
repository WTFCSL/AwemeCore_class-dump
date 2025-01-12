//
//     Generated by private class-dump
//

@class RACSignal;

@protocol ACCSelectTemplateServiceProtocol <NSObject>

@property (readonly, nonatomic) RACSignal *didRemoveLyricStickerSignal;
@property (readonly, nonatomic) RACSignal *recoverLyricStickerSignal;
@property (readonly, nonatomic) RACSignal *updateVideoDataCompleteSignal;
@property (readonly, nonatomic) RACSignal *templateVideoCompletionSignal;
@property (readonly, nonatomic) RACSignal *didRemoveMusicSignal;
@property (readonly, nonatomic) RACSignal *removeAllEditsSignal;
@property (readonly, nonatomic) RACSignal *didApplyTemplateSignal;

- (id)removeAllEditsSignal;
- (id)didRemoveLyricStickerSignal;
- (id)recoverLyricStickerSignal;
- (id)updateVideoDataCompleteSignal;
- (id)templateVideoCompletionSignal;
- (id)didRemoveMusicSignal;
- (id)didApplyTemplateSignal;

@end
