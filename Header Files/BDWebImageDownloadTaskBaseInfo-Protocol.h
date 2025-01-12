//
//     Generated by private class-dump
//

@class NSURL, NSURLRequest, NSString;

@protocol BDWebImageDownloadTaskBaseInfo <NSObject>

@property (readonly, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURLRequest *request;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } smartCropRect;
@property (readonly, nonatomic) long long receivedSize;
@property (readonly, nonatomic) long long expectedSize;
@property (readonly, nonatomic) long long realSize;

- (long long)realSize;
- (long long)receivedSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smartCropRect;
- (void)setSmartCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeoutInterval:(double)arg0;
- (void)setRequest:(id)arg0;
- (id)identifier;
- (double)timeoutIntervalForResource;
- (double)timeoutInterval;
- (id)request;
- (void)setTimeoutIntervalForResource:(double)arg0;
- (id)url;
- (void)setIdentifier:(id)arg0;
- (long long)expectedSize;

@end
