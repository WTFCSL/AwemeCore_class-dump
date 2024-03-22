//
//     Generated by private class-dump
//

@class NSData, NSString, NSDate;
@protocol BTDSimplePingDelegate;

@interface BTDSimplePing : NSObject {
    BOOL _nextSequenceNumberHasWrapped;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    NSString *_hostName;
    id<BTDSimplePingDelegate> _delegate;
    long long _addressStyle;
    NSData *_hostAddress;
    NSString *_IPAddress;
    long long _packetLength;
    struct __CFHost { } *_host;
    struct __CFSocket { } *_socket;
    NSDate *_pingStartDate;
}

@property (copy, nonatomic) NSData *hostAddress;
@property (copy, nonatomic) NSString *IPAddress;
@property (nonatomic) unsigned short nextSequenceNumber;
@property (nonatomic) BOOL nextSequenceNumberHasWrapped;
@property (retain, nonatomic) struct __CFHost { } *host;
@property (retain, nonatomic) struct __CFSocket { } *socket;
@property (retain, nonatomic) NSDate *pingStartDate;
@property (readonly, copy, nonatomic) NSString *hostName;
@property (weak, nonatomic) id<BTDSimplePingDelegate> delegate;
@property (nonatomic) long long addressStyle;
@property (readonly, nonatomic) long long packetLength;
@property (readonly, nonatomic) unsigned char hostAddressFamily;
@property (readonly, nonatomic) unsigned short identifier;

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg0 timeToLive:(long long *)arg1;

- (id)packetWithPingData:(id)arg0;
- (void)sendPacket:(id)arg0;
- (void)setIPAddress:(id)arg0;
- (void)setPingStartDate:(id)arg0;
- (BOOL)validatePing4ResponsePacket:(id)arg0 sequenceNumber:(unsigned short *)arg1 timeToLive:(long long *)arg2;
- (BOOL)validatePingResponsePacket:(id)arg0 sequenceNumber:(unsigned short *)arg1 timeToLive:(long long *)arg2;
- (id)pingStartDate;
- (long long)packetLength;
- (void)setHost:(struct __CFHost { } *)arg0;
- (void)readData;
- (void).cxx_destruct;
- (void)setNextSequenceNumber:(unsigned short)arg0;
- (void)stopHostResolution;
- (void)stop;
- (BOOL)validatePing6ResponsePacket:(id)arg0 sequenceNumber:(unsigned short *)arg1;
- (void)setHostAddress:(id)arg0;
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
- (id)IPAddress;

@end
