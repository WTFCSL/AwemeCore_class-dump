//
//     Generated by private class-dump
//

@class NSString;

@interface HTSAudioExportParams : IESMMObject {
    unsigned int _formatID;
    NSString *_fileType;
    long long _bitRate;
    long long _channels;
    long long _sampleRate;
}

@property (copy, nonatomic) NSString *fileType;
@property (nonatomic) unsigned int formatID;
@property (nonatomic) long long bitRate;
@property (nonatomic) long long channels;
@property (nonatomic) long long sampleRate;

- (long long)channels;
- (id)init;
- (long long)bitRate;
- (void)setChannels:(long long)arg0;
- (void).cxx_destruct;
- (long long)sampleRate;
- (id)fileType;
- (void)setFileType:(id)arg0;
- (void)setSampleRate:(long long)arg0;
- (unsigned int)formatID;
- (void)setFormatID:(unsigned int)arg0;
- (void)setBitRate:(long long)arg0;

@end
