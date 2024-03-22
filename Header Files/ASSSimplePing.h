//
//     Generated by private class-dump
//

@class NSData, NSString;
@protocol ASSSimplePingDelegate;

@interface ASSSimplePing : NSObject {
    BOOL _nextSequenceNumberHasWrapped;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    NSString *_hostName;
    id<ASSSimplePingDelegate> _delegate;
    long long _addressStyle;
    NSData *_hostAddress;
    struct __CFHost { } *_host;
    struct __CFSocket { } *_socket;
}

@property (copy, nonatomic) NSData *hostAddress;
@property (nonatomic) unsigned short nextSequenceNumber;
@property (nonatomic) BOOL nextSequenceNumberHasWrapped;
@property (retain, nonatomic) struct __CFHost { } *host;
@property (retain, nonatomic) struct __CFSocket { } *socket;
@property (readonly, copy, nonatomic) NSString *hostName;
@property (weak, nonatomic) id<ASSSimplePingDelegate> delegate;
@property (nonatomic) long long addressStyle;
@property (readonly, nonatomic) unsigned char hostAddressFamily;
@property (readonly, nonatomic) unsigned short identifier;

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg0;

- (void)setHost:(struct __CFHost { } *)arg0;
- (BOOL)validatePing4ResponsePacket:(id)arg0 sequenceNumber:(unsigned short *)arg1;
- (void)readData;
- (void).cxx_destruct;
- (void)setNextSequenceNumber:(unsigned short)arg0;
- (void)stopHostResolution;
- (BOOL)validatePingResponsePacket:(id)arg0 sequenceNumber:(unsigned short *)arg1;
- (void)stop;
- (BOOL)validatePing6ResponsePacket:(id)arg0 sequenceNumber:(unsigned short *)arg1;
- (void)setHostAddress:(id)arg0;
- (void)sendPingWithData:(id)arg0;
- (unsigned short)identifier;
- (struct __CFHost { } *)host;
- (id)hostName;
- (void)setNextSequenceNumberHasWrapped:(BOOL)arg0;
- (void)setAddressStyle:(long long)arg0;
- (id)delegate;
- (struct __CFSocket { } *)socket;
- (unsigned short)nextSequenceNumber;
- (id)hostAddress;
- (void)stopSocket;
- (BOOL)nextSequenceNumberHasWrapped;
- (long long)addressStyle;
- (void)setSocket:(struct __CFSocket { } *)arg0;
- (void)didFailWithError:(id)arg0;
- (BOOL)validateSequenceNumber:(unsigned short)arg0;
- (void)hostResolutionDone;
- (void)start;
- (id)initWithHostName:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (unsigned char)hostAddressFamily;
- (id)pingPacketWithType:(unsigned char)arg0 payload:(id)arg1 requiresChecksum:(BOOL)arg2;
- (void)didFailWithHostStreamError:(struct { long long x0; int x1; })arg0;
- (void)startWithHostAddress;

@end
