//
//     Generated by private class-dump
//

@class NSCache;

@interface IESLiveEmojiDecoderPool : NSObject {
    NSCache *_webpDecoders;
}

@property (retain, nonatomic) NSCache *webpDecoders;

- (id)webpDecoders;
- (id)decoderForUrl:(id)arg0;
- (void)setWebpDecoders:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clean;

@end
