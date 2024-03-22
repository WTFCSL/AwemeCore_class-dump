//
//     Generated by private class-dump
//

@class NSString, HMDCrashBinaryImage;

@interface HMDCrashFrameInfo : NSObject {
    BOOL _symbolicated;
    unsigned long long _addr;
    HMDCrashBinaryImage *_image;
    NSString *_symbolName;
    unsigned long long _symbolAddress;
}

@property (nonatomic) unsigned long long addr;
@property (retain, nonatomic) HMDCrashBinaryImage *image;
@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) unsigned long long symbolAddress;
@property (nonatomic) BOOL symbolicated;

+ (id)frameInfoWithAddr:(unsigned long long)arg0 imageLoader:(id)arg1;

- (void)setSymbolAddress:(unsigned long long)arg0;
- (unsigned long long)symbolAddress;
- (BOOL)symbolicated;
- (void)setSymbolicated:(BOOL)arg0;
- (void).cxx_destruct;
- (id)image;
- (void)setSymbolName:(id)arg0;
- (id)symbolName;
- (void)setImage:(id)arg0;
- (unsigned long long)addr;
- (void)setAddr:(unsigned long long)arg0;

@end