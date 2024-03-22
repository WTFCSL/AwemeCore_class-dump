//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWENetworkDownloadRequest;

@interface ACCDownloadFileTaskImpl : NSObject <ACCDownloadFileTask> {
    NSDictionary *_resultExtra;
    NSString *_URLString;
    AWENetworkDownloadRequest *_request;
    double _progress;
}

@property (copy, nonatomic) NSString *URLString;
@property (retain, nonatomic) AWENetworkDownloadRequest *request;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSDictionary *resultExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resultExtra;
- (void)setResultExtra:(id)arg0;
- (id)URLString;
- (void).cxx_destruct;
- (void)setRequest:(id)arg0;
- (id)request;
- (void)cancel;
- (double)progress;
- (void)setProgress:(double)arg0;
- (void)setURLString:(id)arg0;

@end
