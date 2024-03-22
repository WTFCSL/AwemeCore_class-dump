//
//     Generated by private class-dump
//

@interface SAMICore_AudioBuffer : NSObject {
    unsigned int _numberChannels;
    unsigned int _numberSamples;
    int _isInterleave;
    void *_data;
}

@property (nonatomic) unsigned int numberChannels;
@property (nonatomic) unsigned int numberSamples;
@property (nonatomic) int isInterleave;
@property (nonatomic) void *data;

- (void)setNumberChannels:(unsigned int)arg0;
- (void)setNumberSamples:(unsigned int)arg0;
- (void)setIsInterleave:(int)arg0;
- (int)isInterleave;
- (unsigned int)numberChannels;
- (id)initWithNumberSamples:(int)arg0 numberChannels:(int)arg1 isInterleave:(BOOL)arg2;
- (void *)data;
- (void)setData:(void *)arg0;
- (void)destroy;
- (void)dealloc;
- (unsigned int)numberSamples;

@end