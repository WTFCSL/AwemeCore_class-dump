//
//     Generated by private class-dump
//

@class NSDictionary, AWEResourceUploadParametersResponseModel;

@protocol AWEPublishTaskBusinessProtocol <NSObject>

@property (nonatomic) unsigned long long flowType;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (copy, nonatomic) NSDictionary *logExtraDict;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)uploadParamsCache;
- (void)setUploadParamsCache:(id)arg0;
- (void)resetPreUploadTask;
- (void)saveDraftType:(long long)arg0 completion:(id /* block */)arg1 isBackup:(BOOL)arg2;
- (void)saveDraftPrepareForExecuteWithCompletion:(id /* block */)arg0;
- (unsigned long long)flowType;
- (void)setFlowType:(unsigned long long)arg0;

@end
