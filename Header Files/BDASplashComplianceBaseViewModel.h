//
//     Generated by private class-dump
//

@class NSDictionary, NSString;
@protocol BDASplashComplianceViewHolderDelegate;

@interface BDASplashComplianceBaseViewModel : NSObject <BDASplashViewModelCreateProtocol, BDASplashViewModelProtocol, BDASplashViewModelDownloadProtocol> {
    NSDictionary *_config;
    long long _complianceType;
    id<BDASplashComplianceViewHolderDelegate> _delegate;
}

@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) long long complianceType;
@property (weak, nonatomic) id<BDASplashComplianceViewHolderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)downloadResourceWithComplianceModel:(id)arg0 downloadBlock:(id /* block */)arg1;
+ (id)getSplashHolderWithModel:(id)arg0 delegate:(id)arg1;

- (BOOL)loadResource;
- (id)splashImageWithImageInfo:(id)arg0 Key:(id)arg1;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewHolder:(id)arg1;
- (id)initWithModel:(id)arg0 delegate:(id)arg1;
- (long long)complianceType;
- (void)setComplianceType:(long long)arg0;
- (void)asyncGetImageWithKey:(id)arg0 completionBlock:(id /* block */)arg1;
- (BOOL)checkParams;
- (long long)getModelType;
- (void)asyncGetImageWithImageInfo:(id)arg0 key:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)splashVideoDictWithVideoInfo:(id)arg0 Key:(id)arg1;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
