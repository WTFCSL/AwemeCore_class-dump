//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface ACCCreationToolMediaTypeObject : NSObject {
    id /* block */ _didChange;
    NSMutableSet *_mediaTypes;
}

@property (retain, nonatomic) NSMutableSet *mediaTypes;
@property (copy, nonatomic) id /* block */ didChange;

- (BOOL)supportVideo;
- (BOOL)supportImage;
- (void)addVideo;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)reset;
- (void)setMediaTypes:(id)arg0;
- (id)mediaTypes;
- (void)addImage;
- (id /* block */)didChange;
- (void)setDidChange:(id /* block */)arg0;

@end