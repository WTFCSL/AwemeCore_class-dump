//
//     Generated by private class-dump
//

@class NSDictionary, GXStyleModel;

@interface GXStyle : NSObject {
    void *_rustptr;
    void *_prevRustptr;
    NSDictionary *_styleInfo;
    GXStyleModel *_styleModel;
}

@property (nonatomic) void *rustptr;
@property (nonatomic) void *prevRustptr;
@property (retain, nonatomic) NSDictionary *styleInfo;
@property (retain, nonatomic) GXStyleModel *styleModel;

- (void)setStyleModel:(id)arg0;
- (id)styleModel;
- (void)updateRustPtr;
- (void *)rustptr;
- (void)freePrevRustptr;
- (void)setRustptr:(void *)arg0;
- (void)setupStyleInfo:(id)arg0;
- (BOOL)isValidPtr:(void *)arg0;
- (void)adjustRustCreateRect:(struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; struct { int x0; float x1; } x2; struct { int x0; float x1; } x3; } *)arg0;
- (void)adjustRustCreateDimension:(struct { int x0; float x1; } *)arg0;
- (void)adjustRustCreateSize:(struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; } *)arg0;
- (void *)prevRustptr;
- (void)setPrevRustptr:(void *)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setStyleInfo:(id)arg0;
- (id)styleInfo;

@end
