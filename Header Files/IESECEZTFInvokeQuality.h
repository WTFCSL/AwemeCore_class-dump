//
//     Generated by private class-dump
//

@class NSString;

@interface IESECEZTFInvokeQuality : NSObject {
    BOOL _jsEnable;
    BOOL _jsSuccess;
    BOOL _nativeError;
    NSString *_errorReason;
    NSString *_nativeErrorReason;
    NSString *_tag;
    double _start;
    double _end;
}

@property (nonatomic) BOOL jsEnable;
@property (nonatomic) BOOL jsSuccess;
@property (nonatomic) BOOL nativeError;
@property (copy, nonatomic) NSString *errorReason;
@property (copy, nonatomic) NSString *nativeErrorReason;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) double start;
@property (nonatomic) double end;

- (void)setJsEnable:(BOOL)arg0;
- (void)setJsSuccess:(BOOL)arg0;
- (void)setNativeError:(BOOL)arg0;
- (void)setNativeErrorReason:(id)arg0;
- (BOOL)jsEnable;
- (BOOL)jsSuccess;
- (BOOL)nativeError;
- (id)nativeErrorReason;
- (void)setEnd:(double)arg0;
- (double)end;
- (void)setStart:(double)arg0;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)errorReason;
- (id)tag;
- (double)start;
- (void)setErrorReason:(id)arg0;

@end