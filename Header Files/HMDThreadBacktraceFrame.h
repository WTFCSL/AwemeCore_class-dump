//
//     Generated by private class-dump
//

@class NSString;

@interface HMDThreadBacktraceFrame : NSObject {
    unsigned long long _stackIndex;
    unsigned long long _address;
    unsigned long long _imageAddress;
    NSString *_imageName;
    unsigned long long _symbolAddress;
    NSString *_symbolName;
}

@property (nonatomic) unsigned long long stackIndex;
@property (nonatomic) unsigned long long address;
@property (nonatomic) unsigned long long imageAddress;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) unsigned long long symbolAddress;
@property (copy, nonatomic) NSString *symbolName;

- (BOOL)symbolicate:(BOOL)arg0;
- (id)awedylib_toDictionary;
- (void)setStackIndex:(unsigned long long)arg0;
- (void)setImageAddress:(unsigned long long)arg0;
- (void)setSymbolAddress:(unsigned long long)arg0;
- (unsigned long long)imageAddress;
- (BOOL)isAppAddress;
- (unsigned long long)symbolAddress;
- (unsigned long long)stackIndex;
- (id)init;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (id)jsonObject;
- (void)setAddress:(unsigned long long)arg0;
- (void)setSymbolName:(id)arg0;
- (id)symbolName;
- (id)description;
- (unsigned long long)address;

@end
