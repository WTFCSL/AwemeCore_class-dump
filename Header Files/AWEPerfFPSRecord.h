//
//     Generated by private class-dump
//

@protocol NSCopying;

@interface AWEPerfFPSRecord : NSObject <NSCopying> {
    double timeoutInterval;
    id /* block */ timeoutCompletion;
    id<NSCopying> key;
    unsigned char state;
    unsigned char anrState;
    struct { unsigned int frames; double duration; double hitchDuration; unsigned int drop3Count; double drop3Duration; unsigned int drop7Count; double drop7Duration; unsigned int jankCount; double jankDuration; unsigned int bigJankCount; double bigJankDuration; unsigned int anrCount; double anrDuration; } totalMetrics;
    struct { unsigned int frames; double duration; double hitchDuration; unsigned int drop3Count; double drop3Duration; unsigned int drop7Count; double drop7Duration; unsigned int jankCount; double jankDuration; unsigned int bigJankCount; double bigJankDuration; unsigned int anrCount; double anrDuration; } scrollMetrics;
    unsigned long long scrollCount;
}

- (id)initWithKey:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)description;

@end
