//
//     Generated by private class-dump
//

@class AVAssetReader;

@interface BDUGVideoDecode : NSObject {
    AVAssetReader *_reader;
}

@property (retain, nonatomic) AVAssetReader *reader;

- (BOOL)readWithAsset:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 bufferBlock:(id /* block */)arg2 complete:(id /* block */)arg3;
- (BOOL)read:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 bufferBlock:(id /* block */)arg2 complete:(id /* block */)arg3;
- (void).cxx_destruct;
- (void)stop;
- (id)reader;
- (void)dealloc;
- (void)setReader:(id)arg0;

@end
