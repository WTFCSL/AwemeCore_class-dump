//
//     Generated by private class-dump
//

@class NSString;

@interface BDPDNSResolver : NSObject {
    BOOL _done;
    BOOL _cancel;
    NSString *_hostName;
    NSString *_ip;
}

@property (retain) NSString *hostName;
@property BOOL done;
@property BOOL cancel;
@property (retain) NSString *ip;

- (void)setDone:(BOOL)arg0;
- (BOOL)done;
- (void).cxx_destruct;
- (id)hostName;
- (void)setCancel:(BOOL)arg0;
- (BOOL)cancel;
- (void)setHostName:(id)arg0;
- (void)setIp:(id)arg0;
- (id)ip;

@end
