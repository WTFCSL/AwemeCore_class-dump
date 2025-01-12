//
//     Generated by private class-dump
//

@class NSString, NSData, NSError;

@interface UABSDSocket : UABufferSocket {
    int _family;
    NSString *_familyName;
    NSData *_ipAddress;
    NSError *_dnsError;
    unsigned long long _retries;
    int _socketFd;
}

@property (readonly, nonatomic) int socketFd;
@property (readonly, nonatomic) NSString *ipType;

+ (id)cellularIPTypeSet;

- (id)initWithHost:(id)arg0 port:(id)arg1;
- (void)bsdSocketOccursErrorWithMark:(id)arg0;
- (void)dnsResolution;
- (void)createSocketFd;
- (BOOL)isSocketFdValidate;
- (void)errorWithCode:(int)arg0 mark:(id)arg1;
- (id)ipType;
- (int)socketFd;
- (void)connect;
- (void)writeData:(id)arg0;
- (void)disconnect;
- (void)readData;
- (void).cxx_destruct;
- (void)dealloc;

@end
