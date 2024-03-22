//
//     Generated by private class-dump
//

@class NSString, NSURL;

@interface VEImageEncoder : NSObject {
    struct CGImageDestination { } *imageDestination;
    NSString *_filePath;
    NSURL *_url;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)arg0 frames:(unsigned long long)arg1 loopCount:(unsigned long long)arg2 exportFilePath:(id)arg3;
- (id)initWithType:(unsigned long long)arg0 frames:(unsigned long long)arg1 exportFilePath:(id)arg2;
- (void)appendImage:(id)arg0 withDuration:(double)arg1;
- (void)appendImageRef:(struct CGImage { } *)arg0 withDuration:(double)arg1;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (unsigned long long)type;
- (void)setUrl:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)cancel;
- (void)dealloc;
- (id)url;
- (BOOL)encode;

@end
