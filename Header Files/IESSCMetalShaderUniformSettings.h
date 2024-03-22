//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, MTLArgument, IESSCMetalRenderBuffer;

@interface IESSCMetalShaderUniformSettings : NSObject {
    NSString *_uniformSettingsKey;
    NSArray *_arguments;
    IESSCMetalRenderBuffer *_renderBuffer;
    MTLArgument *_argument;
    void *_structBytes;
    NSMutableDictionary *_structInfo;
}

@property (copy, nonatomic) NSString *uniformSettingsKey;
@property (copy, nonatomic) NSArray *arguments;
@property (retain, nonatomic) MTLArgument *argument;
@property (nonatomic) void *structBytes;
@property (retain, nonatomic) NSMutableDictionary *structInfo;
@property (retain, nonatomic) IESSCMetalRenderBuffer *renderBuffer;

- (id)initWithArguments:(id)arg0 uniformSettingsKey:(id)arg1;
- (id)renderBuffer;
- (void)setFloat2:(SEL)arg0 forKey:(id)arg1;
- (void)setFloat4:(SEL)arg0 forKey:(id)arg1;
- (void)setBytes:(void *)arg0 length:(unsigned long long)arg1 forKey:(id)arg2;
- (void)updateUniformLookupTableWithArguments:(id)arg0;
- (id)uniformSettingsKey;
- (void)setStructBytes:(void *)arg0;
- (void)setStructInfo:(id)arg0;
- (id)structInfo;
- (void *)structBytes;
- (void)updateRenderBuffer;
- (id)convertToRenderBuffer;
- (void)setRenderBuffer:(id)arg0;
- (void)setFloat3:(SEL)arg0 forKey:(id)arg1;
- (void)setFloat3x3:(struct { void /* unknown type, empty encoding */ x0[3]; })arg0 forKey:(id)arg1;
- (void)setFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })arg0 forKey:(id)arg1;
- (void)setUniformSettingsKey:(id)arg0;
- (void)setArguments:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)arguments;
- (void)setFloat:(float)arg0 forKey:(id)arg1;
- (id)argument;
- (void)setInt:(int)arg0 forKey:(id)arg1;
- (void)dealloc;
- (void)setArgument:(id)arg0;

@end
