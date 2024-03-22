//
//     Generated by private class-dump
//

@class UABSDSocket, NSMutableData, NSString;

@interface UASSLSocket : UABufferSocket <UASocketDelegate> {
    BOOL _finishedHandshake;
    struct SSLContext { } *_sslContext;
    UABSDSocket *_bsdSocket;
    NSMutableData *_sslWritableData;
    NSMutableData *_sslReadableData;
}

@property (nonatomic) struct SSLContext { } *sslContext;
@property (nonatomic) BOOL finishedHandshake;
@property (retain, nonatomic) UABSDSocket *bsdSocket;
@property (retain, nonatomic) NSMutableData *sslWritableData;
@property (retain, nonatomic) NSMutableData *sslReadableData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearBuffer:(id)arg0 withLength:(unsigned long long)arg1;
+ (void)clearBuffer:(id)arg0;

- (void)clearAllBuffers;
- (void)socket:(id)arg0 didConnectThroughIPType:(id)arg1;
- (void)socketDidWriteComplete:(id)arg0;
- (void)socket:(id)arg0 didReadData:(id)arg1;
- (void)socket:(id)arg0 didOccurError:(id)arg1;
- (void)setWifiwwanNetwork:(BOOL)arg0;
- (id)initWithHost:(id)arg0 port:(id)arg1;
- (BOOL)wifiwwanNetwork;
- (BOOL)isSSLContextValidate;
- (void)sslHandshakeThroughIPType:(id)arg0;
- (void)sslErrorWithStatus:(int)arg0 mark:(id)arg1;
- (void)setSslContext:(struct SSLContext { } *)arg0;
- (BOOL)finishedHandshake;
- (void)setFinishedHandshake:(BOOL)arg0;
- (id)bsdSocket;
- (void)setBsdSocket:(id)arg0;
- (id)sslWritableData;
- (void)setSslWritableData:(id)arg0;
- (id)sslReadableData;
- (void)setSslReadableData:(id)arg0;
- (void)connect;
- (void)writeData:(id)arg0;
- (void)disconnect;
- (void)readData;
- (void).cxx_destruct;
- (BOOL)useCellular;
- (void)socketDidClose:(id)arg0;
- (void)dealloc;
- (struct SSLContext { } *)sslContext;
- (void)setUseCellular:(BOOL)arg0;

@end
