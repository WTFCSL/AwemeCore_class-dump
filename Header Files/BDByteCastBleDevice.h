//
//     Generated by private class-dump
//

@class NSString;

@interface BDByteCastBleDevice : NSObject {
    unsigned short _bdlinkPort;
    unsigned short _mirrorPort;
    NSString *_ip;
    NSString *_netMask;
}

@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *netMask;
@property (nonatomic) unsigned short bdlinkPort;
@property (nonatomic) unsigned short mirrorPort;

- (id)netMask;
- (void)setNetMask:(id)arg0;
- (void)setBdlinkPort:(unsigned short)arg0;
- (void)setMirrorPort:(unsigned short)arg0;
- (unsigned short)bdlinkPort;
- (unsigned short)mirrorPort;
- (void).cxx_destruct;
- (void)setIp:(id)arg0;
- (id)ip;

@end
