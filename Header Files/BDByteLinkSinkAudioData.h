//
//     Generated by private class-dump
//

@class NSString, NSData;

@interface BDByteLinkSinkAudioData : NSObject {
    NSString *_ip;
    NSData *_data;
    unsigned long long _pts;
}

@property (retain, nonatomic) NSString *ip;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long pts;

- (unsigned long long)pts;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setIp:(id)arg0;
- (id)ip;
- (void)setPts:(unsigned long long)arg0;

@end