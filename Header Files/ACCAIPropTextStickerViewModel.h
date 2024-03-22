//
//     Generated by private class-dump
//

@class RACSignal, NSString, RACSubject;

@interface ACCAIPropTextStickerViewModel : NSObject <ACCAIPropTextStickerServiceProtocol> {
    RACSignal *_didPrepareAITextStickerInfoSignal;
    RACSubject *_didPrepareAITextStickerInfoSubject;
}

@property (retain, nonatomic) RACSignal *didPrepareAITextStickerInfoSignal;
@property (retain, nonatomic) RACSubject *didPrepareAITextStickerInfoSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)didPrepareAITextStickerInfoSignal;
- (void)addTextStickersWithInfos:(id)arg0;
- (id)didPrepareAITextStickerInfoSubject;
- (void)setDidPrepareAITextStickerInfoSignal:(id)arg0;
- (void)setDidPrepareAITextStickerInfoSubject:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end