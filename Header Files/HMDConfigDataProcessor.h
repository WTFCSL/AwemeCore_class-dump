//
//     Generated by private class-dump
//

@class NSString;
@protocol HMDConfigDataProcessDataSource, HMDConfigDataProcessDelegate;

@interface HMDConfigDataProcessor : NSObject <HMDConfigDataProcess> {
    id<HMDConfigDataProcessDelegate> _delegate;
    id<HMDConfigDataProcessDataSource> _dataSource;
}

@property (weak, nonatomic) id<HMDConfigDataProcessDelegate> delegate;
@property (weak, nonatomic) id<HMDConfigDataProcessDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mergeCacheDict:(id)arg0 withMergeDict:(id)arg1;
+ (id)_mutableCopyDictionary:(id)arg0;

- (id)_mergeConfigDict:(id)arg0 withAppID:(id)arg1 appDict:(id)arg2;
- (void)processResponseData:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
