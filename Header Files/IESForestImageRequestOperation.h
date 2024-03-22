//
//     Generated by private class-dump
//

@class NSString, BDWebImageRequest;

@interface IESForestImageRequestOperation : NSObject <IESForestRequestOperation> {
    NSString *_url;
    BDWebImageRequest *_imageRequest;
}

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) BDWebImageRequest *imageRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (BOOL)cancel;
- (id)url;
- (id)imageRequest;
- (void)setImageRequest:(id)arg0;
- (id)initWithImageRequest:(id)arg0;

@end
