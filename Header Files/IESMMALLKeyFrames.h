//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESMMALLKeyFrames : NSObject {
    BOOL _iskeyframeExists;
    NSMutableDictionary *_allCanvasKeyFrames;
    NSMutableDictionary *_allFeatureKeyFrames;
    NSMutableDictionary *_allInfoStickerKeyFrames;
}

@property (retain, nonatomic) NSMutableDictionary *allCanvasKeyFrames;
@property (retain, nonatomic) NSMutableDictionary *allFeatureKeyFrames;
@property (retain, nonatomic) NSMutableDictionary *allInfoStickerKeyFrames;
@property (nonatomic) BOOL iskeyframeExists;

- (id)allCanvasKeyFrames;
- (id)allFeatureKeyFrames;
- (id)allInfoStickerKeyFrames;
- (BOOL)iskeyframeExists;
- (void)setIskeyframeExists:(BOOL)arg0;
- (void)setAllCanvasKeyFrames:(id)arg0;
- (void)setAllFeatureKeyFrames:(id)arg0;
- (void)setAllInfoStickerKeyFrames:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end