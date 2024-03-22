//
//     Generated by private class-dump
//

@class NSDictionary, IESECLiveAPIClientRequest, NSError, IESECHTTPRequest, IESECHTTPClientRequestResult;

@interface IESECLiveAPIClientResult : NSObject {
    IESECLiveAPIClientRequest *_request;
    id _model;
    NSError *_error;
    NSDictionary *_monitorParams;
    IESECHTTPRequest *_originRequest;
    IESECHTTPClientRequestResult *_originResult;
}

@property (retain, nonatomic) IESECLiveAPIClientRequest *request;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *monitorParams;
@property (retain, nonatomic) IESECHTTPRequest *originRequest;
@property (retain, nonatomic) IESECHTTPClientRequestResult *originResult;

- (id)monitorParams;
- (void)setMonitorParams:(id)arg0;
- (id)originRequest;
- (void)setOriginRequest:(id)arg0;
- (id)originResult;
- (void)setOriginResult:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setRequest:(id)arg0;
- (id)request;
- (void)setError:(id)arg0;
- (id)error;

@end