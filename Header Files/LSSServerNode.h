//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface LSSServerNode : NSObject <NSMutableCopying> {
    NSString *_IP;
    NSDictionary *_nodeInfo;
}

@property (copy) NSDictionary *nodeInfo;
@property (copy, nonatomic) NSString *IP;
@property (readonly, nonatomic) unsigned long long DNSMode;
@property (readonly, nonatomic, getter=isTCPFastOpenAvailable) BOOL TCPFastOpenAvailable;
@property (readonly, nonatomic) BOOL shouldPreconnectWithTCPFastOpen;
@property (readonly, copy, nonatomic) NSString *symbol;

+ (id)nodeWithNodeInfo:(id)arg0;

- (id)nodeInfo;
- (void)setNodeInfo:(id)arg0;
- (id)IP;
- (BOOL)shouldPreconnectWithTCPFastOpen;
- (BOOL)preconnectWithTCPFastOpen;
- (BOOL)isIpv6Address;
- (BOOL)isTCPFastOpenAvailable;
- (BOOL)ipv6TcpProbe;
- (void)updateWithNodeInfo:(id)arg0;
- (void)setIP:(id)arg0;
- (unsigned long long)DNSMode;
- (void).cxx_destruct;
- (id)symbol;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isValidIPv4Address;

@end
