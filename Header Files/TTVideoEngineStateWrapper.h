//
//     Generated by private class-dump
//

@class TTVideoEngine;

@interface TTVideoEngineStateWrapper : NSObject {
    BOOL _hasSet;
    TTVideoEngine *_videoEngine;
}

@property (weak, nonatomic) TTVideoEngine *videoEngine;
@property (nonatomic) BOOL hasSet;

- (id)videoEngine;
- (void)setVideoEngine:(id)arg0;
- (void).cxx_destruct;
- (id)initWithEngine:(id)arg0;
- (BOOL)hasSet;
- (void)setHasSet:(BOOL)arg0;

@end
