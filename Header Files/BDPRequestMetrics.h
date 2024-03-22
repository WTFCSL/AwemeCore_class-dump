//
//     Generated by private class-dump
//

@class NSString;

@interface BDPRequestMetrics : NSObject {
    BOOL _reuseConnect;
    BOOL _isCached;
    char _cacheStatus;
    long long _dns;
    long long _tcp;
    long long _ssl;
    long long _connect;
    long long _send;
    long long _wait;
    long long _receive;
    long long _duration;
    long long _domainLookupStart;
    long long _domainLookupEnd;
    long long _connectStart;
    long long _connectEnd;
    long long _SSLconnectionStart;
    long long _SSLconnectionEnd;
    long long _requestStart;
    long long _requestEnd;
    long long _responseStart;
    long long _responseEnd;
    NSString *_peerIP;
    long long _port;
    long long _fetchStart;
    NSString *_networkProtocolName;
    unsigned long long _receivedDataLength;
    unsigned long long _receivedResponseContentLength;
    unsigned long long _receivedBytesCount;
    unsigned long long _sendBytesCount;
    long long _downstreamThroughputKbps;
    long long _estimateNetType;
    long long _rtt;
    long long _httpRtt;
    long long _transportRtt;
    long long _quicRaceResult;
    long long _estimateNetScore;
}

@property (nonatomic) long long dns;
@property (nonatomic) long long tcp;
@property (nonatomic) long long ssl;
@property (nonatomic) long long connect;
@property (nonatomic) long long send;
@property (nonatomic) long long wait;
@property (nonatomic) long long receive;
@property (nonatomic) BOOL reuseConnect;
@property (nonatomic) long long duration;
@property (nonatomic) long long domainLookupStart;
@property (nonatomic) long long domainLookupEnd;
@property (nonatomic) long long connectStart;
@property (nonatomic) long long connectEnd;
@property (nonatomic) long long SSLconnectionStart;
@property (nonatomic) long long SSLconnectionEnd;
@property (nonatomic) long long requestStart;
@property (nonatomic) long long requestEnd;
@property (nonatomic) long long responseStart;
@property (nonatomic) long long responseEnd;
@property (copy, nonatomic) NSString *peerIP;
@property (nonatomic) long long port;
@property (nonatomic) long long fetchStart;
@property (copy, nonatomic) NSString *networkProtocolName;
@property (nonatomic) BOOL isCached;
@property (nonatomic) unsigned long long receivedDataLength;
@property (nonatomic) char cacheStatus;
@property (nonatomic) unsigned long long receivedResponseContentLength;
@property (nonatomic) unsigned long long receivedBytesCount;
@property (nonatomic) unsigned long long sendBytesCount;
@property (nonatomic) long long downstreamThroughputKbps;
@property (nonatomic) long long estimateNetType;
@property (nonatomic) long long rtt;
@property (nonatomic) long long httpRtt;
@property (nonatomic) long long transportRtt;
@property (nonatomic) long long quicRaceResult;
@property (nonatomic) long long estimateNetScore;

- (long long)ssl;
- (unsigned long long)receivedResponseContentLength;
- (long long)tcp;
- (BOOL)reuseConnect;
- (void)setTcp:(long long)arg0;
- (void)setSsl:(long long)arg0;
- (void)setReuseConnect:(BOOL)arg0;
- (char)cacheStatus;
- (void)setCacheStatus:(char)arg0;
- (void)setHttpRtt:(long long)arg0;
- (long long)httpRtt;
- (void)setReceivedResponseContentLength:(unsigned long long)arg0;
- (void)setDownstreamThroughputKbps:(long long)arg0;
- (long long)downstreamThroughputKbps;
- (long long)transportRtt;
- (void)setTransportRtt:(long long)arg0;
- (long long)estimateNetScore;
- (long long)quicRaceResult;
- (long long)SSLconnectionStart;
- (long long)SSLconnectionEnd;
- (unsigned long long)sendBytesCount;
- (long long)estimateNetType;
- (void)setEstimateNetType:(long long)arg0;
- (void)setSSLconnectionStart:(long long)arg0;
- (void)setSSLconnectionEnd:(long long)arg0;
- (void)setReceivedDataLength:(unsigned long long)arg0;
- (void)setSendBytesCount:(unsigned long long)arg0;
- (void)setQuicRaceResult:(long long)arg0;
- (void)setEstimateNetScore:(long long)arg0;
- (long long)fetchStart;
- (void)setRequestStart:(long long)arg0;
- (long long)domainLookupStart;
- (long long)send;
- (long long)connect;
- (long long)requestStart;
- (void)setConnectEnd:(long long)arg0;
- (void)setDomainLookupStart:(long long)arg0;
- (long long)responseEnd;
- (long long)requestEnd;
- (long long)port;
- (void)setRequestEnd:(long long)arg0;
- (unsigned long long)receivedDataLength;
- (id)init;
- (void)setPort:(long long)arg0;
- (void).cxx_destruct;
- (long long)responseStart;
- (long long)connectStart;
- (long long)domainLookupEnd;
- (void)setFetchStart:(long long)arg0;
- (long long)connectEnd;
- (void)setNetworkProtocolName:(id)arg0;
- (long long)duration;
- (void)setResponseEnd:(long long)arg0;
- (id)networkProtocolName;
- (void)setConnectStart:(long long)arg0;
- (long long)wait;
- (void)setResponseStart:(long long)arg0;
- (void)setDomainLookupEnd:(long long)arg0;
- (void)setConnect:(long long)arg0;
- (void)setDuration:(long long)arg0;
- (BOOL)isCached;
- (void)setIsCached:(BOOL)arg0;
- (id)peerIP;
- (void)setPeerIP:(id)arg0;
- (long long)rtt;
- (void)setRtt:(long long)arg0;
- (void)setSend:(long long)arg0;
- (void)setWait:(long long)arg0;
- (long long)receive;
- (void)setReceive:(long long)arg0;
- (long long)dns;
- (void)setDns:(long long)arg0;
- (unsigned long long)receivedBytesCount;
- (void)setReceivedBytesCount:(unsigned long long)arg0;

@end