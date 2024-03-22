//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAVAudioStreamingRecorderOutput : NSObject <IESLiveAQAudioRecorderOutput> {
    struct OpaqueAudioFileID { } *_audioFile;
    long long _audioPacket;
    BOOL _saveAudioToFile;
    BOOL _convertSettingReady;
    BOOL _convertSettingDidSet;
    BOOL _readySaveAudioToFile;
    long long _audioType;
    NSString *_filePath;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioFormat;
}

@property (nonatomic) BOOL convertSettingReady;
@property (nonatomic) BOOL convertSettingDidSet;
@property (nonatomic) BOOL readySaveAudioToFile;
@property (nonatomic) BOOL saveAudioToFile;
@property (nonatomic) long long audioType;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioFormat;
@property (copy, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSaveAudioToFile:(BOOL)arg0;
- (BOOL)openAudioFile;
- (void)closeAudioFile;
- (void)clearAudioFile;
- (BOOL)saveAudioToFile;
- (void)didReceiveAudio:(struct IESLiveAudioQueueInputData { void *x0; struct OpaqueAudioQueue *x1; struct AudioQueueBuffer *x2; struct AudioTimeStamp *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; })arg0;
- (void)copyEncoderCookieToFile:(struct OpaqueAudioQueue { } *)arg0 error:(id *)arg1;
- (void)setConvertSettingDidSet:(BOOL)arg0;
- (BOOL)convertSettingDidSet;
- (BOOL)convertBasicSetting;
- (void)setConvertSettingReady:(BOOL)arg0;
- (BOOL)convertSettingReady;
- (void)setReadySaveAudioToFile:(BOOL)arg0;
- (BOOL)readySaveAudioToFile;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioFormat;
- (id)init;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (void)setup;
- (void)setAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (long long)audioType;
- (void)setAudioType:(long long)arg0;

@end