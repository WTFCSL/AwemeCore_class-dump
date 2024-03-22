//
//     Generated by private class-dump
//

@class NSString, BDFileUploadiOSNetwork;

@interface BDFileUploadiOSDNSGoogleParser : NSObject <BDFileUploadiOSDNSProtocol> {
    BOOL _isUserCancel;
    NSString *_hostname;
    BDFileUploadiOSNetwork *_networkSession;
    id /* block */ _result;
}

@property (nonatomic) BOOL isUserCancel;
@property (copy, nonatomic) NSString *hostname;
@property (retain, nonatomic) BDFileUploadiOSNetwork *networkSession;
@property (copy, nonatomic) id /* block */ result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUserCancel;
- (void)setIsUserCancel:(BOOL)arg0;
- (id)networkSession;
- (void)setNetworkSession:(id)arg0;
- (void)setResult:(id /* block */)arg0;
- (void)setHostname:(id)arg0;
- (void).cxx_destruct;
- (void)_notifyError:(id)arg0;
- (void)start:(id /* block */)arg0;
- (id /* block */)result;
- (id)hostname;
- (id)host;
- (void)cancel;
- (BOOL)cancelled;
- (id)initWithHost:(id)arg0;
- (void)dealloc;
- (long long)parserType;

@end