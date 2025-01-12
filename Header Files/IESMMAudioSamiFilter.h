//
//     Generated by private class-dump
//

@class IESMMAudioSamiConfig;

@interface IESMMAudioSamiFilter : VEAudioFilter {
    void *_handle;
    int _channels;
    IESMMAudioSamiConfig *_config;
}

@property (nonatomic) int channels;
@property (retain, nonatomic) IESMMAudioSamiConfig *config;

- (id)initWithSampleRate:(int)arg0 channels:(int)arg1 config:(id)arg2;
- (int)process:(float **)arg0 samples:(unsigned long long)arg1 channels:(int)arg2;
- (int)handleIdentify;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })defaultConfigJson;
- (int)audioMetricesProcess:(float **)arg0 samples:(unsigned long long)arg1 channels:(int)arg2;
- (int)processEnd;
- (id)fetchResult;
- (int)channels;
- (void)setConfig:(id)arg0;
- (void)setChannels:(int)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)dealloc;

@end
