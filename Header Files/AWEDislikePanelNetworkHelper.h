//
//     Generated by private class-dump
//

@protocol AWEHttpTask;

@interface AWEDislikePanelNetworkHelper : NSObject {
    BOOL _isRequesting;
    id<AWEHttpTask> _task;
}

@property (nonatomic) BOOL isRequesting;
@property (weak, nonatomic) id<AWEHttpTask> task;

- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (id)arrayToJsonString:(id)arg0;
- (id)modelToJsonDictionary:(id)arg0;
- (void)requestDimensionInfo:(id)arg0 formerDimensions:(id)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (id)task;

@end
