//
//     Generated by private class-dump
//

@interface SAMICore_AudioBlock : NSObject {
    unsigned int _numberAudioData;
    long long _dataType;
    id _audioData;
}

@property (nonatomic) long long dataType;
@property (nonatomic) unsigned int numberAudioData;
@property (retain, nonatomic) id audioData;

- (void)setNumberAudioData:(unsigned int)arg0;
- (unsigned int)numberAudioData;
- (void)setDataType:(long long)arg0;
- (long long)dataType;
- (void)dealloc;
- (id)audioData;
- (void)setAudioData:(id)arg0;

@end
