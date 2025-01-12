//
//     Generated by private class-dump
//

@class LSLiveAudioCleanerFormat;

@interface LSLiveAudioCleaner : NSObject {
    struct AudioCleaner { struct Transform *x0[2]; struct Transform *x1; int x2; int x3; int x4; struct FilterNLMS *x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; int x15; BOOL x16; float x17; float *x18; float *x19; float *x20; float *x21; float *x22; float *x23; struct COMPLEX_s *x24; int x25; int x26; int x27; int x28; int x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float *x38; float *x39; float *x40; float *x41; float *x42; float *x43; float *x44; float *x45; float x46; float x47; int x48; int x49; float x50; float x51; float x52; float x53; float x54; int x55; float x56; float x57; float x58; float x59; float x60; float x61; float x62; float x63; float x64; float x65; float x66; float x67; float x68; float x69; float x70; int x71; int x72; int x73; int x74; int x75; int x76; int x77; int x78; int x79; int x80; int x81; int x82; int x83; float *x84; float *x85; float *x86; float *x87; float *x88; float **x89; unsigned int x90; struct AudioLogger *x91; struct AudioLogger *x92; struct AudioLogger *x93; } *_audioCleaner;
    int _bufferCapasity;
    LSLiveAudioCleanerFormat *_format;
    float *_bufferData;
    float *_leftChannel;
    float *_leftChannelOut;
    float *_input;
    float *_output;
    int _bufferLength;
    int _samplesUnit;
    struct AudioBufferQueue { float *bufferData; unsigned int dataSize; } _srcQueue;
    struct AudioBufferQueue { float *bufferData; unsigned int dataSize; } _dstQueue;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_preFile;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_postFile;
}

- (void)resetBufferQueue:(struct AudioBufferQueue { float *x0; unsigned int x1; } *)arg0;
- (BOOL)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0;
- (BOOL)process:(float **)arg0 andInput:(float *)arg1 andLen:(int)arg2 andSamplePerChannel:(int)arg3;
- (void)updateFormat:(id)arg0;
- (void)createBufferQueue:(struct AudioBufferQueue { float *x0; unsigned int x1; } *)arg0;
- (void)freeBufferQueue:(struct AudioBufferQueue { float *x0; unsigned int x1; } *)arg0;
- (void)pushQueue:(struct AudioBufferQueue { float *x0; unsigned int x1; } *)arg0 srcData:(float *)arg1 dataSize:(unsigned int)arg2;
- (int)dequeue:(struct AudioBufferQueue { float *x0; unsigned int x1; } *)arg0 dstData:(float *)arg1 outputSize:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;
- (void)dealloc;
- (id)initWithSampleRate:(double)arg0;

@end
