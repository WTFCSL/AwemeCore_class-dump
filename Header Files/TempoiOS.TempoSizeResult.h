//
//     Generated by private class-dump
//

@interface TempoiOS.TempoSizeResult : NSObject {
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ template;
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic, retain) void /* unknown type, empty encoding */ template;
@property (nonatomic, retain) void /* unknown type, empty encoding */ error;

- (id)initWithTemplate:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 error:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setError:(id)arg0;
- (id)error;
- (id)template;
- (void)setTemplate:(id)arg0;

@end
