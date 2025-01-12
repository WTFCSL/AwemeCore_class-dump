//
//     Generated by private class-dump
//

@class NSPointerArray, ACCNLEImageWrapper, NSDictionary, ACCStickerContainerView;
@protocol ACCNLELayerModuleDetector;

@interface ACCNLELayerHandler : NSObject {
    ACCStickerContainerView *_stickerContainer;
    ACCNLEImageWrapper *_NLEImageWrapper;
    id<ACCNLELayerModuleDetector> _moduleDetector;
    NSDictionary *_commonTrackParams;
    NSPointerArray *_allAddedStickers;
}

@property (retain, nonatomic) NSPointerArray *allAddedStickers;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) ACCNLEImageWrapper *NLEImageWrapper;
@property (weak, nonatomic) id<ACCNLELayerModuleDetector> moduleDetector;
@property (retain, nonatomic) NSDictionary *commonTrackParams;

+ (BOOL)canProcessLayer:(id)arg0;
+ (id /* block */)viewConstrutor;
+ (id /* block */)viewConfigConstrutor;

- (id)commonTrackParams;
- (void)setCommonTrackParams:(id)arg0;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (id)NLEImageWrapper;
- (void)configView:(id)arg0 config:(id)arg1 forLayer:(id)arg2;
- (id)addLayerViewWithLayer:(id)arg0;
- (void)setNLEImageWrapper:(id)arg0;
- (id)moduleDetector;
- (void)setModuleDetector:(id)arg0;
- (id)allAddedStickers;
- (void)setAllAddedStickers:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)restoreLayer:(id)arg0;

@end
