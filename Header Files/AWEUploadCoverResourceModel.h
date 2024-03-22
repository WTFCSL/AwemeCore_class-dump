//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUploadCoverResourceModel : MTLModel <MTLJSONSerializing> {
    NSString *_coverTextResourceId;
    NSString *_cropedCoverResourceId;
    NSString *_videoCoverResourceId;
    NSString *_paymentVideoCoverResourceId;
}

@property (copy, nonatomic) NSString *coverTextResourceId;
@property (copy, nonatomic) NSString *cropedCoverResourceId;
@property (copy, nonatomic) NSString *videoCoverResourceId;
@property (copy, nonatomic) NSString *paymentVideoCoverResourceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)coverTextResourceId;
- (void)setCoverTextResourceId:(id)arg0;
- (id)cropedCoverResourceId;
- (id)videoCoverResourceId;
- (id)paymentVideoCoverResourceId;
- (void)setPaymentVideoCoverResourceId:(id)arg0;
- (void)setCropedCoverResourceId:(id)arg0;
- (void)setVideoCoverResourceId:(id)arg0;
- (void).cxx_destruct;

@end